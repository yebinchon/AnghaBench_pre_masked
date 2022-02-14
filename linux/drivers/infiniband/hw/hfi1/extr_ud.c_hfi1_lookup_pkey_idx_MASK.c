
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hfi1_pportdata {int* pkeys; } ;
struct hfi1_ibport {int dummy; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hfi1_pportdata* FUNC_1 (struct hfi1_ibport*) ;

int FUNC_2(struct hfi1_ibport *VAR_2, u16 VAR_3)
{
 struct hfi1_pportdata *VAR_4 = FUNC_1(VAR_2);
 unsigned VAR_5;

 if (VAR_3 == VAR_0 || VAR_3 == VAR_1) {
  unsigned VAR_6 = -1;

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->pkeys); ++VAR_5) {

   if (VAR_4->pkeys[VAR_5] == VAR_3)
    return VAR_5;
   if (VAR_4->pkeys[VAR_5] == VAR_1)
    VAR_6 = VAR_5;
  }


  if (VAR_3 == VAR_0)
   return VAR_6;


  return -1;
 }

 VAR_3 &= 0x7fff;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->pkeys); ++VAR_5)
  if ((VAR_4->pkeys[VAR_5] & 0x7fff) == VAR_3)
   return VAR_5;




 return -1;
}
