
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_uverbs_file {struct ib_ucontext* ucontext; } ;
struct ib_ucontext {int res; int cg_obj; struct ib_device* device; } ;
struct TYPE_2__ {int (* dealloc_ucontext ) (struct ib_ucontext*) ;int (* disassociate_ucontext ) (struct ib_ucontext*) ;} ;
struct ib_device {TYPE_1__ ops; } ;
typedef enum rdma_remove_reason { ____Placeholder_rdma_remove_reason } rdma_remove_reason ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ib_device*,int ) ;
 int FUNC_1 (struct ib_ucontext*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_ucontext*) ;
 int FUNC_4 (struct ib_ucontext*) ;
 int FUNC_5 (struct ib_uverbs_file*) ;

__attribute__((used)) static void FUNC_6(struct ib_uverbs_file *VAR_2,
       enum rdma_remove_reason VAR_3)
{
 struct ib_ucontext *VAR_4 = VAR_2->ucontext;
 struct ib_device *VAR_5 = VAR_4->device;






 if (VAR_3 == VAR_1) {
  FUNC_5(VAR_2);
  if (VAR_5->ops.disassociate_ucontext)
   VAR_5->ops.disassociate_ucontext(VAR_4);
 }

 FUNC_0(&VAR_4->cg_obj, VAR_5,
      VAR_0);

 FUNC_2(&VAR_4->res);

 VAR_5->ops.dealloc_ucontext(VAR_4);
 FUNC_1(VAR_4);

 VAR_2->ucontext = ((void*)0);
}
