
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct msm_dsi_host {int src_clk_rate; int byte_clk_rate; unsigned int esc_clk_rate; int format; } ;


 int FUNC_0 (char*,unsigned int,int) ;
 unsigned int FUNC_1 (unsigned long,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct msm_dsi_host*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct msm_dsi_host*,int) ;

int FUNC_6(struct msm_dsi_host *VAR_1, bool VAR_2)
{
 u32 VAR_3 = FUNC_4(VAR_1->format);
 u64 VAR_4;
 unsigned int VAR_5, VAR_6;
 unsigned long VAR_7;

 FUNC_3(VAR_1, VAR_2);

 VAR_4 = (u64)FUNC_5(VAR_1, VAR_2) * VAR_3;
 FUNC_2(VAR_4, 8);
 VAR_1->src_clk_rate = VAR_4;
 VAR_7 = VAR_1->byte_clk_rate / 1000000;

 for (VAR_5 = 20; VAR_5 >= 5; VAR_5--) {
  VAR_6 = FUNC_1(VAR_7, VAR_5);







  if (VAR_6 >= 1 && VAR_6 <= 16)
   break;
 }

 if (VAR_5 < 5)
  return -VAR_0;

 VAR_1->esc_clk_rate = VAR_1->byte_clk_rate / VAR_6;

 FUNC_0("esc=%d, src=%d", VAR_1->esc_clk_rate,
  VAR_1->src_clk_rate);

 return 0;
}
