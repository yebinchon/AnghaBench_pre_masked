
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tagged; } ;
typedef TYPE_1__ git_pobject ;
struct TYPE_5__ {int object_ix; } ;
typedef TYPE_2__ git_packbuilder ;
typedef int git_oid ;


 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, git_oid *VAR_1, void *VAR_2)
{
 git_packbuilder *VAR_3 = VAR_2;
 git_pobject *VAR_4;

 FUNC_0(VAR_0);

 if ((VAR_4 = FUNC_1(VAR_3->object_ix, VAR_1)) == ((void*)0))
  return 0;

 VAR_4->tagged = 1;



 return 0;
}
