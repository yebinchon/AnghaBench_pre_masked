
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rdt_resource {int dummy; } ;
struct kernfs_node {int dummy; } ;
struct TYPE_3__ {int mode; } ;


 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_3 (TYPE_1__*,char*,int ,struct rdt_resource*) ;
 int FUNC_4 (struct kernfs_node*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (struct kernfs_node*,unsigned long) ;
 int FUNC_6 (struct kernfs_node*) ;

__attribute__((used)) static int FUNC_7(struct rdt_resource *VAR_1, char *VAR_2,
          unsigned long VAR_3)
{
 struct kernfs_node *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_0, VAR_2,
          VAR_0->mode, VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_4(VAR_4);
 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_5)
  FUNC_2(VAR_4);

 return VAR_5;
}
