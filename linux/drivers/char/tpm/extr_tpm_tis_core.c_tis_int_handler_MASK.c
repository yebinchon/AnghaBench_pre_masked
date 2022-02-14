
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_tis_data {int irq_tested; int locality; int int_queue; int read_queue; } ;
struct tpm_chip {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tpm_chip*,int) ;
 struct tpm_tis_data* FUNC_2 (int *) ;
 int FUNC_3 (struct tpm_tis_data*,int ,int*) ;
 int FUNC_4 (struct tpm_tis_data*,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct tpm_chip *VAR_8 = VAR_7;
 struct tpm_tis_data *VAR_9 = FUNC_2(&VAR_8->dev);
 u32 VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_3(VAR_9, FUNC_0(VAR_9->locality), &VAR_10);
 if (VAR_12 < 0)
  return VAR_1;

 if (VAR_10 == 0)
  return VAR_1;

 VAR_9->irq_tested = 1;
 if (VAR_10 & VAR_3)
  FUNC_5(&VAR_9->read_queue);
 if (VAR_10 & VAR_4)
  for (VAR_11 = 0; VAR_11 < 5; VAR_11++)
   if (FUNC_1(VAR_8, VAR_11))
    break;
 if (VAR_10 &
     (VAR_4 | VAR_5 |
      VAR_2))
  FUNC_5(&VAR_9->int_queue);


 VAR_12 = FUNC_4(VAR_9, FUNC_0(VAR_9->locality), VAR_10);
 if (VAR_12 < 0)
  return VAR_1;

 FUNC_3(VAR_9, FUNC_0(VAR_9->locality), &VAR_10);
 return VAR_0;
}
