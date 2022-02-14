
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct TYPE_3__ {char* match; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, int VAR_4, const char *VAR_5)
{
 int VAR_6;

 if (VAR_1 & VAR_0)
  return 1;

 if (!VAR_2.nr)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_2.nr; VAR_6++) {
  const char *VAR_7 = VAR_2.items[VAR_6].match;
  int VAR_8, VAR_9;

  if (FUNC_2(VAR_3, VAR_7, VAR_4))
   continue;
  VAR_8 = FUNC_1(VAR_5);
  VAR_7 += VAR_4;
  VAR_9 = FUNC_1(VAR_7);
  if (VAR_9 <= VAR_8)
   continue;
  if (VAR_7[VAR_8] && VAR_7[VAR_8] != '/')
   continue;
  if (FUNC_0(VAR_5, VAR_7, VAR_8))
   continue;
  return 1;
 }
 return 0;
}
