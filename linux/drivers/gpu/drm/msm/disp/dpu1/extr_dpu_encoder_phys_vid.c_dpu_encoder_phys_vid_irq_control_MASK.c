
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpu_encoder_phys {int vblank_refcount; TYPE_1__* hw_intf; int parent; } ;
struct TYPE_2__ {scalar_t__ idx; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dpu_encoder_phys*,int ) ;
 int FUNC_3 (struct dpu_encoder_phys*,int ) ;
 int FUNC_4 (struct dpu_encoder_phys*,int) ;
 int FUNC_5 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_6(struct dpu_encoder_phys *VAR_2,
  bool VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return;

 FUNC_5(FUNC_0(VAR_2->parent),
       VAR_2->hw_intf->idx - VAR_0,
       VAR_3,
       FUNC_1(&VAR_2->vblank_refcount));

 if (VAR_3) {
  VAR_4 = FUNC_4(VAR_2, 1);
  if (VAR_4)
   return;

  FUNC_2(VAR_2, VAR_1);
 } else {
  FUNC_4(VAR_2, 0);
  FUNC_3(VAR_2, VAR_1);
 }
}
