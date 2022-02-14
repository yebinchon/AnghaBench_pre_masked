
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_info {int dummy; } ;
struct TYPE_2__ {void* rbuf; int socket; } ;
struct drbd_connection {int last_received; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drbd_connection*,void*,struct packet_info*) ;
 unsigned int FUNC_1 (struct drbd_connection*) ;
 int FUNC_2 (struct drbd_connection*,void*,unsigned int) ;
 int FUNC_3 (int ,void*,unsigned int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drbd_connection*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct drbd_connection *VAR_4, struct packet_info *VAR_5)
{
 void *VAR_6 = VAR_4->data.rbuf;
 unsigned int VAR_7 = FUNC_1(VAR_4);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_4->data.socket, VAR_6, VAR_7, VAR_2|VAR_1);
 if (VAR_8 != VAR_7) {




  if (VAR_8 == -VAR_0) {
   FUNC_4(VAR_4->data.socket);
   FUNC_5(VAR_4);
  }
  if (VAR_8 > 0) {
   VAR_6 += VAR_8;
   VAR_7 -= VAR_8;
  }
  VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 VAR_8 = FUNC_0(VAR_4, VAR_4->data.rbuf, VAR_5);
 VAR_4->last_received = VAR_3;

 return VAR_8;
}
