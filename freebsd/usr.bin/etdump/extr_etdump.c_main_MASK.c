
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct outputter {int dummy; } ;
struct option {char* member_0; float member_3; int * member_2; int const member_1; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int *,struct outputter*) ;
 int FUNC_1 (int,char*,char*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char**,char*,struct option*,int *) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct outputter* VAR_2 ;
 struct outputter* VAR_3 ;

 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

int
FUNC_6(int VAR_6, char **VAR_7)
{
 int VAR_8, VAR_9;
 FILE *VAR_10, *VAR_11;
 struct outputter *VAR_12;

 VAR_10 = VAR_5;
 VAR_12 = VAR_3;

 static struct option VAR_13[] = {
  { "format", 128, ((void*)0), 'f' },
  { "output", 128, ((void*)0), 'o' },
  { ((void*)0), 0, ((void*)0), 0 },
 };

 while ((VAR_8 = FUNC_3(VAR_6, VAR_7, "f:o:", VAR_13, ((void*)0))) != -1) {
  switch (VAR_8) {
  case 'f':
   if (FUNC_4(VAR_0, "shell") == 0)
    VAR_12 = VAR_2;
   else if (FUNC_4(VAR_0, "text") == 0)
    VAR_12 = VAR_3;
   else
    FUNC_5(VAR_7[0]);
   break;
  case 'o':
   if (FUNC_4(VAR_0, "-") == 0) {
    VAR_10 = VAR_5;
   } else if ((VAR_10 = FUNC_2(VAR_0, "w")) == ((void*)0)) {
    FUNC_1(1, "unable to open %s for output", VAR_0);
   }
   break;
  default:
   FUNC_5(VAR_7[0]);
  }
 }

 VAR_6 -= VAR_1;
 VAR_7 += VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  if (FUNC_4(VAR_7[VAR_9], "-") == 0) {
   VAR_11 = VAR_4;
  } else {
   VAR_11 = FUNC_2(VAR_7[VAR_9], "r");
   if (VAR_11 == ((void*)0))
    FUNC_1(1, "could not open %s", VAR_7[1]);
  }
  FUNC_0(VAR_11, VAR_7[VAR_9], VAR_10, VAR_12);
 }
}
