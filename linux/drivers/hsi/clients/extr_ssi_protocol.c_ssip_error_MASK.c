
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {int dummy; } ;
struct hsi_msg {int complete; } ;
struct hsi_client {int dummy; } ;


 int FUNC_0 (struct hsi_client*,struct hsi_msg*) ;
 struct ssi_protocol* FUNC_1 (struct hsi_client*) ;
 struct hsi_msg* FUNC_2 (struct ssi_protocol*) ;
 int FUNC_3 (struct hsi_client*) ;
 int FUNC_4 (struct hsi_client*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct hsi_client *VAR_1)
{
 struct ssi_protocol *VAR_2 = FUNC_1(VAR_1);
 struct hsi_msg *VAR_3;

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 VAR_3 = FUNC_2(VAR_2);
 VAR_3->complete = VAR_0;
 FUNC_0(VAR_1, VAR_3);
}
