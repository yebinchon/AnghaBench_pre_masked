
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_command {char* command; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static struct sdp_command *
FUNC_3(char const *VAR_0, struct sdp_command *VAR_1)
{
 struct sdp_command *VAR_2 = ((void*)0);

 for (VAR_2 = VAR_1; VAR_2->command != ((void*)0); VAR_2++) {
  char *VAR_3 = FUNC_1(VAR_2->command, ' ');

  if (VAR_3 != ((void*)0)) {
   int VAR_4 = VAR_3 - VAR_2->command;

   if (FUNC_2(VAR_0, VAR_2->command, VAR_4) == 0)
    return (VAR_2);
  } else if (FUNC_0(VAR_0, VAR_2->command) == 0)
    return (VAR_2);
 }

 return (((void*)0));
}
