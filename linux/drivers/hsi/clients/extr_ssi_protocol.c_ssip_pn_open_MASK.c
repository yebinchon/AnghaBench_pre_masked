
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssi_protocol {int lock; int main_state; int flags; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct hsi_client {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct hsi_client*,int) ;
 struct ssi_protocol* FUNC_3 (struct hsi_client*) ;
 int FUNC_4 (struct hsi_client*,int ) ;
 int FUNC_5 (struct hsi_client*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct hsi_client*,int) ;
 int VAR_2 ;
 int FUNC_9 (struct hsi_client*) ;
 int FUNC_10 (int ,int *) ;
 struct hsi_client* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_3)
{
 struct hsi_client *VAR_4 = FUNC_11(VAR_3->dev.parent);
 struct ssi_protocol *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, 1);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->device, "SSI port already claimed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_4(VAR_4, VAR_2);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->device, "Register HSI port event failed (%d)\n",
   VAR_6);
  return VAR_6;
 }
 FUNC_0(&VAR_4->device, "Configuring SSI port\n");
 FUNC_5(VAR_4);

 if (!FUNC_10(VAR_1, &VAR_5->flags))
  FUNC_8(VAR_4, 1);

 FUNC_6(&VAR_5->lock);
 VAR_5->main_state = VAR_0;
 FUNC_7(&VAR_5->lock);

 FUNC_9(VAR_4);

 return 0;
}
