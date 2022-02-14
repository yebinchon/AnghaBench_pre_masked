
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {int lock; } ;
struct hsi_msg {struct hsi_msg* context; struct hsi_client* cl; } ;
struct hsi_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hsi_client*,struct hsi_msg*) ;
 struct ssi_protocol* FUNC_1 (struct hsi_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hsi_msg*) ;
 int FUNC_5 (struct ssi_protocol*,int ) ;

__attribute__((used)) static void FUNC_6(struct hsi_msg *VAR_1)
{
 struct hsi_client *VAR_2 = VAR_1->cl;
 struct ssi_protocol *VAR_3 = FUNC_1(VAR_2);
 struct hsi_msg *VAR_4;

 VAR_4 = VAR_1->context;
 FUNC_4(VAR_1);
 FUNC_2(&VAR_3->lock);
 FUNC_5(VAR_3, VAR_0);
 FUNC_3(&VAR_3->lock);
 FUNC_0(VAR_2, VAR_4);
}
