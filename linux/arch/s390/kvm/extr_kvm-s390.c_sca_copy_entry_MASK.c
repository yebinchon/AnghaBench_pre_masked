
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int scn; int c; } ;
struct esca_entry {TYPE_1__ sigp_ctrl; int sda; } ;
struct TYPE_4__ {int scn; int c; } ;
struct bsca_entry {TYPE_2__ sigp_ctrl; int sda; } ;



__attribute__((used)) static inline void FUNC_0(struct esca_entry *VAR_0, struct bsca_entry *VAR_1)
{
 VAR_0->sda = VAR_1->sda;
 VAR_0->sigp_ctrl.c = VAR_1->sigp_ctrl.c;
 VAR_0->sigp_ctrl.scn = VAR_1->sigp_ctrl.scn;
}
