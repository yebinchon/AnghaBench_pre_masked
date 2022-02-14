
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ target_id; } ;
struct TYPE_5__ {TYPE_1__ v; } ;
struct TYPE_6__ {TYPE_2__ ld; } ;
struct mfi_ld_config {TYPE_3__ properties; } ;
struct mfi_config_data {int array_count; int array_size; int log_drv_count; int log_drv_size; scalar_t__ array; } ;



__attribute__((used)) static struct mfi_ld_config *
FUNC_0(struct mfi_config_data *VAR_0, uint8_t VAR_1)
{
 struct mfi_ld_config *VAR_2;
 char *VAR_3;
 int VAR_4;

 VAR_3 = (char *)VAR_0->array + VAR_0->array_count * VAR_0->array_size;
 for (VAR_4 = 0; VAR_4 < VAR_0->log_drv_count; VAR_4++) {
  VAR_2 = (struct mfi_ld_config *)VAR_3;
  if (VAR_2->properties.ld.v.target_id == VAR_1)
   return (VAR_2);
  VAR_3 += VAR_0->log_drv_size;
 }

 return (((void*)0));
}
