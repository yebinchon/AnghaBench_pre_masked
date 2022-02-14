
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct drbd_connection* private; } ;
struct drbd_request {int dummy; } ;
struct drbd_connection {TYPE_1__* resource; struct drbd_request* req_not_net_done; struct drbd_request* req_ack_pending; struct drbd_request* req_next; } ;
struct TYPE_2__ {int req_lock; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct seq_file*,struct drbd_request*,unsigned long) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct drbd_connection *VAR_3 = VAR_1->private;
 unsigned long VAR_4 = VAR_0;
 struct drbd_request *VAR_5, *VAR_6;


 FUNC_1(VAR_1, "v: %u\n\n", 0);

 FUNC_2(&VAR_3->resource->req_lock);
 VAR_5 = VAR_3->req_next;
 if (VAR_5)
  FUNC_0(VAR_1, VAR_5, VAR_4);
 VAR_6 = VAR_3->req_ack_pending;
 if (VAR_6 && VAR_6 != VAR_5) {
  VAR_5 = VAR_6;
  FUNC_0(VAR_1, VAR_5, VAR_4);
 }
 VAR_6 = VAR_3->req_not_net_done;
 if (VAR_6 && VAR_6 != VAR_5)
  FUNC_0(VAR_1, VAR_6, VAR_4);
 FUNC_3(&VAR_3->resource->req_lock);
 return 0;
}
