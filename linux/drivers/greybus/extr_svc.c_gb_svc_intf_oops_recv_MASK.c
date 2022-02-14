
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_svc_intf_oops_request {int dummy; } ;
struct gb_svc {int dev; } ;
struct gb_operation {TYPE_1__* request; int connection; } ;
struct TYPE_2__ {int payload_size; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 struct gb_svc* FUNC_1 (int ) ;
 int FUNC_2 (struct gb_operation*) ;

__attribute__((used)) static int FUNC_3(struct gb_operation *VAR_1)
{
 struct gb_svc *VAR_2 = FUNC_1(VAR_1->connection);
 struct gb_svc_intf_oops_request *VAR_3;

 if (VAR_1->request->payload_size < sizeof(*VAR_3)) {
  FUNC_0(&VAR_2->dev, "short intf-oops request received (%zu < %zu)\n",
    VAR_1->request->payload_size, sizeof(*VAR_3));
  return -VAR_0;
 }

 return FUNC_2(VAR_1);
}
