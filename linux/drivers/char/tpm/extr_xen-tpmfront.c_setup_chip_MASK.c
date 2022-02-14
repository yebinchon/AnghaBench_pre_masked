
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_private {struct tpm_chip* chip; int read_queue; } ;
struct tpm_chip {int dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct tpm_chip*) ;
 int FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (int *,struct tpm_private*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 struct tpm_chip* FUNC_4 (struct device*,int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, struct tpm_private *VAR_2)
{
 struct tpm_chip *VAR_3;

 VAR_3 = FUNC_4(VAR_1, &VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_3(&VAR_2->read_queue);

 VAR_2->chip = VAR_3;
 FUNC_2(&VAR_3->dev, VAR_2);

 return 0;
}
