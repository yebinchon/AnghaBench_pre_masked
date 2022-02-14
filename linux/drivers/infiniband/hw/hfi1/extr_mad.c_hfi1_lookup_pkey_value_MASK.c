
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hfi1_pportdata {int * pkeys; } ;
struct hfi1_ibport {int dummy; } ;


 int FUNC_0 (int *) ;
 struct hfi1_pportdata* FUNC_1 (struct hfi1_ibport*) ;

__attribute__((used)) static u16 FUNC_2(struct hfi1_ibport *VAR_0, int VAR_1)
{
 struct hfi1_pportdata *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1 < FUNC_0(VAR_2->pkeys))
  return VAR_2->pkeys[VAR_1];

 return 0;
}
