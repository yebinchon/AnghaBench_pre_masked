
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsi_data {TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ model; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dsi_data*,int ) ;
 int FUNC_1 (struct dsi_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct dsi_data *VAR_2)
{
 if (VAR_2->data->model == VAR_0)
  FUNC_0(VAR_2, 0);
 else if (VAR_2->data->model == VAR_1)
  FUNC_1(VAR_2, 0);
}
