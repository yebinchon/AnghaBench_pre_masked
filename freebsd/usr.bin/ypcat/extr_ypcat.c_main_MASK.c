
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct ypall_callback {int * data; int foreach; } ;
struct TYPE_3__ {char* alias; char* name; } ;



 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_0 ;
 size_t FUNC_3 (TYPE_1__*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*,struct ypall_callback*) ;
 int FUNC_8 (char**) ;
 TYPE_1__* VAR_4 ;
 int FUNC_9 (int) ;

int
FUNC_10(int VAR_5, char *VAR_6[])
{
 char *VAR_7 = ((void*)0), *VAR_8;
 struct ypall_callback VAR_9;
 int VAR_10, VAR_11, VAR_12;
 u_int VAR_13;

 VAR_11 = VAR_0 = 0;
 while ((VAR_10 = FUNC_2(VAR_5, VAR_6, "xd:kt")) != -1)
  switch (VAR_10) {
  case 'x':
   for (VAR_13 = 0; VAR_13 < FUNC_3(VAR_4); VAR_13++)
    FUNC_4("Use \"%s\" for \"%s\"\n",
        VAR_4[VAR_13].alias, VAR_4[VAR_13].name);
   FUNC_1(0);
  case 'd':
   VAR_7 = VAR_1;
   break;
  case 't':
   VAR_11 = 1;
   break;
  case 'k':
   VAR_0 = 1;
   break;
  default:
   FUNC_6();
  }

 if (VAR_2 + 1 != VAR_5)
  FUNC_6();

 if (VAR_7 == ((void*)0))
  FUNC_8(&VAR_7);

 VAR_8 = VAR_6[VAR_2];
 if (VAR_11 == 0) {
  for (VAR_13 = 0; VAR_13 < FUNC_3(VAR_4); VAR_13++)
   if (FUNC_5(VAR_8, VAR_4[VAR_13].alias) == 0)
    VAR_8 = VAR_4[VAR_13].name;
 }
 VAR_9.foreach = VAR_3;
 VAR_9.data = ((void*)0);

 VAR_12 = FUNC_7(VAR_7, VAR_8, &VAR_9);
 switch (VAR_12) {
 case 0:
  break;
 case 128:
  FUNC_0(1, "not running ypbind");
 default:
  FUNC_0(1, "no such map %s. Reason: %s",
      VAR_8, FUNC_9(VAR_12));
 }
 FUNC_1(0);
}
