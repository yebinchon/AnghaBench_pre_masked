
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int update_conflicts; } ;
typedef TYPE_1__ checkout_data ;
typedef int checkout_conflictdata ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t*,int *,int ,char const*) ;
 int * FUNC_1 (int *,size_t) ;

__attribute__((used)) static checkout_conflictdata *FUNC_2(
 checkout_data *VAR_1,
 const char *VAR_2)
{
 size_t VAR_3;

 if (FUNC_0(&VAR_3, &VAR_1->update_conflicts, VAR_0, VAR_2) < 0)
  return ((void*)0);

 return FUNC_1(&VAR_1->update_conflicts, VAR_3);
}
