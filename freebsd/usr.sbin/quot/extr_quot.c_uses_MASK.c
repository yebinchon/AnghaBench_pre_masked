
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef long time_t ;
struct user {int spc30; int spc60; int spc90; int space; int count; } ;
typedef scalar_t__ daddr_t ;


 int FUNC_0 (long*) ;
 struct user* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(uid_t VAR_0, daddr_t VAR_1, time_t VAR_2)
{
 static time_t VAR_3;
 struct user *VAR_4;

 if (!VAR_3)
  FUNC_0(&VAR_3);

 VAR_4 = FUNC_1(VAR_0);
 VAR_4->count++;
 VAR_4->space += VAR_1;

 if (VAR_3 - VAR_2 > 90L * 24L * 60L * 60L)
  VAR_4->spc90 += VAR_1;
 if (VAR_3 - VAR_2 > 60L * 24L * 60L * 60L)
  VAR_4->spc60 += VAR_1;
 if (VAR_3 - VAR_2 > 30L * 24L * 60L * 60L)
  VAR_4->spc30 += VAR_1;
}
