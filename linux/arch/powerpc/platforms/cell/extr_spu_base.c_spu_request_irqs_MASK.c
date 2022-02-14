
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu {int number; scalar_t__* irqs; int irq_c2; int irq_c1; int irq_c0; } ;


 int FUNC_0 (scalar_t__,struct spu*) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,struct spu*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct spu *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->irqs[0]) {
  FUNC_2(VAR_3->irq_c0, sizeof (VAR_3->irq_c0), "spe%02d.0",
    VAR_3->number);
  VAR_4 = FUNC_1(VAR_3->irqs[0], VAR_0,
      0, VAR_3->irq_c0, VAR_3);
  if (VAR_4)
   goto bail0;
 }
 if (VAR_3->irqs[1]) {
  FUNC_2(VAR_3->irq_c1, sizeof (VAR_3->irq_c1), "spe%02d.1",
    VAR_3->number);
  VAR_4 = FUNC_1(VAR_3->irqs[1], VAR_1,
      0, VAR_3->irq_c1, VAR_3);
  if (VAR_4)
   goto bail1;
 }
 if (VAR_3->irqs[2]) {
  FUNC_2(VAR_3->irq_c2, sizeof (VAR_3->irq_c2), "spe%02d.2",
    VAR_3->number);
  VAR_4 = FUNC_1(VAR_3->irqs[2], VAR_2,
      0, VAR_3->irq_c2, VAR_3);
  if (VAR_4)
   goto bail2;
 }
 return 0;

bail2:
 if (VAR_3->irqs[1])
  FUNC_0(VAR_3->irqs[1], VAR_3);
bail1:
 if (VAR_3->irqs[0])
  FUNC_0(VAR_3->irqs[0], VAR_3);
bail0:
 return VAR_4;
}
