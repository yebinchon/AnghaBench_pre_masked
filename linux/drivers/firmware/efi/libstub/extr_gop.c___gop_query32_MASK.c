
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct efi_graphics_output_protocol_mode_32 {int frame_buffer_base; int mode; } ;
struct efi_graphics_output_protocol_32 {unsigned long mode; scalar_t__ query_mode; } ;
struct efi_graphics_output_mode_info {int dummy; } ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef void* efi_graphics_output_protocol_query_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*,void*,int ,unsigned long*,struct efi_graphics_output_mode_info**) ;

__attribute__((used)) static efi_status_t
FUNC_1(efi_system_table_t *VAR_1,
       struct efi_graphics_output_protocol_32 *VAR_2,
       struct efi_graphics_output_mode_info **VAR_3,
       unsigned long *VAR_4, u64 *VAR_5)
{
 struct efi_graphics_output_protocol_mode_32 *VAR_6;
 efi_graphics_output_protocol_query_mode VAR_7;
 efi_status_t VAR_8;
 unsigned long VAR_9;

 VAR_9 = VAR_2->mode;
 VAR_6 = (struct efi_graphics_output_protocol_mode_32 *)VAR_9;
 VAR_7 = (void *)(unsigned long)VAR_2->query_mode;

 VAR_8 = FUNC_0(VAR_7, (void *)VAR_2, VAR_6->mode, VAR_4,
      VAR_3);
 if (VAR_8 != VAR_0)
  return VAR_8;

 *VAR_5 = VAR_6->frame_buffer_base;
 return VAR_8;
}
