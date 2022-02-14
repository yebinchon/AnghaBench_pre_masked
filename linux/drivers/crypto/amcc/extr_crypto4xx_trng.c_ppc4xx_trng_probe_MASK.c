
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {unsigned long priv; int data_read; int data_present; int name; } ;
struct device_node {int dummy; } ;
struct crypto4xx_device {int * trng_base; } ;
struct crypto4xx_core_device {struct hwrng* trng; int device; struct crypto4xx_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,struct hwrng*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hwrng*) ;
 struct hwrng* FUNC_4 (int,int ) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int *,int ) ;
 int * FUNC_7 (struct device_node*,int ) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct crypto4xx_device*,int) ;
 int VAR_6 ;

void FUNC_11(struct crypto4xx_core_device *VAR_7)
{
 struct crypto4xx_device *VAR_8 = VAR_7->dev;
 struct device_node *VAR_9 = ((void*)0);
 struct hwrng *VAR_10 = ((void*)0);
 int VAR_11;


 VAR_9 = FUNC_6(((void*)0), VAR_6);
 if (!VAR_9 || !FUNC_5(VAR_9)) {
  FUNC_8(VAR_9);
  return;
 }

 VAR_8->trng_base = FUNC_7(VAR_9, 0);
 FUNC_8(VAR_9);
 if (!VAR_8->trng_base)
  goto err_out;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_0);
 if (!VAR_10)
  goto err_out;

 VAR_10->name = VAR_1;
 VAR_10->data_present = VAR_4;
 VAR_10->data_read = VAR_5;
 VAR_10->priv = (unsigned long) VAR_8;
 VAR_7->trng = VAR_10;
 FUNC_10(VAR_8, 1);
 FUNC_9(VAR_8->trng_base + VAR_2, VAR_3);
 VAR_11 = FUNC_1(VAR_7->device, VAR_7->trng);
 if (VAR_11) {
  FUNC_10(VAR_8, 0);
  FUNC_0(VAR_7->device, "failed to register hwrng (%d).\n",
   VAR_11);
  goto err_out;
 }
 return;

err_out:
 FUNC_2(VAR_8->trng_base);
 FUNC_3(VAR_10);
 VAR_8->trng_base = ((void*)0);
 VAR_7->trng = ((void*)0);
}
