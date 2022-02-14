
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct blk_mq_debugfs_attr {int mode; scalar_t__ name; } ;
struct TYPE_2__ {void* i_private; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct dentry*) ;
 int FUNC_2 (scalar_t__,int ,struct dentry*,void*,int *) ;

__attribute__((used)) static void FUNC_3(struct dentry *VAR_1, void *VAR_2,
     const struct blk_mq_debugfs_attr *VAR_3)
{
 if (FUNC_0(VAR_1))
  return;

 FUNC_1(VAR_1)->i_private = VAR_2;

 for (; VAR_3->name; VAR_3++)
  FUNC_2(VAR_3->name, VAR_3->mode, VAR_1,
        (void *)VAR_3, &VAR_0);
}
