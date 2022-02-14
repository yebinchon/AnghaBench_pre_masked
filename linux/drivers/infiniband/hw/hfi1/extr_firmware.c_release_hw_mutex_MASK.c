
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct hfi1_devdata {int hfi1_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int ,int ) ;
 int FUNC_1 (struct hfi1_devdata*,int ) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int ) ;

void FUNC_3(struct hfi1_devdata *VAR_1)
{
 u8 VAR_2 = 1 << VAR_1->hfi1_id;
 u8 VAR_3 = (u8)FUNC_1(VAR_1, VAR_0);

 if (VAR_3 != VAR_2)
  FUNC_0(VAR_1,
       "Unable to release hardware mutex, mutex mask %u, my mask %u\n",
       (u32)VAR_3, (u32)VAR_2);
 else
  FUNC_2(VAR_1, VAR_0, 0);
}
