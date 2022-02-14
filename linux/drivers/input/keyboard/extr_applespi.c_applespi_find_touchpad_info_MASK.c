
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct applespi_tp_info {int dummy; } ;
struct applespi_tp_model_info {scalar_t__ model; struct applespi_tp_info const tp_info; } ;


 struct applespi_tp_model_info* VAR_0 ;

__attribute__((used)) static const struct applespi_tp_info *FUNC_0(u8 VAR_1)
{
 const struct applespi_tp_model_info *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->model; VAR_2++) {
  if (VAR_2->model == VAR_1)
   return &VAR_2->tp_info;
 }

 return ((void*)0);
}
