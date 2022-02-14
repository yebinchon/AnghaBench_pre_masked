
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mfc_control_RW; } ;
struct spu_state {scalar_t__ suspend_time; TYPE_4__* lscsa; TYPE_1__ priv2; } ;
struct spu {int dummy; } ;
typedef scalar_t__ cycles_t ;
struct TYPE_7__ {int * slot; } ;
struct TYPE_6__ {scalar_t__* slot; } ;
struct TYPE_8__ {TYPE_3__ decr_status; TYPE_2__ decr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct spu_state *VAR_3, struct spu *VAR_4)
{







 if (VAR_3->priv2.mfc_control_RW & VAR_0) {
  cycles_t VAR_5 = FUNC_0();
  cycles_t VAR_6 = VAR_5 - VAR_3->suspend_time;

  VAR_3->lscsa->decr_status.slot[0] = VAR_1;
  if (VAR_3->lscsa->decr.slot[0] < VAR_6) {
   VAR_3->lscsa->decr_status.slot[0] |=
     VAR_2;
  }

  VAR_3->lscsa->decr.slot[0] -= VAR_6;
 } else {
  VAR_3->lscsa->decr_status.slot[0] = 0;
 }
}
