
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct hfi1_devdata {size_t hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct hfi1_devdata*,char*) ;
 int FUNC_3 (struct hfi1_devdata*,char*,int,...) ;
 int FUNC_4 (struct hfi1_devdata*,char*) ;
 int ** VAR_6 ;
 int ** VAR_7 ;
 int FUNC_5 (struct hfi1_devdata*,int ) ;
 scalar_t__ FUNC_6 (struct hfi1_devdata*,int ,int,int) ;
 int FUNC_7 (struct hfi1_devdata*,int ,int,int ,int) ;
 int FUNC_8 (struct hfi1_devdata*) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void FUNC_10(struct hfi1_devdata *VAR_8)
{
 u32 VAR_9[VAR_2];
 u32 VAR_10[VAR_1];
 u32 VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 u8 VAR_15;

 VAR_14 = FUNC_0(VAR_8, VAR_0, VAR_4);
 if (VAR_14) {
  FUNC_2(VAR_8, "Unable to acquire SBus to read firmware versions\n");
  return;
 }


 FUNC_8(VAR_8);


 FUNC_7(VAR_8, VAR_3, 0x02, VAR_5, 0);
 FUNC_7(VAR_8, VAR_3, 0x07, VAR_5, 0x1);

 FUNC_9(10000, 11000);
 VAR_11 = FUNC_6(VAR_8, VAR_3, 0x08, 0x1);
 FUNC_3(VAR_8, "SBus Master firmware version 0x%08x\n", VAR_11);


 VAR_13 = 1;
 VAR_9[0] = 0;
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_15 = VAR_7[VAR_8->hfi1_id][VAR_12];
  FUNC_7(VAR_8, VAR_15, 0x03, VAR_5, 0);

  FUNC_9(10000, 11000);
  VAR_9[VAR_12] = FUNC_6(VAR_8, VAR_15, 0x04, 0x0);
  if (VAR_12 > 0 && VAR_9[0] != VAR_9[VAR_12])
   VAR_13 = 0;
 }

 if (VAR_13) {
  FUNC_3(VAR_8, "PCIe SerDes firmware version 0x%x\n",
       VAR_9[0]);
 } else {
  FUNC_4(VAR_8, "PCIe SerDes do not have the same firmware version\n");
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
   FUNC_3(VAR_8,
        "PCIe SerDes lane %d firmware version 0x%x\n",
        VAR_12, VAR_9[VAR_12]);
  }
 }


 VAR_13 = 1;
 VAR_10[0] = 0;
 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  VAR_15 = VAR_6[VAR_8->hfi1_id][VAR_12];
  FUNC_7(VAR_8, VAR_15, 0x03, VAR_5, 0);

  FUNC_9(10000, 11000);
  VAR_10[VAR_12] = FUNC_6(VAR_8, VAR_15, 0x04, 0x0);
  if (VAR_12 > 0 && VAR_10[0] != VAR_10[VAR_12])
   VAR_13 = 0;
 }

 if (VAR_13) {
  FUNC_3(VAR_8, "Fabric SerDes firmware version 0x%x\n",
       VAR_10[0]);
 } else {
  FUNC_4(VAR_8, "Fabric SerDes do not have the same firmware version\n");
  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   FUNC_3(VAR_8,
        "Fabric SerDes lane %d firmware version 0x%x\n",
        VAR_12, VAR_10[VAR_12]);
  }
 }

 FUNC_1(VAR_8);
 FUNC_5(VAR_8, VAR_0);
}
