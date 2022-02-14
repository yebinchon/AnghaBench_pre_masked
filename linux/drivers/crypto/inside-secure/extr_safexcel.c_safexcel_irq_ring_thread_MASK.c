
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct safexcel_ring_irq_data {int ring; struct safexcel_crypto_priv* priv; } ;
struct safexcel_crypto_priv {TYPE_2__* ring; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int work; } ;
struct TYPE_4__ {TYPE_1__ work_data; int workqueue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct safexcel_crypto_priv*,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct safexcel_ring_irq_data *VAR_3 = VAR_2;
 struct safexcel_crypto_priv *VAR_4 = VAR_3->priv;
 int VAR_5 = VAR_3->ring;

 FUNC_1(VAR_4, VAR_5);

 FUNC_0(VAR_4->ring[VAR_5].workqueue,
     &VAR_4->ring[VAR_5].work_data.work);

 return VAR_0;
}
