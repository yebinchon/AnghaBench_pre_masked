
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {int filter; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char const,char const*) ;
 unsigned int* VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(const struct option *VAR_3,
    const char *VAR_4, int VAR_5)
{
 struct diff_options *VAR_6 = VAR_3->value;
 int VAR_7, VAR_8;

 FUNC_1(VAR_5);
 FUNC_4();






 if (!VAR_6->filter) {
  for (VAR_7 = 0; (VAR_8 = VAR_4[VAR_7]) != '\0'; VAR_7++) {
   if (VAR_8 < 'a' || 'z' < VAR_8)
    continue;
   VAR_6->filter = (1 << (FUNC_0(VAR_1) - 1)) - 1;
   VAR_6->filter &= ~VAR_2[VAR_0];
   break;
  }
 }

 for (VAR_7 = 0; (VAR_8 = VAR_4[VAR_7]) != '\0'; VAR_7++) {
  unsigned int VAR_9;
  int VAR_10;

  if ('a' <= VAR_8 && VAR_8 <= 'z') {
   VAR_10 = 1;
   VAR_8 = FUNC_5(VAR_8);
  } else {
   VAR_10 = 0;
  }

  VAR_9 = (0 <= VAR_8 && VAR_8 <= 'Z') ? VAR_2[VAR_8] : 0;
  if (!VAR_9)
   return FUNC_3(FUNC_2("unknown change class '%c' in --diff-filter=%s"),
         VAR_4[VAR_7], VAR_4);
  if (VAR_10)
   VAR_6->filter &= ~VAR_9;
  else
   VAR_6->filter |= VAR_9;
 }
 return 0;
}
