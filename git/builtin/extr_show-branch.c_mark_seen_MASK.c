
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (struct commit*,struct commit_list**) ;

__attribute__((used)) static int FUNC_1(struct commit *VAR_0, struct commit_list **VAR_1)
{
 if (!VAR_0->object.flags) {
  FUNC_0(VAR_0, VAR_1);
  return 1;
 }
 return 0;
}
