
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_uverbs_file {TYPE_1__* device; int ucontext; } ;
struct ib_ucontext {int dummy; } ;
struct TYPE_2__ {int disassociate_srcu; int ib_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_ucontext* FUNC_0 (int ) ;
 struct ib_ucontext* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

struct ib_ucontext *FUNC_3(struct ib_uverbs_file *VAR_2)
{





 struct ib_ucontext *VAR_3 = FUNC_1(&VAR_2->ucontext);

 if (!FUNC_2(VAR_2->device->ib_dev,
         &VAR_2->device->disassociate_srcu))
  return FUNC_0(-VAR_1);

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 return VAR_3;
}
