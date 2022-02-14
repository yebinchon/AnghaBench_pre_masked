
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_am335x_xbar_map {int dma_line; int mux_val; } ;
struct ti_am335x_xbar_data {int iomem; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,int ) ;
 struct ti_am335x_xbar_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ti_am335x_xbar_map*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, void *VAR_1)
{
 struct ti_am335x_xbar_data *VAR_2 = FUNC_1(VAR_0);
 struct ti_am335x_xbar_map *VAR_3 = VAR_1;

 FUNC_0(VAR_0, "Unmapping XBAR event %u on channel %u\n",
  VAR_3->mux_val, VAR_3->dma_line);

 FUNC_3(VAR_2->iomem, VAR_3->dma_line, 0);
 FUNC_2(VAR_3);
}
