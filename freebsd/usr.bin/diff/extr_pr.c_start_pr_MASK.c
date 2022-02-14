
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr {int kq; int e; int ostdout; } ;
struct kevent {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,int ,char*,char*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,int ,int,int *,int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int*,int ) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (char**,char*,int ,char*,char*) ;
 struct pr* FUNC_16 (int,int) ;
 int FUNC_17 (int) ;

struct pr *
FUNC_18(char *VAR_12, char *VAR_13)
{
 int VAR_14[2];
 int VAR_15;
 pid_t VAR_16;
 char *VAR_17;
 struct pr *VAR_18;

 VAR_18 = FUNC_16(1, sizeof(*VAR_18));

 FUNC_15(&VAR_17, "%s %s %s", VAR_9, VAR_12, VAR_13);
 FUNC_14(VAR_4, VAR_5);
 FUNC_7(VAR_11);
 FUNC_13(VAR_11);
 if (FUNC_12(VAR_14) == -1)
  FUNC_5(2, "pipe");
 switch ((VAR_16 = FUNC_11(&VAR_15, VAR_3))) {
 case -1:
  VAR_10 |= 2;
  FUNC_8(VAR_17);
  FUNC_5(2, "No more processes");
 case 0:

  if (VAR_14[0] != VAR_6) {
   FUNC_4(VAR_14[0], VAR_6);
   FUNC_2(VAR_14[0]);
  }
  FUNC_2(VAR_14[1]);
  FUNC_6(VAR_8, VAR_8, "-h", VAR_17, (char *)0);
  FUNC_1(127);
 default:


  if (VAR_14[1] != VAR_7) {
   VAR_18->ostdout = FUNC_3(VAR_7);
   FUNC_4(VAR_14[1], VAR_7);
   FUNC_2(VAR_14[1]);
   FUNC_2(VAR_14[1]);
   }
   FUNC_2(VAR_14[0]);
   FUNC_13(VAR_11);
   FUNC_8(VAR_17);
   VAR_18->kq = FUNC_10();
   if (VAR_18->kq == -1)
    FUNC_5(2, "kqueue");
   VAR_18->e = FUNC_17(sizeof(struct kevent));
   FUNC_0(VAR_18->e, VAR_15, VAR_0, VAR_1, VAR_2, 0,
       ((void*)0));
   if (FUNC_9(VAR_18->kq, VAR_18->e, 1, ((void*)0), 0, ((void*)0)) == -1)
    FUNC_5(2, "kevent");
 }
 return (VAR_18);
}
