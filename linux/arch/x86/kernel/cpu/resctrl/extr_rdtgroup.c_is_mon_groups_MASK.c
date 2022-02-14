
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {char const* name; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(struct kernfs_node *VAR_0, const char *VAR_1)
{
 return (!FUNC_0(VAR_0->name, "mon_groups") &&
  FUNC_0(VAR_1, "mon_groups"));
}
