
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsi_data {TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ model; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dsi_data*,unsigned int) ;
 int FUNC_1 (struct dsi_data*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct dsi_data *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->data->model == VAR_0)
  return FUNC_0(VAR_2, VAR_3);
 if (VAR_2->data->model == VAR_1)
  return FUNC_1(VAR_2, VAR_3);
 return 0;
}
