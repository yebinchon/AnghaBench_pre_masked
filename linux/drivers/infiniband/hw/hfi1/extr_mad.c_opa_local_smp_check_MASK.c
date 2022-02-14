
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ib_wc {size_t pkey_index; int slid; } ;
struct hfi1_pportdata {scalar_t__* pkeys; } ;
struct hfi1_ibport {int dummy; } ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct hfi1_pportdata*,scalar_t__,int ) ;
 struct hfi1_pportdata* FUNC_2 (struct hfi1_ibport*) ;

__attribute__((used)) static int FUNC_3(struct hfi1_ibport *VAR_2,
          const struct ib_wc *VAR_3)
{
 struct hfi1_pportdata *VAR_4 = FUNC_2(VAR_2);
 u16 VAR_5;

 if (VAR_3->pkey_index >= FUNC_0(VAR_4->pkeys))
  return 1;

 VAR_5 = VAR_4->pkeys[VAR_3->pkey_index];
 if (VAR_5 == VAR_1 || VAR_5 == VAR_0)
  return 0;
 FUNC_1(VAR_4, VAR_5, VAR_3->slid);
 return 1;
}
