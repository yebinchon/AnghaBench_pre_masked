
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int attr; } ;
typedef TYPE_1__ git_tree_entry ;
typedef int git_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__ const*) ;

git_object_t FUNC_3(const git_tree_entry *VAR_3)
{
 FUNC_2(VAR_3);

 if (FUNC_1(VAR_3->attr))
  return VAR_1;
 else if (FUNC_0(VAR_3->attr))
  return VAR_2;
 else
  return VAR_0;
}
