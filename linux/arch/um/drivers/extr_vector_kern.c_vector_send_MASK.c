
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vector_queue {int max_depth; int queue_depth; int head; int head_lock; int dev; struct mmsghdr* mmsg_vector; int tail_lock; } ;
struct TYPE_4__ {int tx_queue_max; int tx_queue_running_average; int tx_restart_queue; } ;
struct vector_private {int in_write_poll; int in_error; int tx_poll; TYPE_2__ estats; int dev; TYPE_1__* fds; } ;
struct mmsghdr {int dummy; } ;
struct TYPE_3__ {int tx_fd; } ;


 int FUNC_0 (struct vector_queue*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 struct vector_private* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,struct mmsghdr*,int,int ) ;

__attribute__((used)) static int FUNC_10(struct vector_queue *VAR_0)
{
 struct vector_private *VAR_1 = FUNC_3(VAR_0->dev);
 struct mmsghdr *VAR_2;
 int VAR_3 = 0, VAR_4, VAR_5 = VAR_0->max_depth;

 if (FUNC_6(&VAR_0->head_lock)) {
  if (FUNC_6(&VAR_0->tail_lock)) {

   VAR_5 = VAR_0->queue_depth;
   FUNC_7(&VAR_0->tail_lock);
   while (VAR_5 > 0) {

    VAR_4 = VAR_5;
    VAR_2 = VAR_0->mmsg_vector;
    VAR_2 += VAR_0->head;

    if (VAR_4 + VAR_0->head > VAR_0->max_depth)
     VAR_4 = VAR_0->max_depth - VAR_0->head;

    if (VAR_4 > 0) {
     VAR_3 = FUNC_9(
       VAR_1->fds->tx_fd,
       VAR_2,
       VAR_4,
       0
     );
     VAR_1->in_write_poll =
      (VAR_3 != VAR_4);
    }





    if (VAR_3 < 0) {
     if (FUNC_1())
      FUNC_2(VAR_1->dev, "sendmmsg err=%i\n",
       VAR_3);
     VAR_1->in_error = 1;
     VAR_3 = VAR_4;
    }
    if (VAR_3 > 0) {
     VAR_5 =
      FUNC_0(VAR_0, VAR_3);




     if (VAR_3 > VAR_1->estats.tx_queue_max)
      VAR_1->estats.tx_queue_max = VAR_3;
     VAR_1->estats.tx_queue_running_average =
      (VAR_1->estats.tx_queue_running_average + VAR_3) >> 1;
    }
    FUNC_4(VAR_0->dev);
    FUNC_5(VAR_0->dev);



    if (VAR_3 != VAR_4) {
     VAR_1->estats.tx_restart_queue++;
     break;
    }
   }
  }
  FUNC_7(&VAR_0->head_lock);
 } else {
  FUNC_8(&VAR_1->tx_poll);
 }
 return VAR_5;
}
