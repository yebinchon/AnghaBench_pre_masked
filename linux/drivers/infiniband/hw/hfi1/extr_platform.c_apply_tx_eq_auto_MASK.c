
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int* cache; } ;
struct hfi1_pportdata {TYPE_2__* dd; TYPE_1__ qsfp_info; } ;
struct TYPE_4__ {int hfi1_id; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct hfi1_pportdata*,int ,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct hfi1_pportdata *VAR_1)
{
 u8 *VAR_2 = VAR_1->qsfp_info.cache;
 u8 VAR_3;

 if (!(VAR_2[VAR_0] & 0x8))
  return;

 VAR_3 = VAR_2[(128 * 3) + 241];
 VAR_3 &= 0xF0;
 FUNC_0(VAR_1, VAR_1->dd->hfi1_id, (256 * 3) + 241, &VAR_3, 1);
}
