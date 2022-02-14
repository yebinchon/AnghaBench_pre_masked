
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slimpro_mbox_chan {int rx_msg; int chan; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct slimpro_mbox_chan*) ;
 scalar_t__ FUNC_1 (struct slimpro_mbox_chan*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct slimpro_mbox_chan *VAR_3 = VAR_2;

 if (FUNC_0(VAR_3))
  FUNC_3(VAR_3->chan, 0);

 if (FUNC_1(VAR_3))
  FUNC_2(VAR_3->chan, VAR_3->rx_msg);

 return VAR_0;
}
