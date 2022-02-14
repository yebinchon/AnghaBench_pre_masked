
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_dra7_xbar_map {int xbar_out; int xbar_in; } ;
struct ti_dra7_xbar_data {int mutex; int dma_inuse; int safe_val; int iomem; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*,char*,int ,int ) ;
 struct ti_dra7_xbar_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct ti_dra7_xbar_map*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_0, void *VAR_1)
{
 struct ti_dra7_xbar_data *VAR_2 = FUNC_2(VAR_0);
 struct ti_dra7_xbar_map *VAR_3 = VAR_1;

 FUNC_1(VAR_0, "Unmapping XBAR%u (was routed to %d)\n",
  VAR_3->xbar_in, VAR_3->xbar_out);

 FUNC_6(VAR_2->iomem, VAR_3->xbar_out, VAR_2->safe_val);
 FUNC_4(&VAR_2->mutex);
 FUNC_0(VAR_3->xbar_out, VAR_2->dma_inuse);
 FUNC_5(&VAR_2->mutex);
 FUNC_3(VAR_3);
}
