
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {scalar_t__ value; } ;
struct TYPE_2__ {int called; char const* arg; int unset; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 VAR_0.called = 1;
 VAR_0.arg = VAR_2;
 VAR_0.unset = VAR_3;

 if (VAR_3)
  return 1;

 *(int *)VAR_1->value = FUNC_0(VAR_2);
 return 0;
}
