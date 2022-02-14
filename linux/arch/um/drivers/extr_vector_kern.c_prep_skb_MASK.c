
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vector_private {int max_packet; int req_size; scalar_t__ header_size; int dev; int headroom; } ;
struct user_msghdr {int msg_iovlen; struct iovec* msg_iov; } ;
struct sk_buff {int data_len; int * data; int ip_summed; int len; int dev; } ;
struct iovec {int iov_len; int * iov_base; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int,int,int*,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_7(
 struct vector_private *VAR_3,
 struct user_msghdr *VAR_4)
{
 int VAR_5 = VAR_3->max_packet + VAR_3->headroom + VAR_2;
 struct sk_buff *VAR_6;
 int VAR_7 = 0, VAR_8;
 struct iovec *VAR_9 = VAR_4->msg_iov;
 int VAR_10, VAR_11, VAR_12;
 skb_frag_t *VAR_13;

 if (VAR_3->req_size <= VAR_5)
  VAR_8 = VAR_5;
 else
  VAR_8 = VAR_3->req_size;
 VAR_6 = FUNC_0(
  VAR_5,
  VAR_8 - VAR_3->max_packet,
  3,
  &VAR_10,
  VAR_1
 );
 if (VAR_3->header_size > 0)
  VAR_7++;
 if (VAR_6 == ((void*)0)) {
  VAR_9[VAR_7].iov_base = ((void*)0);
  VAR_9[VAR_7].iov_len = 0;
  goto done;
 }
 FUNC_4(VAR_6, VAR_3->headroom);
 VAR_6->dev = VAR_3->dev;
 FUNC_3(VAR_6, VAR_3->max_packet);
 VAR_6->data_len = VAR_8 - VAR_3->max_packet;
 VAR_6->len += VAR_8 - VAR_3->max_packet;
 FUNC_5(VAR_6);
 VAR_6->ip_summed = VAR_0;
 VAR_9[VAR_7].iov_base = VAR_6->data;
 VAR_9[VAR_7].iov_len = VAR_3->max_packet;
 VAR_7++;

 VAR_11 = FUNC_6(VAR_6)->nr_frags;
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_13 = &FUNC_6(VAR_6)->frags[VAR_12];
  VAR_9[VAR_7].iov_base = FUNC_1(VAR_13);
  if (VAR_9[VAR_7].iov_base != ((void*)0))
   VAR_9[VAR_7].iov_len = FUNC_2(VAR_13);
  else
   VAR_9[VAR_7].iov_len = 0;
  VAR_7++;
 }
done:
 VAR_4->msg_iovlen = VAR_7;
 return VAR_6;
}
