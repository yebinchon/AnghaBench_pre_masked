
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sun6i_dsi {int regs; } ;
struct mipi_dsi_msg {scalar_t__ rx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct sun6i_dsi*,struct mipi_dsi_msg const*) ;
 int FUNC_5 (struct sun6i_dsi*) ;
 int FUNC_6 (struct sun6i_dsi*) ;
 int FUNC_7 (struct sun6i_dsi*,int ) ;

__attribute__((used)) static int FUNC_8(struct sun6i_dsi *VAR_5,
         const struct mipi_dsi_msg *VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 u8 VAR_9;

 FUNC_3(VAR_5->regs, FUNC_1(0),
       FUNC_4(VAR_5, VAR_6));
 FUNC_3(VAR_5->regs, VAR_3,
       (4 - 1));

 FUNC_7(VAR_5, VAR_0);

 VAR_8 = FUNC_6(VAR_5);
 if (VAR_8 < 0) {
  FUNC_5(VAR_5);
  return VAR_8;
 }






 FUNC_2(VAR_5->regs, VAR_3, &VAR_7);
 if (VAR_7 & VAR_4)
  return -VAR_1;

 FUNC_2(VAR_5->regs, FUNC_0(0), &VAR_7);
 VAR_9 = VAR_7 & 0xff;
 if (VAR_9 == VAR_2)
  return -VAR_1;

 ((u8 *)VAR_6->rx_buf)[0] = (VAR_7 >> 8);

 return 1;
}
