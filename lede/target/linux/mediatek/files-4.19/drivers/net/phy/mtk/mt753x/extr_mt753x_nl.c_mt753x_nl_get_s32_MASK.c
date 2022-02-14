
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct genl_info {struct nlattr** attrs; } ;
typedef int s32 ;
typedef enum mt753x_attr { ____Placeholder_mt753x_attr } mt753x_attr ;


 int FUNC_0 (struct nlattr*) ;

__attribute__((used)) static s32 FUNC_1(struct genl_info *VAR_0, enum mt753x_attr VAR_1,
        s32 VAR_2)
{
 struct nlattr *VAR_3;

 VAR_3 = VAR_0->attrs[VAR_1];
 if (VAR_3)
  return FUNC_0(VAR_3);

 return VAR_2;
}
