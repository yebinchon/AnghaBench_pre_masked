
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evthread_lock_callbacks {int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct evthread_condition_callbacks {int member_4; int member_3; int member_2; int member_1; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct evthread_condition_callbacks*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct evthread_lock_callbacks*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;

int
FUNC_5(void)
{
 struct evthread_lock_callbacks VAR_14 = {
  VAR_2,
  VAR_1,
  VAR_11,
  VAR_12,
  VAR_10,
  VAR_13
 };
 struct evthread_condition_callbacks VAR_15 = {
  VAR_0,
  VAR_5,
  VAR_6,
  VAR_7,
  VAR_8
 };

 if (FUNC_3(&VAR_4))
  return -1;
 if (FUNC_4(&VAR_4, VAR_3))
  return -1;

 FUNC_2(&VAR_14);
 FUNC_0(&VAR_15);
 FUNC_1(VAR_9);
 return 0;
}
