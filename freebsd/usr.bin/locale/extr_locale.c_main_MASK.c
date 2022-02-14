
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 size_t FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 () ;

int
FUNC_11(int VAR_7, char *VAR_8[])
{
 int VAR_9;
 int VAR_10;

 while ((VAR_9 = FUNC_1(VAR_7, VAR_8, "ackms:")) != -1) {
  switch (VAR_9) {
  case 'a':
   VAR_2 = 1;
   break;
  case 'c':
   VAR_5 = 1;
   break;
  case 'k':
   VAR_6 = 1;
   break;
  case 'm':
   VAR_1 = 1;
   break;
  default:
   FUNC_10();
  }
 }
 VAR_7 -= VAR_4;
 VAR_8 += VAR_4;


 if (VAR_2 && VAR_1)
  FUNC_10();
 if ((VAR_2 || VAR_1) && VAR_7 > 0)
  FUNC_10();
 if ((VAR_2 || VAR_1) && (VAR_5 || VAR_6))
  FUNC_10();


 if (VAR_2) {
  FUNC_3();
  FUNC_0(0);
 }


 if (VAR_1) {
  FUNC_2();
  FUNC_0(0);
 }


 VAR_10 = 0;
 if (VAR_6 && VAR_7 > 0)
  while (VAR_10 < VAR_7)
   if (FUNC_9(VAR_8[VAR_10++], "list") == 0) {
    FUNC_7(VAR_8[VAR_10]);
    FUNC_0(0);
   }


 if (VAR_5 || VAR_6 || VAR_7 > 0) {
  if (VAR_6 || VAR_7 > 0)
   FUNC_5(VAR_0, "");
  if (VAR_7 > 0) {
   while (VAR_7 > 0) {
    FUNC_6(*VAR_8);
    VAR_8++;
    VAR_7--;
   }
  } else {
   uint VAR_11;
   for (VAR_11 = 0; VAR_11 < FUNC_4(VAR_3); VAR_11++)
    FUNC_6(VAR_3[VAR_11].name);
  }
  FUNC_0(0);
 }


 FUNC_8();

 return (0);
}
