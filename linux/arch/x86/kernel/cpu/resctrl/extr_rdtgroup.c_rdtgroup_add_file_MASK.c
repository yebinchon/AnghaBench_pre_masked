
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rftype {int kf_ops; int mode; int name; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_2 (struct kernfs_node*,int ,int ,int ,int ,int ,int ,struct rftype*,int *,int *) ;
 int FUNC_3 (struct kernfs_node*) ;
 int FUNC_4 (struct kernfs_node*) ;

__attribute__((used)) static int FUNC_5(struct kernfs_node *VAR_2, struct rftype *VAR_3)
{
 struct kernfs_node *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_3->name, VAR_3->mode,
      VAR_1, VAR_0,
      0, VAR_3->kf_ops, VAR_3, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_4);
  return VAR_5;
 }

 return 0;
}
