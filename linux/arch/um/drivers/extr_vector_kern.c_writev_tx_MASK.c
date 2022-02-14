
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vector_private {int in_error; TYPE_3__* dev; TYPE_1__* fds; int header_txbuffer; } ;
struct sk_buff {scalar_t__ len; } ;
struct iovec {int iov_base; } ;
struct TYPE_6__ {int tx_dropped; int tx_packets; int tx_bytes; } ;
struct TYPE_7__ {TYPE_2__ stats; } ;
struct TYPE_5__ {int tx_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct vector_private*,struct sk_buff*,struct iovec*) ;
 int FUNC_4 (int ,struct iovec*,int) ;

__attribute__((used)) static int FUNC_5(struct vector_private *VAR_1, struct sk_buff *VAR_2)
{
 struct iovec VAR_3[3 + VAR_0];
 int VAR_4, VAR_5 = 0;

 VAR_3[0].iov_base = VAR_1->header_txbuffer;
 VAR_4 = FUNC_3(VAR_1, VAR_2, (struct iovec *) &VAR_3);

 if (VAR_4 < 1)
  goto drop;

 VAR_5 = FUNC_4(
  VAR_1->fds->tx_fd,
  (struct iovec *) &VAR_3,
  VAR_4
 );

 if (VAR_5 < 0)
  goto drop;

 FUNC_1(VAR_1->dev);
 FUNC_2(VAR_1->dev);

 if (VAR_5 > 0) {
  VAR_1->dev->stats.tx_bytes += VAR_2->len;
  VAR_1->dev->stats.tx_packets++;
 } else {
  VAR_1->dev->stats.tx_dropped++;
 }
 FUNC_0(VAR_2);
 return VAR_5;
drop:
 VAR_1->dev->stats.tx_dropped++;
 FUNC_0(VAR_2);
 if (VAR_5 < 0)
  VAR_1->in_error = 1;
 return VAR_5;
}
