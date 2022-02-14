
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_2__ {char const* suffix; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (char*,struct stat*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_3)
{
 struct stat VAR_4;
 char VAR_5[VAR_1];
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  (void) FUNC_2(VAR_5, VAR_3, VAR_1);
  (void) FUNC_1(VAR_5, VAR_2[VAR_6].suffix, VAR_1);
  if (FUNC_0(VAR_5, &VAR_4) == 0)
   return (VAR_2[VAR_6].suffix);
 }
 return (((void*)0));
}
