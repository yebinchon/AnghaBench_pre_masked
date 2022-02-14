
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swnode {int dummy; } ;
struct software_node {struct software_node const* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct swnode* FUNC_1 (struct software_node const*) ;
 int FUNC_2 (struct software_node const*,struct swnode*,int ) ;

int FUNC_3(const struct software_node *VAR_1)
{
 struct swnode *VAR_2 = FUNC_1(VAR_1->parent);

 if (FUNC_1(VAR_1))
  return -VAR_0;

 return FUNC_0(FUNC_2(VAR_1, VAR_2, 0));
}
