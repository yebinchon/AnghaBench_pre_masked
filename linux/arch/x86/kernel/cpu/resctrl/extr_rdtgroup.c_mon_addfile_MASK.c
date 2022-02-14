
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_2 (struct kernfs_node*,char const*,int,int ,int ,int ,int *,void*,int *,int *) ;
 int FUNC_3 (struct kernfs_node*) ;
 int VAR_2 ;
 int FUNC_4 (struct kernfs_node*) ;

__attribute__((used)) static int FUNC_5(struct kernfs_node *VAR_3, const char *VAR_4,
         void *VAR_5)
{
 struct kernfs_node *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_2(VAR_3, VAR_4, 0444,
      VAR_1, VAR_0, 0,
      &VAR_2, VAR_5, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_6);
  return VAR_7;
 }

 return VAR_7;
}
