
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_frontend {int regs; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ has_coef_rdy; scalar_t__ has_coef_access_ctrl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_8(struct sun4i_frontend *VAR_5)
{
 int VAR_6;

 if (VAR_5->data->has_coef_access_ctrl)
  FUNC_7(VAR_5->regs, VAR_2,
      VAR_0,
      VAR_0);

 for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
  FUNC_6(VAR_5->regs, FUNC_0(VAR_6),
        VAR_3[2 * VAR_6]);
  FUNC_6(VAR_5->regs, FUNC_3(VAR_6),
        VAR_3[2 * VAR_6]);
  FUNC_6(VAR_5->regs, FUNC_1(VAR_6),
        VAR_3[2 * VAR_6 + 1]);
  FUNC_6(VAR_5->regs, FUNC_4(VAR_6),
        VAR_3[2 * VAR_6 + 1]);
  FUNC_6(VAR_5->regs, FUNC_2(VAR_6),
        VAR_4[VAR_6]);
  FUNC_6(VAR_5->regs, FUNC_5(VAR_6),
        VAR_4[VAR_6]);
 }

 if (VAR_5->data->has_coef_rdy)
  FUNC_7(VAR_5->regs,
      VAR_2,
      VAR_1,
      VAR_1);
}
