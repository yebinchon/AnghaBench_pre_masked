
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct pollfd {int fd; int events; int revents; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct pollfd*,int,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (int,char*) ;

__attribute__((used)) static int FUNC_10(int VAR_3)
{
 struct pollfd VAR_4;
 timestamp_t VAR_5;

 VAR_5 = FUNC_1();
 if (!VAR_5)
  return 0;

 VAR_4.fd = VAR_3;
 VAR_4.events = VAR_1;
 if (FUNC_6(&VAR_4, 1, 1000 * VAR_5) < 0) {
  if (VAR_2 != VAR_0)
   FUNC_3("poll failed");
  return 1;
 }

 if (VAR_4.revents & VAR_1) {
  int VAR_6, VAR_7;
  FILE *VAR_8, *VAR_9;

  VAR_6 = FUNC_0(VAR_3, ((void*)0), ((void*)0));
  if (VAR_6 < 0) {
   FUNC_8("accept failed");
   return 1;
  }
  VAR_7 = FUNC_4(VAR_6);
  if (VAR_7 < 0) {
   FUNC_8("dup failed");
   FUNC_2(VAR_6);
   return 1;
  }

  VAR_8 = FUNC_9(VAR_6, "r");
  VAR_9 = FUNC_9(VAR_7, "w");
  FUNC_7(VAR_8, VAR_9);
  FUNC_5(VAR_8);
  FUNC_5(VAR_9);
 }
 return 1;
}
