
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_wmem_queued; } ;
struct sk_buff {int len; int data_len; int truesize; } ;
struct page {int dummy; } ;
struct iov_iter {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct sock*,struct sk_buff*,struct iov_iter*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0,
       struct iov_iter *VAR_1,
       struct sk_buff *VAR_2,
       struct page *VAR_3,
       int VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_1, FUNC_0(VAR_3) +
           VAR_4, VAR_5, VAR_2->len);
 if (VAR_6)
  return VAR_6;

 VAR_2->len += VAR_5;
 VAR_2->data_len += VAR_5;
 VAR_2->truesize += VAR_5;
 VAR_0->sk_wmem_queued += VAR_5;
 return 0;
}
