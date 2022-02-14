
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hfi1_devdata {size_t hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct hfi1_devdata*,char*) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct hfi1_devdata*) ;
 int FUNC_4 (struct hfi1_devdata*,int *) ;
 int FUNC_5 (struct hfi1_devdata*,int ) ;
 int FUNC_6 (struct hfi1_devdata*,int ,int,int ,int) ;
 int FUNC_7 (struct hfi1_devdata*) ;
 int FUNC_8 (struct hfi1_devdata*,int ) ;
 int FUNC_9 (int) ;

void FUNC_10(struct hfi1_devdata *VAR_7)
{
 int VAR_8;

 if (!VAR_6)
  return;

 VAR_8 = FUNC_0(VAR_7, VAR_0, VAR_1);
 if (VAR_8) {
  FUNC_2(VAR_7,
      "Cannot acquire SBus resource to reset fabric SerDes - perhaps you should reboot\n");
  return;
 }
 FUNC_7(VAR_7);

 if (FUNC_3(VAR_7)) {

  u8 VAR_9 = VAR_4[VAR_7->hfi1_id];


  FUNC_6(VAR_7, VAR_9, 0x07, VAR_3, 0x00000011);

  FUNC_9(1);

  FUNC_6(VAR_7, VAR_9, 0x07, VAR_3, 0x00000010);

  FUNC_6(VAR_7, VAR_9, 0x07, VAR_3, 0x00000002);
 } else {
  FUNC_8(VAR_7, VAR_2);







  (void)FUNC_4(VAR_7, &VAR_5);
 }

 FUNC_1(VAR_7);
 FUNC_5(VAR_7, VAR_0);
}
