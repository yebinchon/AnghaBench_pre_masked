
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xiic_i2c {int state; int wait; scalar_t__ nmsgs; int * rx_msg; int * tx_msg; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct xiic_i2c *VAR_0, int VAR_1)
{
 VAR_0->tx_msg = ((void*)0);
 VAR_0->rx_msg = ((void*)0);
 VAR_0->nmsgs = 0;
 VAR_0->state = VAR_1;
 FUNC_0(&VAR_0->wait);
}
