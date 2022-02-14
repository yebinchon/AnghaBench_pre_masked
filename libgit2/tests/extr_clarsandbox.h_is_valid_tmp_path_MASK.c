
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_mode; } ;
typedef TYPE_1__ STAT_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (char const*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1)
{
 STAT_T VAR_2;

 if (FUNC_2(VAR_1, &VAR_2) != 0)
  return 0;

 if (!FUNC_0(VAR_2.st_mode))
  return 0;

 return (FUNC_1(VAR_1, VAR_0) == 0);
}
