
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mhu_link {scalar_t__ tx_reg; } ;
struct mbox_chan {struct mhu_link* con_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct mbox_chan *VAR_1)
{
 struct mhu_link *VAR_2 = VAR_1->con_priv;
 u32 VAR_3 = FUNC_0(VAR_2->tx_reg + VAR_0);

 return (VAR_3 == 0);
}
