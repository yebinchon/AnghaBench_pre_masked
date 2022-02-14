
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;
struct st33zp24_dev {int irq; int read_queue; int intrs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct st33zp24_dev* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct tpm_chip *VAR_3 = VAR_2;
 struct st33zp24_dev *VAR_4 = FUNC_0(&VAR_3->dev);

 VAR_4->intrs++;
 FUNC_2(&VAR_4->read_queue);
 FUNC_1(VAR_4->irq);

 return VAR_0;
}
