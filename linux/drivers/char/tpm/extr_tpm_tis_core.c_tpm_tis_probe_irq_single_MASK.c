
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tpm_tis_data {int irq; int irq_tested; int locality; } ;
struct TYPE_4__ {int parent; } ;
struct tpm_chip {int flags; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct tpm_tis_data* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int,int ,int,int ,struct tpm_chip*) ;
 int VAR_2 ;
 int FUNC_7 (struct tpm_chip*) ;
 int FUNC_8 (struct tpm_tis_data*,int ,int*) ;
 int FUNC_9 (struct tpm_tis_data*,int,int*) ;
 int FUNC_10 (struct tpm_tis_data*,int ,int) ;
 int FUNC_11 (struct tpm_tis_data*,int,int) ;

__attribute__((used)) static int FUNC_12(struct tpm_chip *VAR_3, u32 VAR_4,
        int VAR_5, int VAR_6)
{
 struct tpm_tis_data *VAR_7 = FUNC_3(&VAR_3->dev);
 u8 VAR_8;
 int VAR_9;
 u32 VAR_10;

 if (FUNC_6(VAR_3->dev.parent, VAR_6, VAR_2, VAR_5,
        FUNC_5(&VAR_3->dev), VAR_3) != 0) {
  FUNC_4(&VAR_3->dev, "Unable to request irq: %d for probe\n",
    VAR_6);
  return -1;
 }
 VAR_7->irq = VAR_6;

 VAR_9 = FUNC_9(VAR_7, FUNC_2(VAR_7->locality),
      &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_11(VAR_7, FUNC_2(VAR_7->locality), VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_8(VAR_7, FUNC_1(VAR_7->locality), &VAR_10);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_10(VAR_7, FUNC_1(VAR_7->locality), VAR_10);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_10(VAR_7, FUNC_0(VAR_7->locality),
        VAR_4 | VAR_1);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->irq_tested = 0;




 VAR_9 = FUNC_7(VAR_3);
 if (VAR_9 < 0)
  return VAR_9;




 if (!(VAR_3->flags & VAR_0)) {
  VAR_9 = FUNC_11(VAR_7, VAR_8,
    FUNC_2(VAR_7->locality));
  if (VAR_9 < 0)
   return VAR_9;

  return 1;
 }

 return 0;
}
