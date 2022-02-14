
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sg_ok; } ;
struct vector_private {scalar_t__ header_size; TYPE_1__ estats; int (* form_header ) (int ,struct sk_buff*,struct vector_private*) ;} ;
struct sk_buff {scalar_t__ len; scalar_t__ data_len; int data; } ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,struct sk_buff*,struct vector_private*) ;

__attribute__((used)) static int FUNC_5(struct vector_private *VAR_1,
 struct sk_buff *VAR_2,
 struct iovec *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5, VAR_6;
 skb_frag_t *VAR_7;

 VAR_5 = FUNC_3(VAR_2)->nr_frags;
 if (VAR_5 > VAR_0) {
  if (FUNC_2(VAR_2) != 0)
   goto drop;
 }
 if (VAR_1->header_size > 0) {
  VAR_3[VAR_4].iov_len = VAR_1->header_size;
  VAR_1->form_header(VAR_3[VAR_4].iov_base, VAR_2, VAR_1);
  VAR_4++;
 }
 VAR_3[VAR_4].iov_base = VAR_2->data;
 if (VAR_5 > 0) {
  VAR_3[VAR_4].iov_len = VAR_2->len - VAR_2->data_len;
  VAR_1->estats.sg_ok++;
 } else
  VAR_3[VAR_4].iov_len = VAR_2->len;
 VAR_4++;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = &FUNC_3(VAR_2)->frags[VAR_6];
  VAR_3[VAR_4].iov_base = FUNC_0(VAR_7);
  VAR_3[VAR_4].iov_len = FUNC_1(VAR_7);
  VAR_4++;
 }
 return VAR_4;
drop:
 return -1;
}
