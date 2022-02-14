
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {unsigned char head; struct sk_buff* data; int truesize; TYPE_2__* rxq; int flags; } ;
struct TYPE_4__ {int host_address; int handle; } ;
typedef TYPE_1__ rx_in ;
typedef long gfp_t ;
struct TYPE_5__ {scalar_t__ pending; scalar_t__ maximum; scalar_t__ buffers_wanted; int buffer_size; } ;
typedef TYPE_2__ amb_rxq ;
typedef struct sk_buff amb_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 struct sk_buff* FUNC_1 (int ,long) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,TYPE_1__*,unsigned char) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9 (amb_dev * VAR_4, unsigned char VAR_5,
                                 gfp_t VAR_6)
{
  rx_in VAR_7;
  amb_rxq * VAR_8;

  FUNC_0 (VAR_0|VAR_1, "fill_rx_pool %p %hu %x", VAR_4, VAR_5, VAR_6);

  if (FUNC_7 (VAR_3, &VAR_4->flags))
    return;

  VAR_8 = &VAR_4->rxq[VAR_5];
  while (VAR_8->pending < VAR_8->maximum && VAR_8->pending < VAR_8->buffers_wanted) {

    struct sk_buff * VAR_9 = FUNC_1 (VAR_8->buffer_size, VAR_6);
    if (!VAR_9) {
      FUNC_0 (VAR_2|VAR_1, "failed to allocate skb for RX pool %hu", VAR_5);
      return;
    }
    if (FUNC_2 (VAR_9->data, VAR_9->truesize)) {
      FUNC_4 (VAR_9);
      return;
    }

    FUNC_0 (VAR_2, "allocated skb at %p, head %p, area %li",
     VAR_9, VAR_9->head, (long) FUNC_6(VAR_9));
    VAR_7.handle = FUNC_8 (VAR_9);
    VAR_7.host_address = FUNC_3 (FUNC_8 (VAR_9->data));
    if (FUNC_5 (VAR_4, &VAR_7, VAR_5))
      FUNC_4 (VAR_9);

  }

  return;
}
