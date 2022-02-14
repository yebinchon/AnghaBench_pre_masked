
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {long member_1; int member_0; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct timespec*,struct timespec*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(time_t VAR_3, long VAR_4)
{
 struct timespec VAR_5 = { VAR_3, VAR_4 };

 while (!VAR_2 && FUNC_1(&VAR_5, &VAR_5) == -1) {
  if (VAR_1 != VAR_0)
   FUNC_0(1, "nanosleep");
 }
}
