
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fw_cdev_send_phy_packet {int* data; int closure; int generation; } ;
union ioctl_arg {struct fw_cdev_send_phy_packet send_phy_packet; } ;
struct TYPE_8__ {int* header; int header_length; int callback; int generation; int speed; } ;
struct TYPE_6__ {int length; int type; int closure; } ;
struct outbound_phy_packet_event {TYPE_4__ p; TYPE_2__ phy_packet; struct client* client; } ;
struct fw_card {TYPE_3__* driver; } ;
struct client {TYPE_1__* device; } ;
struct TYPE_7__ {int (* send_request ) (struct fw_card*,TYPE_4__*) ;} ;
struct TYPE_5__ {int is_local; struct fw_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct client*) ;
 scalar_t__ FUNC_1 (int*) ;
 struct outbound_phy_packet_event* FUNC_2 (int,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct fw_card*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct client *VAR_7, union ioctl_arg *VAR_8)
{
 struct fw_cdev_send_phy_packet *VAR_9 = &VAR_8->send_phy_packet;
 struct fw_card *VAR_10 = VAR_7->device->card;
 struct outbound_phy_packet_event *VAR_11;


 if (!VAR_7->device->is_local)
  return -VAR_1;

 VAR_11 = FUNC_2(sizeof(*VAR_11) + 4, VAR_3);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 FUNC_0(VAR_7);
 VAR_11->client = VAR_7;
 VAR_11->p.speed = VAR_4;
 VAR_11->p.generation = VAR_9->generation;
 VAR_11->p.header[0] = VAR_5 << 4;
 VAR_11->p.header[1] = VAR_9->data[0];
 VAR_11->p.header[2] = VAR_9->data[1];
 VAR_11->p.header_length = 12;
 VAR_11->p.callback = VAR_6;
 VAR_11->phy_packet.closure = VAR_9->closure;
 VAR_11->phy_packet.type = VAR_2;
 if (FUNC_1(VAR_9->data))
   VAR_11->phy_packet.length = 4;

 VAR_10->driver->send_request(VAR_10, &VAR_11->p);

 return 0;
}
