
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shdma_chan {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,unsigned long,char const*,struct shdma_chan*) ;

int FUNC_1(struct shdma_chan *VAR_2, int VAR_3,
      unsigned long VAR_4, const char *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_2->dev, VAR_3, VAR_0,
         VAR_1, VAR_4, VAR_5, VAR_2);

 VAR_2->irq = VAR_6 < 0 ? VAR_6 : VAR_3;

 return VAR_6;
}
