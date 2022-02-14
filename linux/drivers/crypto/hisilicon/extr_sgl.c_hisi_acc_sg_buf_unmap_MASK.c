
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct hisi_acc_hw_sgl {scalar_t__ entry_length_in_sgl; scalar_t__ entry_sum_in_sgl; scalar_t__ entry_sum_in_chain; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct scatterlist*,int ,int ) ;
 int FUNC_1 (struct scatterlist*) ;

void FUNC_2(struct device *VAR_1, struct scatterlist *VAR_2,
      struct hisi_acc_hw_sgl *VAR_3)
{
 FUNC_0(VAR_1, VAR_2, FUNC_1(VAR_2), VAR_0);

 VAR_3->entry_sum_in_chain = 0;
 VAR_3->entry_sum_in_sgl = 0;
 VAR_3->entry_length_in_sgl = 0;
}
