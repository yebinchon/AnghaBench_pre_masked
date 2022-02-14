
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ndptr ;
struct TYPE_4__ {scalar_t__ builtin_type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (char const*) ;

ndptr
FUNC_1(const char *VAR_1)
{
 ndptr VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0) || VAR_2->builtin_type == VAR_0)
  return ((void*)0);
 else
  return VAR_2;
}
