
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mbox_chan {unsigned int msg_count; unsigned int msg_free; int txdone_method; TYPE_2__* mbox; int lock; void* active_req; TYPE_3__* cl; void** msg_data; } ;
struct TYPE_6__ {int (* tx_prepare ) (TYPE_3__*,void*) ;} ;
struct TYPE_5__ {int poll_hrt; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* send_data ) (struct mbox_chan*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_3__*,void*) ;
 int FUNC_4 (struct mbox_chan*,void*) ;

__attribute__((used)) static void FUNC_5(struct mbox_chan *VAR_4)
{
 unsigned VAR_5, VAR_6;
 unsigned long VAR_7;
 void *VAR_8;
 int VAR_9 = -VAR_0;

 FUNC_1(&VAR_4->lock, VAR_7);

 if (!VAR_4->msg_count || VAR_4->active_req)
  goto exit;

 VAR_5 = VAR_4->msg_count;
 VAR_6 = VAR_4->msg_free;
 if (VAR_6 >= VAR_5)
  VAR_6 -= VAR_5;
 else
  VAR_6 += VAR_2 - VAR_5;

 VAR_8 = VAR_4->msg_data[VAR_6];

 if (VAR_4->cl->tx_prepare)
  VAR_4->cl->tx_prepare(VAR_4->cl, VAR_8);

 VAR_9 = VAR_4->mbox->ops->send_data(VAR_4, VAR_8);
 if (!VAR_9) {
  VAR_4->active_req = VAR_8;
  VAR_4->msg_count--;
 }
exit:
 FUNC_2(&VAR_4->lock, VAR_7);

 if (!VAR_9 && (VAR_4->txdone_method & VAR_3))

  FUNC_0(&VAR_4->mbox->poll_hrt, 0, VAR_1);
}
