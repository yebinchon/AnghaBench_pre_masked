
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int efi_char16_t ;
struct TYPE_2__ {int (* set_variable_nonblocking ) (int *,int *,int,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int *,int,int ,int *) ;

void FUNC_1(void)
{
 VAR_4.set_variable_nonblocking((efi_char16_t *)VAR_5,
         &VAR_0,
         VAR_2 |
         VAR_1 |
         VAR_3, 0, ((void*)0));
}
