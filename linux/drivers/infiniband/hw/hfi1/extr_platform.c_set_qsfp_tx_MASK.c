
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hfi1_pportdata {TYPE_1__* dd; } ;
struct TYPE_2__ {int hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_pportdata*,int ,int ,int*,int) ;

int FUNC_1(struct hfi1_pportdata *VAR_2, int VAR_3)
{
 u8 VAR_4 = VAR_3 ? 0x0 : 0xF;
 int VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_2, VAR_2->dd->hfi1_id, VAR_1,
    &VAR_4, 1);

 if (VAR_5 == 0)
  VAR_5 = -VAR_0;
 else if (VAR_5 == 1)
  VAR_5 = 0;
 return VAR_5;
}
