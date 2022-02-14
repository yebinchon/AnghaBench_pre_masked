
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct efi_simple_text_output_protocol {int (* output_string ) (struct efi_simple_text_output_protocol*,int *) ;} ;
struct TYPE_3__ {scalar_t__ con_out; } ;
typedef TYPE_1__ efi_system_table_t ;
typedef int efi_char16_t ;


 int FUNC_0 (struct efi_simple_text_output_protocol*,int *) ;

void FUNC_1(efi_system_table_t *VAR_0,
         efi_char16_t *VAR_1)
{
 struct efi_simple_text_output_protocol *VAR_2;

 VAR_2 = (struct efi_simple_text_output_protocol *)VAR_0->con_out;
 VAR_2->output_string(VAR_2, VAR_1);
}
