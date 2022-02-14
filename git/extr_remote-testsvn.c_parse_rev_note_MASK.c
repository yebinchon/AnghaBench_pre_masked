
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_note {long rev_nr; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;
 long FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, struct rev_note *VAR_2)
{
 const char *VAR_3, *VAR_4, *VAR_5;
 size_t VAR_6;

 while (*VAR_1) {
  VAR_5 = FUNC_1(VAR_1, '\n');
  VAR_6 = VAR_5 - VAR_1;

  VAR_3 = "Revision-number: ";
  if (FUNC_0(VAR_1, VAR_3)) {
   long VAR_7;
   char *VAR_8;
   VAR_4 = VAR_1 + FUNC_2(VAR_3);
   VAR_7 = FUNC_3(VAR_4, &VAR_8, 0);
   if (VAR_8 == VAR_4 || VAR_7 < 0 || VAR_7 > VAR_0)
    return -1;
   VAR_2->rev_nr = VAR_7;
   return 0;
  }
  VAR_1 += VAR_6 + 1;
 }

 return -1;
}
