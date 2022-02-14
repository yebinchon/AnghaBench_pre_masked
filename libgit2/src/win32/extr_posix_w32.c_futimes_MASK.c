
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct p_timeval {int dummy; } ;
struct TYPE_6__ {int member_0; } ;
typedef int SYSTEMTIME ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ FILETIME ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,struct p_timeval const) ;

int FUNC_5(int VAR_1, const struct p_timeval VAR_2[2])
{
 HANDLE VAR_3;
 FILETIME VAR_4 = { 0 }, VAR_5 = { 0 };

 if (VAR_2 == ((void*)0)) {
  SYSTEMTIME VAR_6;

  FUNC_0(&VAR_6);
  FUNC_2(&VAR_6, &VAR_4);
  FUNC_2(&VAR_6, &VAR_5);
 }
 else {
  FUNC_4(&VAR_4, VAR_2[0]);
  FUNC_4(&VAR_5, VAR_2[1]);
 }

 if ((VAR_3 = (HANDLE)FUNC_3(VAR_1)) == VAR_0)
  return -1;

 if (FUNC_1(VAR_3, ((void*)0), &VAR_4, &VAR_5) == 0)
  return -1;

 return 0;
}
