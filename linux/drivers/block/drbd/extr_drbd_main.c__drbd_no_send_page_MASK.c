
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int dummy; } ;
struct page {int dummy; } ;
struct drbd_peer_device {TYPE_2__* device; TYPE_3__* connection; } ;
struct TYPE_4__ {struct socket* socket; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_5__ {size_t send_cnt; } ;


 int FUNC_0 (TYPE_3__*,struct socket*,void*,size_t,unsigned int) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct drbd_peer_device *VAR_0, struct page *VAR_1,
         int VAR_2, size_t VAR_3, unsigned VAR_4)
{
 struct socket *VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_5 = VAR_0->connection->data.socket;
 VAR_6 = FUNC_1(VAR_1) + VAR_2;
 VAR_7 = FUNC_0(VAR_0->connection, VAR_5, VAR_6, VAR_3, VAR_4);
 FUNC_2(VAR_1);
 if (!VAR_7)
  VAR_0->device->send_cnt += VAR_3 >> 9;
 return VAR_7;
}
