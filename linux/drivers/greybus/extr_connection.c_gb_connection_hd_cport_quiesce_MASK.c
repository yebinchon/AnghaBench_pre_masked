
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_operation_msg_hdr {int dummy; } ;
struct gb_host_device {int dev; TYPE_1__* driver; } ;
struct gb_cport_shutdown_request {int dummy; } ;
struct gb_connection {int name; int hd_cport_id; scalar_t__ mode_switch; struct gb_host_device* hd; } ;
struct TYPE_2__ {int (* cport_quiesce ) (struct gb_host_device*,int ,size_t,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct gb_host_device*,int ,size_t,int ) ;

__attribute__((used)) static int FUNC_2(struct gb_connection *VAR_1)
{
 struct gb_host_device *VAR_2 = VAR_1->hd;
 size_t VAR_3;
 int VAR_4;

 if (!VAR_2->driver->cport_quiesce)
  return 0;

 VAR_3 = sizeof(struct gb_operation_msg_hdr) +
   sizeof(struct gb_cport_shutdown_request);

 if (VAR_1->mode_switch)
  VAR_3 += sizeof(struct gb_operation_msg_hdr);

 if (!VAR_2->driver->cport_quiesce)
  return 0;

 VAR_4 = VAR_2->driver->cport_quiesce(VAR_2, VAR_1->hd_cport_id,
     VAR_3,
     VAR_0);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "%s: failed to quiesce host cport: %d\n",
   VAR_1->name, VAR_4);
  return VAR_4;
 }

 return 0;
}
