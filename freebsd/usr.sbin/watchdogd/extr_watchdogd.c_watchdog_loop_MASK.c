
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (long) ;
 int FUNC_1 (char*,struct stat*) ;
 int FUNC_2 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 long FUNC_4 (struct timespec*,struct timespec*) ;
 int FUNC_5 (struct timespec*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct timespec VAR_5, VAR_6;
 struct stat VAR_7;
 long VAR_8;
 int VAR_9, VAR_10;

 while (VAR_1 != 2) {
  VAR_10 = 0;

  VAR_9 = FUNC_5(&VAR_5);
  if (VAR_9) {
   VAR_1 = 1;
   goto try_end;
  }

  if (VAR_3 != ((void*)0))
   VAR_10 = FUNC_2(VAR_3);
  else
   VAR_10 = FUNC_1("/etc", &VAR_7);

  VAR_9 = FUNC_5(&VAR_6);
  if (VAR_9) {
   VAR_1 = 1;
   goto try_end;
  }

  if (VAR_10 == 0)
   FUNC_7(VAR_4|VAR_0);

  VAR_8 = FUNC_4(&VAR_5, &VAR_6);
  if (VAR_2 - VAR_8 > 0)
   FUNC_0(VAR_2 - VAR_8);

try_end:
  if (VAR_1 != 0) {
   if (FUNC_6(0) == 0) {
    VAR_1 = 2;
   } else {
    FUNC_3("Could not stop the watchdog, not exiting");
    VAR_1 = 0;
   }
  }
 }
}
