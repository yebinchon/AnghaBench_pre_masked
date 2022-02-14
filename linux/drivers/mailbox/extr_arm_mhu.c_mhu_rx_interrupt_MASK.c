
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mhu_link {scalar_t__ rx_reg; } ;
struct mbox_chan {struct mhu_link* con_priv; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mbox_chan*,void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct mbox_chan *VAR_6 = VAR_5;
 struct mhu_link *VAR_7 = VAR_6->con_priv;
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7->rx_reg + VAR_1);
 if (!VAR_8)
  return VAR_3;

 FUNC_0(VAR_6, (void *)&VAR_8);

 FUNC_2(VAR_8, VAR_7->rx_reg + VAR_0);

 return VAR_2;
}
