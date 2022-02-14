
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_5__ {int task; } ;
struct TYPE_4__ {struct socket* socket; } ;
struct drbd_connection {scalar_t__ cstate; int ko_count; TYPE_2__ ack_receiver; TYPE_1__ meta; } ;
struct TYPE_6__ {int pid; int comm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (struct drbd_connection*,char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct drbd_connection*) ;

__attribute__((used)) static int FUNC_3(struct drbd_connection *VAR_3, struct socket *VAR_4)
{
 int VAR_5;


 VAR_5 = VAR_3->meta.socket == VAR_4
  || !VAR_3->ack_receiver.task
  || FUNC_1(&VAR_3->ack_receiver) != VAR_1
  || VAR_3->cstate < VAR_0;

 if (VAR_5)
  return 1;

 VAR_5 = !--VAR_3->ko_count;
 if (!VAR_5) {
  FUNC_0(VAR_3, "[%s/%d] sock_sendmsg time expired, ko = %u\n",
    VAR_2->comm, VAR_2->pid, VAR_3->ko_count);
  FUNC_2(VAR_3);
 }

 return VAR_5; ;
}
