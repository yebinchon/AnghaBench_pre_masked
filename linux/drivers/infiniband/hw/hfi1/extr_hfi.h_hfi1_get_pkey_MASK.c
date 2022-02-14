
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfi1_pportdata {scalar_t__* pkeys; } ;
struct hfi1_ibport {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 struct hfi1_pportdata* FUNC_1 (struct hfi1_ibport*) ;

__attribute__((used)) static inline u16 FUNC_2(struct hfi1_ibport *VAR_0, unsigned VAR_1)
{
 struct hfi1_pportdata *VAR_2 = FUNC_1(VAR_0);
 u16 VAR_3;

 if (VAR_1 >= FUNC_0(VAR_2->pkeys))
  VAR_3 = 0;
 else
  VAR_3 = VAR_2->pkeys[VAR_1];

 return VAR_3;
}
