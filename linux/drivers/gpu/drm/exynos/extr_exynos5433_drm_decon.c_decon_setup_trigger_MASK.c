
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct decon_context {int out_type; int dev; int sysreg; scalar_t__ addr; TYPE_1__* crtc; } ;
struct TYPE_2__ {int i80_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct decon_context *VAR_10)
{
 if (!VAR_10->crtc->i80_mode && !(VAR_10->out_type & VAR_3))
  return;

 if (!(VAR_10->out_type & VAR_3)) {
  FUNC_2(VAR_9 | VAR_8 |
         VAR_7 | VAR_6,
         VAR_10->addr + VAR_0);
  return;
 }

 FUNC_2(VAR_9 | VAR_8 | VAR_5
        | VAR_4, VAR_10->addr + VAR_0);

 if (FUNC_1(VAR_10->sysreg, VAR_1,
          VAR_2, ~0))
  FUNC_0(VAR_10->dev, "Cannot update sysreg.\n");
}
