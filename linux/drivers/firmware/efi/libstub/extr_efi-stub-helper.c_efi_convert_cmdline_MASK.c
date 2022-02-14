
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
typedef char u16 ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
struct TYPE_3__ {int load_options_size; char* load_options; } ;
typedef TYPE_1__ efi_loaded_image_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int ,unsigned long*,int ) ;
 char* FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (int ) ;

char *FUNC_3(efi_system_table_t *VAR_2,
     efi_loaded_image_t *VAR_3,
     int *VAR_4)
{
 const u16 *VAR_5;
 u8 *VAR_6 = ((void*)0);
 unsigned long VAR_7 = 0;
 int VAR_8 = VAR_3->load_options_size / 2;
 const u16 *VAR_9 = VAR_3->load_options;
 int VAR_10 = 0;
 int VAR_11 = 0;
 efi_status_t VAR_12;
 u16 VAR_13 = 0;

 if (VAR_9) {
  VAR_5 = VAR_9;
  while (*VAR_5 && *VAR_5 != '\n'
         && VAR_11 < VAR_8) {
   VAR_10 += FUNC_2(*VAR_5++);
   VAR_11++;
  }
 }

 if (!VAR_11) {

  VAR_9 = &VAR_13;
 }

 VAR_10++;

 VAR_12 = FUNC_0(VAR_2, VAR_10, 0,
    &VAR_7, VAR_1);
 if (VAR_12 != VAR_0)
  return ((void*)0);

 VAR_6 = (u8 *)VAR_7;
 VAR_5 = (const u16 *)VAR_9;

 VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_11);
 *VAR_6 = '\0';

 *VAR_4 = VAR_10;
 return (char *)VAR_7;
}
