
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* suffix; char const* server; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *
FUNC_3(char *VAR_2)
{
 size_t VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_1[VAR_4].suffix != ((void*)0); VAR_4++) {
  size_t VAR_5 = FUNC_2(VAR_1[VAR_4].suffix);
  if (VAR_3 > VAR_5 &&
      FUNC_1(VAR_2 + VAR_3 - VAR_5,
          VAR_1[VAR_4].suffix) == 0)
   return (VAR_1[VAR_4].server);
 }
 FUNC_0(VAR_0, "no default whois server");
}
