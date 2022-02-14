
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
struct pollfd {int revents; } ;
typedef int FILE ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,struct timespec*) ;
 int VAR_2 ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (struct pollfd*,int,struct timespec*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct pollfd VAR_3[], const char *VAR_4, FILE *VAR_5)
{
 struct timespec VAR_6, VAR_7, VAR_8;


 FUNC_0(0, FUNC_2(VAR_0, &VAR_7));
 VAR_7.tv_sec += 10;
 VAR_8.tv_nsec = VAR_7.tv_nsec;

 for (;;) {

  FUNC_0(0, FUNC_2(VAR_0, &VAR_6));
  VAR_8.tv_sec = VAR_7.tv_sec - VAR_6.tv_sec;

  switch (FUNC_4(VAR_3, 1, &VAR_8, ((void*)0))) {

  case 1:
   if (VAR_3[0].revents & VAR_1) {
    if (FUNC_3(VAR_4, VAR_5))
     return;
   } else {
    FUNC_1("Auditpipe returned an "
    "unknown event %#x", VAR_3[0].revents);
   }
   break;


  case 0:
   FUNC_1("%s not found in auditpipe within the "
     "time limit", VAR_4);
   break;


  case -1:
   FUNC_1("Poll: %s", FUNC_5(VAR_2));
   break;

  default:
   FUNC_1("Poll returned too many file descriptors");
  }
 }
}
