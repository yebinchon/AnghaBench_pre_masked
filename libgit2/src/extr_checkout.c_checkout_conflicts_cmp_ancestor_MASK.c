
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ancestor; } ;
typedef TYPE_1__ checkout_conflictdata ;


 int FUNC_0 (char const*,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const char *VAR_2 = VAR_0;
 const checkout_conflictdata *VAR_3 = VAR_1;

 if (!VAR_3->ancestor)
  return 1;

 return FUNC_0(VAR_2, VAR_3->ancestor);
}
