
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_context {TYPE_1__* scratch; } ;
struct TYPE_2__ {int int1; int * ptr1; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,char const*,int ) ;

__attribute__((used)) static int
FUNC_3(struct snmp_context *VAR_1, const char *VAR_2)
{
 if ((VAR_1->scratch->int1 = FUNC_1(VAR_2)) >= VAR_0)
  return (-1);

 if ((VAR_1->scratch->ptr1 = FUNC_0(VAR_0)) == ((void*)0))
  return (-1);

 FUNC_2(VAR_1->scratch->ptr1, VAR_2, VAR_1->scratch->int1);
 return (0);
}
