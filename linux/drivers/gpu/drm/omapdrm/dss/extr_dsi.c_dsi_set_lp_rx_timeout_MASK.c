
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsi_data {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned long,unsigned int,char*,char*,unsigned long) ;
 int FUNC_2 (int ,unsigned int,int,int) ;
 unsigned long FUNC_3 (struct dsi_data*) ;
 int FUNC_4 (struct dsi_data*,int ) ;
 int FUNC_5 (struct dsi_data*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct dsi_data *VAR_1, unsigned int VAR_2,
      bool VAR_3, bool VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_0(VAR_2 > 0x1fff);


 VAR_5 = FUNC_3(VAR_1);

 VAR_7 = FUNC_4(VAR_1, VAR_0);
 VAR_7 = FUNC_2(VAR_7, 1, 15, 15);
 VAR_7 = FUNC_2(VAR_7, VAR_4 ? 1 : 0, 14, 14);
 VAR_7 = FUNC_2(VAR_7, VAR_3 ? 1 : 0, 13, 13);
 VAR_7 = FUNC_2(VAR_7, VAR_2, 12, 0);
 FUNC_5(VAR_1, VAR_0, VAR_7);

 VAR_6 = VAR_2 * (VAR_4 ? 16 : 1) * (VAR_3 ? 4 : 1);

 FUNC_1("LP_RX_TO %lu ticks (%#x%s%s) = %lu ns\n",
   VAR_6,
   VAR_2, VAR_3 ? " x4" : "", VAR_4 ? " x16" : "",
   (VAR_6 * 1000) / (VAR_5 / 1000 / 1000));
}
