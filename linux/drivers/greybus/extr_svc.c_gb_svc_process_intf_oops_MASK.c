
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gb_svc_intf_oops_request {int reason; int intf_id; } ;
struct gb_svc {int dev; } ;
struct gb_operation {TYPE_1__* request; struct gb_connection* connection; } ;
struct gb_interface {int disconnected; int mutex; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {struct gb_svc_intf_oops_request* payload; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 struct gb_svc* FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_interface*) ;
 int FUNC_4 (struct gb_interface*) ;
 struct gb_interface* FUNC_5 (struct gb_svc*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct gb_operation *VAR_0)
{
 struct gb_svc_intf_oops_request *VAR_1;
 struct gb_connection *VAR_2 = VAR_0->connection;
 struct gb_svc *VAR_3 = FUNC_2(VAR_2);
 struct gb_interface *VAR_4;
 u8 VAR_5;
 u8 VAR_6;


 VAR_1 = VAR_0->request->payload;
 VAR_5 = VAR_1->intf_id;
 VAR_6 = VAR_1->reason;

 VAR_4 = FUNC_5(VAR_3, VAR_5);
 if (!VAR_4) {
  FUNC_1(&VAR_3->dev, "unexpected interface-oops event %u\n",
    VAR_5);
  return;
 }

 FUNC_0(&VAR_3->dev, "Deactivating interface %u, interface oops reason = %u\n",
   VAR_5, VAR_6);

 FUNC_6(&VAR_4->mutex);
 VAR_4->disconnected = 1;
 FUNC_4(VAR_4);
 FUNC_3(VAR_4);
 FUNC_7(&VAR_4->mutex);
}
