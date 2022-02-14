
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_uobject {int id; TYPE_2__* ufile; TYPE_1__* context; int cg_obj; } ;
struct TYPE_4__ {int idr; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ib_uobject *VAR_1)
{
 FUNC_0(&VAR_1->cg_obj, VAR_1->context->device,
      VAR_0);

 FUNC_1(&VAR_1->ufile->idr, VAR_1->id);
}
