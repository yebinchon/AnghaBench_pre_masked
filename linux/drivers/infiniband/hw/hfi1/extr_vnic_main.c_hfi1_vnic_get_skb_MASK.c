
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int len; } ;
struct hfi1_vnic_rx_queue {int skbq; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline struct sk_buff *FUNC_3(struct hfi1_vnic_rx_queue *VAR_1)
{
 unsigned char *VAR_2;
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(&VAR_1->skbq);
 if (FUNC_2(!VAR_3))
  return ((void*)0);


 VAR_2 = VAR_3->data + VAR_3->len - 1;
 FUNC_1(VAR_3, (VAR_3->len - VAR_0 -
         ((*VAR_2) & 0x7)));

 return VAR_3;
}
