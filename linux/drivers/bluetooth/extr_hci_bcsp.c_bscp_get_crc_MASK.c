
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bcsp_struct {TYPE_1__* rx_skb; } ;
struct TYPE_2__ {int len; int * data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static u16 FUNC_1(struct bcsp_struct *VAR_0)
{
 return FUNC_0(&VAR_0->rx_skb->data[VAR_0->rx_skb->len - 2]);
}
