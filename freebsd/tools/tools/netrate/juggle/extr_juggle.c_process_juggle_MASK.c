
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct timespec*,struct timespec*,struct timespec*) ;
 scalar_t__ FUNC_10 (scalar_t__,int *,int ) ;

__attribute__((used)) static struct timespec
FUNC_11(int VAR_4, int VAR_5, int VAR_6)
{
 struct timespec VAR_7, VAR_8;
 pid_t VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_10 = FUNC_5();

 VAR_9 = FUNC_4();
 if (VAR_9 < 0)
  FUNC_1(-1, "process_juggle: fork");

 if (VAR_9 == 0) {
  if (FUNC_8(VAR_5) < 0) {
   VAR_12 = VAR_3;
   FUNC_6(VAR_10, VAR_2);
   VAR_3 = VAR_12;
   FUNC_1(-1, "process_juggle: child: message_send");
  }

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
    if (FUNC_8(VAR_5) < 0)
     FUNC_1(-1, "message_send fd2");

    if (FUNC_7(VAR_5) < 0)
     FUNC_1(-1, "message_recv fd2");
   }
  }

  FUNC_3(0);
 } else {
  if (FUNC_7(VAR_4) < 0) {
   VAR_12 = VAR_3;
   FUNC_6(VAR_9, VAR_2);
   VAR_3 = VAR_12;
   FUNC_1(-1, "process_juggle: parent: message_recv");
  }

  if (FUNC_0(VAR_0, &VAR_7) < 0)
   FUNC_1(-1, "process_juggle: clock_gettime");

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
    if (FUNC_8(VAR_4) < 0) {
     VAR_12 = VAR_3;
     FUNC_6(VAR_9, VAR_2);
     VAR_3 = VAR_12;
     FUNC_1(-1, "message_send fd1");
    }
   }

   for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
    if (FUNC_7(VAR_4) < 0) {
     VAR_12 = VAR_3;
     FUNC_6(VAR_9, VAR_2);
     VAR_3 = VAR_12;
     FUNC_1(-1, "message_recv fd1");
    }
   }
  }

  if (FUNC_0(VAR_0, &VAR_8) < 0)
   FUNC_1(-1, "process_juggle: clock_gettime");
 }

 VAR_11 = FUNC_10(VAR_9, ((void*)0), 0);
 if (VAR_11 < 0)
  FUNC_1(-1, "process_juggle: waitpid");
 if (VAR_11 != VAR_9)
  FUNC_2(-1, "process_juggle: waitpid: pid != wpid");

 FUNC_9(&VAR_8, &VAR_7, &VAR_8);

 return (VAR_8);
}
