
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_acc_sgl_pool {int sgl_dma; int sgl; int size; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (struct hisi_acc_sgl_pool*,int ,int) ;

void FUNC_2(struct device *VAR_0, struct hisi_acc_sgl_pool *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->size, VAR_1->sgl, VAR_1->sgl_dma);
 FUNC_1(VAR_1, 0, sizeof(struct hisi_acc_sgl_pool));
}
