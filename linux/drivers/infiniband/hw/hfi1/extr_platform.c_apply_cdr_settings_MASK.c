
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int * cache; } ;
struct hfi1_pportdata {TYPE_2__* dd; TYPE_1__ qsfp_info; } ;
struct TYPE_4__ {int hfi1_id; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct hfi1_pportdata*,int ,int *) ;
 int FUNC_1 (struct hfi1_pportdata*,int ,int *) ;
 int FUNC_2 (struct hfi1_pportdata*,int ,size_t,int *,int) ;

__attribute__((used)) static void FUNC_3(
  struct hfi1_pportdata *VAR_1, u32 VAR_2,
  u32 VAR_3)
{
 u8 *VAR_4 = VAR_1->qsfp_info.cache;
 u8 VAR_5 = VAR_4[VAR_0];

 FUNC_0(VAR_1, VAR_2, &VAR_5);

 FUNC_1(VAR_1, VAR_3, &VAR_5);

 FUNC_2(VAR_1, VAR_1->dd->hfi1_id, VAR_0,
     &VAR_5, 1);
}
