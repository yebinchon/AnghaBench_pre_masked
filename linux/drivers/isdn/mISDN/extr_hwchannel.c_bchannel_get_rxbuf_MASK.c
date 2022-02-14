
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bchannel {int maxlen; int next_maxlen; int minlen; int next_minlen; int nr; scalar_t__ rx_skb; int Flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ,int,...) ;
 int FUNC_2 (struct bchannel*,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(struct bchannel *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_4->rx_skb) {
  VAR_6 = FUNC_3(VAR_4->rx_skb);
  if (VAR_6 < VAR_5) {
   FUNC_1("B%d no space for %d (only %d) bytes\n",
       VAR_4->nr, VAR_5, VAR_6);
   if (FUNC_4(VAR_2, &VAR_4->Flags)) {

    FUNC_2(VAR_4, 0, 1);
   } else {

    return -VAR_0;
   }
  } else {
   return VAR_6;
  }
 }

 if (FUNC_5(VAR_4->maxlen != VAR_4->next_maxlen))
  VAR_4->maxlen = VAR_4->next_maxlen;
 if (FUNC_5(VAR_4->minlen != VAR_4->next_minlen))
  VAR_4->minlen = VAR_4->next_minlen;
 if (FUNC_5(VAR_5 > VAR_4->maxlen))
  return -VAR_0;
 if (FUNC_4(VAR_2, &VAR_4->Flags)) {
  if (VAR_5 >= VAR_4->minlen) {
   VAR_6 = VAR_5;
  } else {
   VAR_6 = 2 * VAR_4->minlen;
   if (VAR_6 > VAR_4->maxlen)
    VAR_6 = VAR_4->maxlen;
  }
 } else {

  VAR_6 = VAR_4->maxlen;
 }
 VAR_4->rx_skb = FUNC_0(VAR_6, VAR_3);
 if (!VAR_4->rx_skb) {
  FUNC_1("B%d receive no memory for %d bytes\n",
      VAR_4->nr, VAR_6);
  VAR_6 = -VAR_1;
 }
 return VAR_6;
}
