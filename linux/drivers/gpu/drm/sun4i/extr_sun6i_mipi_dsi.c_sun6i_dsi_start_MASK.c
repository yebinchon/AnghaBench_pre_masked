
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_dsi {int regs; } ;
typedef enum sun6i_dsi_start_inst { ____Placeholder_sun6i_dsi_start_inst } sun6i_dsi_start_inst ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct sun6i_dsi*) ;
 int FUNC_4 (struct sun6i_dsi*) ;

__attribute__((used)) static int FUNC_5(struct sun6i_dsi *VAR_11,
      enum sun6i_dsi_start_inst VAR_12)
{
 switch (VAR_12) {
 case 128:
  FUNC_1(VAR_11->regs, VAR_10,
        VAR_6 << (4 * VAR_5) |
        VAR_1 << (4 * VAR_6));
  break;
 case 129:
  FUNC_1(VAR_11->regs, VAR_10,
        VAR_6 << (4 * VAR_5) |
        VAR_0 << (4 * VAR_6) |
        VAR_8 << (4 * VAR_0) |
        VAR_1 << (4 * VAR_8));
  break;
 case 131:
  FUNC_1(VAR_11->regs, VAR_10,
        VAR_2 << (4 * VAR_5) |
        VAR_1 << (4 * VAR_2));
  break;
 case 130:
  FUNC_1(VAR_11->regs, VAR_10,
        VAR_7 << (4 * VAR_5) |
        VAR_4 << (4 * VAR_7) |
        VAR_0 << (4 * VAR_4) |
        VAR_7 << (4 * VAR_0) |
        VAR_1 << (4 * VAR_3));
  break;
 default:
  FUNC_1(VAR_11->regs, VAR_10,
        VAR_1 << (4 * VAR_5));
  break;
 }

 FUNC_3(VAR_11);
 FUNC_4(VAR_11);

 if (VAR_12 == 131)
  FUNC_2(VAR_11->regs,
      FUNC_0(VAR_5),
      VAR_9, 0);

 return 0;
}
