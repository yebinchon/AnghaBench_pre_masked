
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char**,size_t*,char,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(char **VAR_5)
{
 size_t VAR_6;
 ssize_t VAR_7;
 char VAR_8[4];

 for (;;) {
  FUNC_3(VAR_2,
      "replace %s? [y]es, [n]o, [A]ll, [N]one, [r]ename: ",
      *VAR_5);
  if (FUNC_2(VAR_8, sizeof(VAR_8), VAR_3) == ((void*)0)) {
   FUNC_0(VAR_3);
   FUNC_6("NULL\n(EOF or read error, "
       "treating as \"[N]one\"...)\n");
   VAR_0 = 1;
   return -1;
  }
  switch (*VAR_8) {
  case 'A':
   VAR_1 = 1;

  case 'y':
  case 'Y':
   (void)FUNC_7(*VAR_5);
   return 1;
  case 'N':
   VAR_0 = 1;

  case 'n':
   return -1;
  case 'r':
  case 'R':
   FUNC_6("New name: ");
   FUNC_1(VAR_4);
   FUNC_4(*VAR_5);
   *VAR_5 = ((void*)0);
   VAR_6 = 0;
   VAR_7 = FUNC_5(VAR_5, &VAR_6, '\n', VAR_3);
   if ((*VAR_5)[VAR_7 - 1] == '\n')
    (*VAR_5)[VAR_7 - 1] = '\0';
   return 0;
  default:
   break;
  }
 }
}
