
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const mode; char const* param; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_1(const int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);

 while (VAR_2--)
  if (VAR_1 == VAR_0[VAR_2].mode)
   return VAR_0[VAR_2].param;

 return "unknown";
}
