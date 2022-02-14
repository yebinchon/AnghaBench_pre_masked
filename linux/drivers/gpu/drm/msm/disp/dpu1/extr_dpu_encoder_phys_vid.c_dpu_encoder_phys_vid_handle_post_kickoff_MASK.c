
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpu_encoder_phys {scalar_t__ enable_state; int enc_spinlock; TYPE_2__* hw_intf; int parent; } ;
struct TYPE_3__ {int (* enable_timing ) (TYPE_2__*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; scalar_t__ idx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(
  struct dpu_encoder_phys *VAR_3)
{
 unsigned long VAR_4;





 if (VAR_3->enable_state == VAR_1) {
  FUNC_4(FUNC_0(VAR_3->parent),
        VAR_3->hw_intf->idx - VAR_2);
  FUNC_1(VAR_3->enc_spinlock, VAR_4);
  VAR_3->hw_intf->ops.enable_timing(VAR_3->hw_intf, 1);
  FUNC_2(VAR_3->enc_spinlock, VAR_4);
  VAR_3->enable_state = VAR_0;
 }
}
