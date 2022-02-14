
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dispc_channel; } ;
struct dpi_data {int pixelclock; TYPE_1__ output; scalar_t__ pll; } ;


 int FUNC_0 (struct dpi_data*,int ,unsigned long*,int*,int*) ;
 int FUNC_1 (struct dpi_data*,int ,int ,unsigned long*,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct dpi_data *VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;
 unsigned long VAR_3 = 0;
 int VAR_4 = 0;

 if (VAR_0->pll)
  VAR_4 = FUNC_1(VAR_0, VAR_0->output.dispc_channel,
        VAR_0->pixelclock, &VAR_3, &VAR_1, &VAR_2);
 else
  VAR_4 = FUNC_0(VAR_0, VAR_0->pixelclock, &VAR_3,
    &VAR_1, &VAR_2);
 if (VAR_4)
  return VAR_4;

 return 0;
}
