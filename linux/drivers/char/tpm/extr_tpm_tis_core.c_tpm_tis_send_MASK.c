
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_tis_data {int irq_tested; int irq; } ;
struct tpm_chip {int flags; int dev; } ;


 int VAR_0 ;
 struct tpm_tis_data* FUNC_0 (int *) ;
 int FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct tpm_chip*,int *,size_t) ;

__attribute__((used)) static int FUNC_4(struct tpm_chip *VAR_1, u8 *VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5;
 struct tpm_tis_data *VAR_6 = FUNC_0(&VAR_1->dev);

 if (!(VAR_1->flags & VAR_0) || VAR_6->irq_tested)
  return FUNC_3(VAR_1, VAR_2, VAR_3);


 VAR_5 = VAR_6->irq;
 VAR_6->irq = 0;
 VAR_1->flags &= ~VAR_0;
 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 VAR_6->irq = VAR_5;
 VAR_1->flags |= VAR_0;
 if (!VAR_6->irq_tested)
  FUNC_2(1);
 if (!VAR_6->irq_tested)
  FUNC_1(VAR_1);
 VAR_6->irq_tested = 1;
 return VAR_4;
}
