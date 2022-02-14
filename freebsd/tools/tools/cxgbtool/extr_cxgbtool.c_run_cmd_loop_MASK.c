
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int args ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (unsigned int,char**,char const*) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_2, char *VAR_3[], const char *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 char VAR_7[64];
 char *VAR_8[8], *VAR_9;

 (void) VAR_2;
 VAR_8[0] = VAR_3[0];
 VAR_8[1] = VAR_3[1];







 for (;;) {
  FUNC_1(VAR_1, "> ");
  FUNC_0(VAR_1);
  VAR_5 = FUNC_2(VAR_0, VAR_7, sizeof(VAR_7) - 1);
  if (VAR_5 <= 0)
   return (0);

  if (VAR_7[--VAR_5] != '\n')
   continue;
  else
   VAR_7[VAR_5] = 0;

  VAR_9 = &VAR_7[0];
  for (VAR_6 = 2; VAR_6 < sizeof(VAR_8)/sizeof(VAR_8[0]) - 1; VAR_6++) {
   while (VAR_9 && (*VAR_9 == ' ' || *VAR_9 == '\t'))
    VAR_9++;
   if ((VAR_8[VAR_6] = FUNC_5(&VAR_9, " \t")) == ((void*)0))
    break;
  }
  VAR_8[sizeof(VAR_8)/sizeof(VAR_8[0]) - 1] = 0;

  if (!FUNC_4(VAR_8[2], "quit") || !FUNC_4(VAR_8[2], "exit"))
   return (0);

  (void) FUNC_3(VAR_6, VAR_8, VAR_4);
 }


 return (0);
}
