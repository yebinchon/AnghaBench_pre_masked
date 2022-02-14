
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
struct tpm_private {int dummy; } ;
struct tpm_chip {int dev; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct tpm_private*) ;
 int FUNC_3 (struct tpm_chip*) ;

__attribute__((used)) static int FUNC_4(struct xenbus_device *VAR_0)
{
 struct tpm_chip *VAR_1 = FUNC_0(&VAR_0->dev);
 struct tpm_private *VAR_2 = FUNC_0(&VAR_1->dev);
 FUNC_3(VAR_1);
 FUNC_2(VAR_2);
 FUNC_1(&VAR_1->dev, ((void*)0));
 return 0;
}
