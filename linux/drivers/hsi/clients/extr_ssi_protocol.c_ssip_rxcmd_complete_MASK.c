
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hsi_msg {scalar_t__ status; struct hsi_client* cl; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;


 unsigned int FUNC_0 (int ) ;




 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct hsi_client*,struct hsi_msg*) ;
 int FUNC_5 (struct hsi_client*) ;
 int FUNC_6 (struct hsi_msg*) ;
 int FUNC_7 (struct hsi_msg*) ;
 int FUNC_8 (struct hsi_client*,int ) ;
 int FUNC_9 (struct hsi_client*,int ) ;
 int FUNC_10 (struct hsi_client*) ;
 int FUNC_11 (struct hsi_client*,int ) ;
 int FUNC_12 (struct hsi_client*,int ) ;

__attribute__((used)) static void FUNC_13(struct hsi_msg *VAR_1)
{
 struct hsi_client *VAR_2 = VAR_1->cl;
 u32 VAR_3 = FUNC_6(VAR_1);
 unsigned int VAR_4 = FUNC_0(VAR_3);

 if (VAR_1->status == VAR_0) {
  FUNC_2(&VAR_2->device, "RX error detected\n");
  FUNC_7(VAR_1);
  FUNC_5(VAR_2);
  return;
 }
 FUNC_4(VAR_2, VAR_1);
 FUNC_1(&VAR_2->device, "RX cmd: 0x%08x\n", VAR_3);
 switch (VAR_4) {
 case 129:

  break;
 case 133:
  FUNC_8(VAR_2, VAR_3);
  break;
 case 132:
  FUNC_9(VAR_2, VAR_3);
  break;
 case 128:
  FUNC_12(VAR_2, VAR_3);
  break;
 case 130:
  FUNC_11(VAR_2, VAR_3);
  break;
 case 131:
  FUNC_10(VAR_2);
  break;
 default:
  FUNC_3(&VAR_2->device, "command 0x%08x not supported\n", VAR_3);
  break;
 }
}
