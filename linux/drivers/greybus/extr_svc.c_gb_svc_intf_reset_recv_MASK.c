
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc_intf_reset_request {int dummy; } ;
struct gb_svc {int dev; } ;
struct gb_operation {struct gb_message* request; int connection; } ;
struct gb_message {int payload_size; struct gb_svc_intf_reset_request* payload; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 struct gb_svc* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gb_operation *VAR_1)
{
 struct gb_svc *VAR_2 = FUNC_1(VAR_1->connection);
 struct gb_message *VAR_3 = VAR_1->request;
 struct gb_svc_intf_reset_request *VAR_4;

 if (VAR_3->payload_size < sizeof(*VAR_4)) {
  FUNC_0(&VAR_2->dev, "short reset request received (%zu < %zu)\n",
    VAR_3->payload_size, sizeof(*VAR_4));
  return -VAR_0;
 }
 VAR_4 = VAR_3->payload;



 return 0;
}
