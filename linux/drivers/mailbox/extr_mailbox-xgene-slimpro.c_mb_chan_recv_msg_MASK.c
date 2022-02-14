
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slimpro_mbox_chan {scalar_t__ reg; void** rx_msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct slimpro_mbox_chan *VAR_3)
{
 VAR_3->rx_msg[1] = FUNC_0(VAR_3->reg + VAR_0);
 VAR_3->rx_msg[2] = FUNC_0(VAR_3->reg + VAR_1);
 VAR_3->rx_msg[0] = FUNC_0(VAR_3->reg + VAR_2);
}
