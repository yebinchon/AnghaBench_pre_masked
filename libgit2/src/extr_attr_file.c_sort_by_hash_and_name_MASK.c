
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name_hash; int name; } ;
typedef TYPE_1__ git_attr_name ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const git_attr_name *VAR_2 = VAR_0;
 const git_attr_name *VAR_3 = VAR_1;

 if (VAR_3->name_hash < VAR_2->name_hash)
  return 1;
 else if (VAR_3->name_hash > VAR_2->name_hash)
  return -1;
 else
  return FUNC_0(VAR_3->name, VAR_2->name);
}
