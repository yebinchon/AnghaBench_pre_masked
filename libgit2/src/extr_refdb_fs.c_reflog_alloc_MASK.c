
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* ref_name; int entries; } ;
typedef TYPE_1__ git_reflog ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_5(git_reflog **VAR_0, const char *VAR_1)
{
 git_reflog *VAR_2;

 *VAR_0 = ((void*)0);

 VAR_2 = FUNC_1(1, sizeof(git_reflog));
 FUNC_0(VAR_2);

 VAR_2->ref_name = FUNC_3(VAR_1);
 FUNC_0(VAR_2->ref_name);

 if (FUNC_4(&VAR_2->entries, 0, ((void*)0)) < 0) {
  FUNC_2(VAR_2->ref_name);
  FUNC_2(VAR_2);
  return -1;
 }

 *VAR_0 = VAR_2;

 return 0;
}
