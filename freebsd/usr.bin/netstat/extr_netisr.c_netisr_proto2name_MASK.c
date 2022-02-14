
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {size_t snp_proto; char const* snp_name; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(u_int VAR_2)
{
 u_int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].snp_proto == VAR_2)
   return (VAR_0[VAR_3].snp_name);
 }
 return ("unknown");
}
