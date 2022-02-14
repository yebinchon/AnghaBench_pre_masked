
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;
struct ag71xx {int rx_buf_size; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct ag71xx *VAR_0)
{
 return VAR_0->rx_buf_size +
        FUNC_0(sizeof(struct skb_shared_info));
}
