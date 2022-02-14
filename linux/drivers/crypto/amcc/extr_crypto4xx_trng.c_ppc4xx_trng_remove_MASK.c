
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto4xx_device {int trng_base; } ;
struct crypto4xx_core_device {scalar_t__ trng; int device; struct crypto4xx_device* dev; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct crypto4xx_device*,int) ;

void FUNC_4(struct crypto4xx_core_device *VAR_0)
{
 if (VAR_0 && VAR_0->trng) {
  struct crypto4xx_device *VAR_1 = VAR_0->dev;

  FUNC_0(VAR_0->device, VAR_0->trng);
  FUNC_3(VAR_1, 0);
  FUNC_1(VAR_1->trng_base);
  FUNC_2(VAR_0->trng);
 }
}
