
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct sti_hqvdp {int vtg_registered; TYPE_1__ plane; int clk_pix_main; scalar_t__ regs; int vtg_nb; int vtg; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct sti_hqvdp *VAR_6)
{
 int VAR_7;

 FUNC_0("%s\n", FUNC_5(&VAR_6->plane));


 if (FUNC_6(VAR_6->vtg, &VAR_6->vtg_nb))
  FUNC_0("Warning: cannot unregister VTG notifier\n");


 FUNC_7(0, VAR_6->regs + VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (FUNC_4(VAR_6->regs + VAR_0)
    & VAR_2)
   break;
  FUNC_3(VAR_3);
 }


 FUNC_2(VAR_6->clk_pix_main);

 if (VAR_7 == VAR_4)
  FUNC_1("XP70 could not revert to idle\n");

 VAR_6->plane.status = VAR_5;
 VAR_6->vtg_registered = 0;
}
