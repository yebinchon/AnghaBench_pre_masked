
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hdmi_context {TYPE_1__* drv_data; } ;
struct TYPE_2__ {size_t type; } ;


 int VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static inline u32 FUNC_0(struct hdmi_context *VAR_2, u32 VAR_3)
{
 if ((VAR_3 & 0xffff0000) == VAR_0)
  return VAR_1[VAR_3 & 0xffff][VAR_2->drv_data->type];
 return VAR_3;
}
