
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {scalar_t__* pkeys; } ;
struct hfi1_ibport {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 struct hfi1_pportdata* FUNC_1 (struct hfi1_ibport*) ;

__attribute__((used)) static int FUNC_2(struct hfi1_ibport *VAR_1)
{
 unsigned int VAR_2;
 struct hfi1_pportdata *VAR_3 = FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3->pkeys); ++VAR_2)
  if (VAR_3->pkeys[VAR_2] == VAR_0)
   return 1;

 return 0;
}
