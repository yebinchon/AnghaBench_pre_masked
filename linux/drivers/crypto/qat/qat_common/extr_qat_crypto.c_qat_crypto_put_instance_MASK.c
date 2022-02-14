
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qat_crypto_instance {int accel_dev; int refctr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct qat_crypto_instance *VAR_0)
{
 FUNC_1(&VAR_0->refctr);
 FUNC_0(VAR_0->accel_dev);
}
