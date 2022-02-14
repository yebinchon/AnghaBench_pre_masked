
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * symbolic; } ;
struct TYPE_7__ {TYPE_1__ target; int type; } ;
typedef TYPE_2__ git_reference ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (char const*) ;

git_reference *FUNC_4(
 const char *VAR_1, const char *VAR_2)
{
 git_reference *VAR_3;

 FUNC_1(VAR_1 && VAR_2);

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->type = VAR_0;

 if ((VAR_3->target.symbolic = FUNC_3(VAR_2)) == ((void*)0)) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
