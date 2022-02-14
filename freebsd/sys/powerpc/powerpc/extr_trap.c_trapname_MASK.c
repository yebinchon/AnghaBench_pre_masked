
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct powerpc_exception {scalar_t__ vector; char const* name; } ;


 scalar_t__ VAR_0 ;
 struct powerpc_exception* VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(u_int VAR_2)
{
 struct powerpc_exception *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->vector != VAR_0; VAR_3++) {
  if (VAR_3->vector == VAR_2)
   return (VAR_3->name);
 }

 return ("unknown");
}
