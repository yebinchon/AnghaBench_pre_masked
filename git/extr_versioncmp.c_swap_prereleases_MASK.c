
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct suffix_match {int member_0; int member_1; int member_2; int conf_pos; } ;
struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct TYPE_3__ {char* string; } ;


 int FUNC_0 (char const*,char const*,int,int,int,struct suffix_match*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1,
       const char *VAR_2,
       int VAR_3,
       int *VAR_4)
{
 int VAR_5;
 struct suffix_match VAR_6 = { -1, VAR_3, -1 };
 struct suffix_match VAR_7 = { -1, VAR_3, -1 };

 for (VAR_5 = 0; VAR_5 < VAR_0->nr; VAR_5++) {
  const char *VAR_8 = VAR_0->items[VAR_5].string;
  int VAR_9, VAR_10 = FUNC_1(VAR_8);
  if (VAR_10 < VAR_3)
   VAR_9 = VAR_3 - VAR_10;
  else
   VAR_9 = 0;
  FUNC_0(VAR_1, VAR_8, VAR_10, VAR_9,
         VAR_5, &VAR_6);
  FUNC_0(VAR_2, VAR_8, VAR_10, VAR_9,
         VAR_5, &VAR_7);
 }
 if (VAR_6 == -1 && VAR_7 == -1)
  return 0;
 if (VAR_6 == VAR_7)



  return 0;

 if (VAR_6 >= 0 && VAR_7 >= 0)
  *VAR_4 = VAR_6 - VAR_7;
 else if (VAR_6 >= 0)
  *VAR_4 = -1;
 else
  *VAR_4 = 1;
 return 1;
}
