
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_resource {scalar_t__ backup_size; int * backup; TYPE_1__* func; int lru_head; struct vmw_private* dev_priv; } ;
struct vmw_private {int resource_lock; } ;
struct TYPE_2__ {scalar_t__ needs_backup; } ;


 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct vmw_resource*,int) ;

int FUNC_6(struct vmw_resource *VAR_0, bool VAR_1,
    bool VAR_2)
{
 struct vmw_private *VAR_3 = VAR_0->dev_priv;
 int VAR_4;

 FUNC_2(&VAR_3->resource_lock);
 FUNC_1(&VAR_0->lru_head);
 FUNC_3(&VAR_3->resource_lock);

 if (VAR_0->func->needs_backup && VAR_0->backup == ((void*)0) &&
     !VAR_2) {
  VAR_4 = FUNC_5(VAR_0, VAR_1);
  if (FUNC_4(VAR_4 != 0)) {
   FUNC_0("Failed to allocate a backup buffer "
      "of size %lu. bytes\n",
      (unsigned long) VAR_0->backup_size);
   return VAR_4;
  }
 }

 return 0;
}
