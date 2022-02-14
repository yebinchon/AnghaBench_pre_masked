
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device_id {int dummy; } ;
struct xenbus_device {int dev; } ;
struct tpm_private {int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_private*) ;
 struct tpm_private* FUNC_1 (int,int ) ;
 int FUNC_2 (struct tpm_private*) ;
 int FUNC_3 (int *,struct tpm_private*) ;
 int FUNC_4 (struct xenbus_device*,struct tpm_private*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xenbus_device*,int,char*) ;

__attribute__((used)) static int FUNC_8(struct xenbus_device *VAR_2,
  const struct xenbus_device_id *VAR_3)
{
 struct tpm_private *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  FUNC_7(VAR_2, -VAR_0, "allocating priv structure");
  return -VAR_0;
 }

 VAR_5 = FUNC_3(&VAR_2->dev, VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_4);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return VAR_5;
 }

 FUNC_6(VAR_4->chip);

 return FUNC_5(VAR_4->chip);
}
