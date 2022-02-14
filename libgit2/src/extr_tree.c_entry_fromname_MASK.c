
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree_entry ;
struct TYPE_4__ {int entries; } ;
typedef TYPE_1__ git_tree ;


 int const* FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (size_t*,TYPE_1__ const*,char const*,size_t) ;

__attribute__((used)) static const git_tree_entry *FUNC_2(
 const git_tree *VAR_0, const char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 if (FUNC_1(&VAR_3, VAR_0, VAR_1, VAR_2) < 0)
  return ((void*)0);

 return FUNC_0(VAR_0->entries, VAR_3);
}
