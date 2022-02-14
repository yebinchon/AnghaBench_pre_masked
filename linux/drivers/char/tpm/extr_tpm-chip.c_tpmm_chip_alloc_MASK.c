
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_class_ops {int dummy; } ;
struct tpm_chip {int dev; } ;
struct device {int dummy; } ;


 struct tpm_chip* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (struct device*,struct tpm_chip*) ;
 int FUNC_3 (struct device*,void (*) (void*),int *) ;
 scalar_t__ VAR_0 ;
 struct tpm_chip* FUNC_4 (struct device*,struct tpm_class_ops const*) ;

struct tpm_chip *FUNC_5(struct device *VAR_1,
     const struct tpm_class_ops *VAR_2)
{
 struct tpm_chip *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (FUNC_1(VAR_3))
  return VAR_3;

 VAR_4 = FUNC_3(VAR_1,
          (void (*)(void *)) VAR_0,
          &VAR_3->dev);
 if (VAR_4)
  return FUNC_0(VAR_4);

 FUNC_2(VAR_1, VAR_3);

 return VAR_3;
}
