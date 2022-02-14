
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_cdev_send_stream_packet {int speed; int length; int tag; int channel; int sy; int generation; int data; int closure; } ;
union ioctl_arg {struct fw_cdev_send_stream_packet send_stream_packet; } ;
struct fw_cdev_send_request {int length; int generation; int data; int closure; int tcode; } ;
struct client {TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int link_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct client*,struct fw_cdev_send_request*,int,int) ;

__attribute__((used)) static int FUNC_2(struct client *VAR_3, union ioctl_arg *VAR_4)
{
 struct fw_cdev_send_stream_packet *VAR_5 = &VAR_4->send_stream_packet;
 struct fw_cdev_send_request VAR_6;
 int VAR_7;

 if (VAR_5->speed > VAR_3->device->card->link_speed ||
     VAR_5->length > 1024 << VAR_5->speed)
  return -VAR_1;

 if (VAR_5->tag > 3 || VAR_5->channel > 63 || VAR_5->sy > 15)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5->tag, VAR_5->channel, VAR_5->sy);
 VAR_6.tcode = VAR_2;
 VAR_6.length = VAR_5->length;
 VAR_6.closure = VAR_5->closure;
 VAR_6.data = VAR_5->data;
 VAR_6.generation = VAR_5->generation;

 return FUNC_1(VAR_3, &VAR_6, VAR_7, VAR_5->speed);
}
