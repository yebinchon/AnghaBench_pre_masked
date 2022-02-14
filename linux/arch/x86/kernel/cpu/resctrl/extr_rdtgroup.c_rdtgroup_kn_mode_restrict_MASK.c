
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {int kn; } ;
struct kernfs_node {int dummy; } ;
struct iattr {int ia_mode; int ia_valid; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct kernfs_node* FUNC_0 (int ,char const*,int *) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*,struct iattr*) ;
 int FUNC_3 (struct kernfs_node*) ;

int FUNC_4(struct rdtgroup *VAR_5, const char *VAR_6)
{
 struct iattr VAR_7 = {.ia_valid = VAR_0,};
 struct kernfs_node *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_0(VAR_5->kn, VAR_6, ((void*)0));
 if (!VAR_8)
  return -VAR_1;

 switch (FUNC_3(VAR_8)) {
 case 130:
  VAR_7.ia_mode = VAR_2;
  break;
 case 129:
  VAR_7.ia_mode = VAR_4;
  break;
 case 128:
  VAR_7.ia_mode = VAR_3;
  break;
 }

 VAR_9 = FUNC_2(VAR_8, &VAR_7);
 FUNC_1(VAR_8);
 return VAR_9;
}
