
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_info {int dummy; } ;
struct TYPE_2__ {void* rbuf; } ;
struct drbd_connection {int last_received; TYPE_1__ data; } ;


 int FUNC_0 (struct drbd_connection*,void*,struct packet_info*) ;
 int FUNC_1 (struct drbd_connection*) ;
 int FUNC_2 (struct drbd_connection*,void*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct drbd_connection *VAR_1, struct packet_info *VAR_2)
{
 void *VAR_3 = VAR_1->data.rbuf;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_3, FUNC_1(VAR_1));
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_2);
 VAR_1->last_received = VAR_0;

 return VAR_4;
}
