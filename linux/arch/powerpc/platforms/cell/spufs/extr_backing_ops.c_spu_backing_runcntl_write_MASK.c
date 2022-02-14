
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int spu_runcntl_RW; int spu_status_R; } ;
struct TYPE_4__ {int register_lock; TYPE_1__ prob; } ;
struct spu_context {TYPE_2__ csa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct spu_context *VAR_7, u32 VAR_8)
{
 FUNC_0(&VAR_7->csa.register_lock);
 VAR_7->csa.prob.spu_runcntl_RW = VAR_8;
 if (VAR_8 & VAR_0) {
  VAR_7->csa.prob.spu_status_R &=
   ~VAR_6 &
   ~VAR_5 &
   ~VAR_4 &
   ~VAR_2 &
   ~VAR_1;
  VAR_7->csa.prob.spu_status_R |= VAR_3;
 } else {
  VAR_7->csa.prob.spu_status_R &= ~VAR_3;
 }
 FUNC_1(&VAR_7->csa.register_lock);
}
