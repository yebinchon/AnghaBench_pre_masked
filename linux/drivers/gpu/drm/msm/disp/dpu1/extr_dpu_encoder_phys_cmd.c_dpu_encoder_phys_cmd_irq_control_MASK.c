
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpu_encoder_phys_cmd {int dummy; } ;
struct dpu_encoder_phys {int vblank_refcount; TYPE_1__* hw_pp; int parent; } ;
struct TYPE_2__ {scalar_t__ idx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dpu_encoder_phys*,int ) ;
 int FUNC_3 (struct dpu_encoder_phys*,int ) ;
 int FUNC_4 (struct dpu_encoder_phys*,int) ;
 scalar_t__ FUNC_5 (struct dpu_encoder_phys*) ;
 struct dpu_encoder_phys_cmd* FUNC_6 (struct dpu_encoder_phys*) ;
 int FUNC_7 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_8(struct dpu_encoder_phys *VAR_4,
  bool VAR_5)
{
 struct dpu_encoder_phys_cmd *VAR_6;

 if (!VAR_4)
  return;

 VAR_6 = FUNC_6(VAR_4);

 FUNC_7(FUNC_0(VAR_4->parent),
   VAR_4->hw_pp->idx - VAR_3,
   VAR_5, FUNC_1(&VAR_4->vblank_refcount));

 if (VAR_5) {
  FUNC_2(VAR_4, VAR_1);
  FUNC_2(VAR_4, VAR_2);
  FUNC_4(VAR_4, 1);

  if (FUNC_5(VAR_4))
   FUNC_2(VAR_4,
     VAR_0);
 } else {
  if (FUNC_5(VAR_4))
   FUNC_3(VAR_4,
     VAR_0);

  FUNC_3(VAR_4, VAR_2);
  FUNC_4(VAR_4, 0);
  FUNC_3(VAR_4, VAR_1);
 }
}
