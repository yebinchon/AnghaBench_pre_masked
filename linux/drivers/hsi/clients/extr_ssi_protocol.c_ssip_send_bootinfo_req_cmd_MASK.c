
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {int dummy; } ;
struct hsi_msg {int complete; } ;
struct hsi_client {int device; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hsi_client*,struct hsi_msg*) ;
 int FUNC_3 (struct hsi_client*,struct hsi_msg*) ;
 struct ssi_protocol* FUNC_4 (struct hsi_client*) ;
 struct hsi_msg* FUNC_5 (struct ssi_protocol*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct hsi_msg*,int ) ;

__attribute__((used)) static void FUNC_7(struct hsi_client *VAR_3)
{
 struct ssi_protocol *VAR_4 = FUNC_4(VAR_3);
 struct hsi_msg *VAR_5;

 FUNC_1(&VAR_3->device, "Issuing BOOT INFO REQ command\n");
 VAR_5 = FUNC_5(VAR_4);
 FUNC_6(VAR_5, FUNC_0(VAR_0));
 VAR_5->complete = VAR_1;
 FUNC_3(VAR_3, VAR_5);
 FUNC_1(&VAR_3->device, "Issuing RX command\n");
 VAR_5 = FUNC_5(VAR_4);
 VAR_5->complete = VAR_2;
 FUNC_2(VAR_3, VAR_5);
}
