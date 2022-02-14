
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9dmac_chan {int tasklet; int chan; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct txx9dmac_chan*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct txx9dmac_chan *VAR_4 = VAR_3;

 FUNC_2(FUNC_0(&VAR_4->chan), "interrupt: status=%#x\n",
   FUNC_1(VAR_4, VAR_0));

 FUNC_4(&VAR_4->tasklet);




 FUNC_3(VAR_2);

 return VAR_1;
}
