
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {void const* str; int u64_data; int u32_data; int u16_data; int u8_data; } ;
struct TYPE_3__ {void const* str; void const* u64_data; void const* u32_data; void const* u16_data; void const* u8_data; } ;
struct property_entry {int type; TYPE_2__ value; TYPE_1__ pointer; int is_array; } ;
__attribute__((used)) static void
FUNC_0(struct property_entry *VAR_0, const void *VAR_1)
{
 switch (VAR_0->type) {
 case 128:
  if (VAR_0->is_array)
   VAR_0->pointer.u8_data = VAR_1;
  else
   VAR_0->value.u8_data = *((u8 *)VAR_1);
  break;
 case 131:
  if (VAR_0->is_array)
   VAR_0->pointer.u16_data = VAR_1;
  else
   VAR_0->value.u16_data = *((u16 *)VAR_1);
  break;
 case 130:
  if (VAR_0->is_array)
   VAR_0->pointer.u32_data = VAR_1;
  else
   VAR_0->value.u32_data = *((u32 *)VAR_1);
  break;
 case 129:
  if (VAR_0->is_array)
   VAR_0->pointer.u64_data = VAR_1;
  else
   VAR_0->value.u64_data = *((u64 *)VAR_1);
  break;
 case 132:
  if (VAR_0->is_array)
   VAR_0->pointer.str = VAR_1;
  else
   VAR_0->value.str = VAR_1;
  break;
 default:
  break;
 }
}
