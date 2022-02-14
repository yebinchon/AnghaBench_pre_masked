
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {int dummy; } ;
struct altera_mbox {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct altera_mbox*,int) ;
 struct altera_mbox* FUNC_1 (struct mbox_chan*) ;
 int FUNC_2 (struct mbox_chan*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct mbox_chan *VAR_3 = (struct mbox_chan *)VAR_2;
 struct altera_mbox *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4, 0);
 FUNC_2(VAR_3, 0);

 return VAR_0;
}
