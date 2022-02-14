
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct timespec*,struct timespec*,struct timespec*) ;

__attribute__((used)) static struct timespec
FUNC_5(int VAR_2, int VAR_3, int VAR_4)
{
 struct timespec VAR_5, VAR_6;
 int VAR_7, VAR_8;

 if (FUNC_0(VAR_0, &VAR_5) < 0)
  FUNC_1(-1, "juggle: clock_gettime");

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   if (FUNC_3(VAR_2) < 0)
    FUNC_1(-1, "message_send fd1");
  }

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   if (FUNC_2(VAR_3) < 0)
    FUNC_1(-1, "message_recv fd2");

   if (FUNC_3(VAR_3) < 0)
    FUNC_1(-1, "message_send fd2");
  }

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   if (FUNC_2(VAR_2) < 0)
    FUNC_1(-1, "message_recv fd1");
  }
 }

 if (FUNC_0(VAR_0, &VAR_6) < 0)
  FUNC_1(-1, "juggle: clock_gettime");

 FUNC_4(&VAR_6, &VAR_5, &VAR_6);

 return (VAR_6);
}
