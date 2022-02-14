
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_8__ {int push; } ;
typedef TYPE_1__ git_refspec ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(git_vector *VAR_0, const char *VAR_1, bool VAR_2)
{
 git_refspec *VAR_3;

 VAR_3 = FUNC_1(1, sizeof(git_refspec));
 FUNC_0(VAR_3);

 if (FUNC_4(VAR_3, VAR_1, VAR_2) < 0) {
  FUNC_2(VAR_3);
  return -1;
 }

 VAR_3->push = !VAR_2;
 if (FUNC_5(VAR_0, VAR_3) < 0) {
  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
  return -1;
 }

 return 0;
}
