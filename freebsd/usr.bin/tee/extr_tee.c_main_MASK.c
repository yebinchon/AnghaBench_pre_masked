
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int fd; struct TYPE_3__* next; } ;
typedef TYPE_1__ LIST ;


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
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char**,char*) ;
 TYPE_1__* VAR_11 ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*,int,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (int ,char*,int) ;

int
FUNC_14(int VAR_13, char *VAR_14[])
{
 LIST *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 char *VAR_20;
 int VAR_21, VAR_22, VAR_23;
 char *VAR_24;


 VAR_21 = 0;
 while ((VAR_22 = FUNC_6(VAR_13, VAR_14, "ai")) != -1)
  switch((char)VAR_22) {
  case 'a':
   VAR_21 = 1;
   break;
  case 'i':
   (void)FUNC_10(VAR_7, VAR_8);
   break;
  case '?':
  default:
   FUNC_11();
  }
 VAR_14 += VAR_12;
 VAR_13 -= VAR_12;

 if ((VAR_24 = FUNC_7((8 * 1024))) == ((void*)0))
  FUNC_4(1, "malloc");

 if (FUNC_3() == -1 || FUNC_2() == -1)
  FUNC_4(VAR_2, "unable to limit stdio");

 FUNC_0(VAR_10, "stdout");

 for (VAR_23 = 0; *VAR_14; ++VAR_14)
  if ((VAR_17 = FUNC_8(*VAR_14, VAR_21 ? VAR_6|VAR_4|VAR_3 :
      VAR_6|VAR_4|VAR_5, VAR_1)) < 0) {
   FUNC_12("%s", *VAR_14);
   VAR_23 = 1;
  } else
   FUNC_0(VAR_17, *VAR_14);

 if (FUNC_1() < 0)
  FUNC_4(VAR_2, "unable to enter capability mode");
 while ((VAR_18 = FUNC_9(VAR_9, VAR_24, (8 * 1024))) > 0)
  for (VAR_15 = VAR_11; VAR_15; VAR_15 = VAR_15->next) {
   VAR_16 = VAR_18;
   VAR_20 = VAR_24;
   do {
    if ((VAR_19 = FUNC_13(VAR_15->fd, VAR_20, VAR_16)) == -1) {
     FUNC_12("%s", VAR_15->name);
     VAR_23 = 1;
     break;
    }
    VAR_20 += VAR_19;
   } while (VAR_16 -= VAR_19);
  }
 if (VAR_18 < 0)
  FUNC_4(1, "read");
 FUNC_5(VAR_23);
}
