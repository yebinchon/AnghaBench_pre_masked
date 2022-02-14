
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpu_encoder_phys {TYPE_2__* hw_pp; int parent; } ;
struct TYPE_3__ {int (* connect_external_te ) (TYPE_2__*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(
  struct dpu_encoder_phys *VAR_0, bool VAR_1)
{
 if (!VAR_0 || !VAR_0->hw_pp ||
   !VAR_0->hw_pp->ops.connect_external_te)
  return;

 FUNC_2(FUNC_0(VAR_0->parent), VAR_1);
 VAR_0->hw_pp->ops.connect_external_te(VAR_0->hw_pp, VAR_1);
}
