
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonypi_irq_list {int bits; scalar_t__ irq; } ;
struct sonypi_device {int bits; scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct sonypi_device *VAR_3,
          const struct sonypi_irq_list *VAR_4)
{
 while (VAR_4->irq) {

  if (!FUNC_0(VAR_4->irq, VAR_2,
     VAR_1, "sonypi", VAR_2)) {
   VAR_3->irq = VAR_4->irq;
   VAR_3->bits = VAR_4->bits;
   return 0;
  }
  VAR_4++;
 }

 return -VAR_0;
}
