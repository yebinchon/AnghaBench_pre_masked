
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_svc_hello_request {int interface_id; int endo_id; } ;
struct gb_svc {int dev; int ap_intf_id; int endo_id; } ;
struct gb_operation {TYPE_1__* request; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {int payload_size; struct gb_svc_hello_request* payload; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct gb_svc* FUNC_4 (struct gb_connection*) ;
 int FUNC_5 (struct gb_svc*) ;
 int FUNC_6 (struct gb_operation*) ;
 int FUNC_7 (struct gb_svc*) ;
 int FUNC_8 (struct gb_svc*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct gb_operation *VAR_1)
{
 struct gb_connection *VAR_2 = VAR_1->connection;
 struct gb_svc *VAR_3 = FUNC_4(VAR_2);
 struct gb_svc_hello_request *VAR_4;
 int VAR_5;

 if (VAR_1->request->payload_size < sizeof(*VAR_4)) {
  FUNC_1(&VAR_3->dev, "short hello request (%zu < %zu)\n",
    VAR_1->request->payload_size,
    sizeof(*VAR_4));
  return -VAR_0;
 }

 VAR_4 = VAR_1->request->payload;
 VAR_3->endo_id = FUNC_9(VAR_4->endo_id);
 VAR_3->ap_intf_id = VAR_4->interface_id;

 VAR_5 = FUNC_2(&VAR_3->dev);
 if (VAR_5) {
  FUNC_0(&VAR_3->dev, "failed to register svc device: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5) {
  FUNC_0(&VAR_3->dev, "failed to create watchdog: %d\n", VAR_5);
  goto err_unregister_device;
 }

 FUNC_5(VAR_3);

 return FUNC_6(VAR_1);

err_unregister_device:
 FUNC_8(VAR_3);
 FUNC_3(&VAR_3->dev);
 return VAR_5;
}
