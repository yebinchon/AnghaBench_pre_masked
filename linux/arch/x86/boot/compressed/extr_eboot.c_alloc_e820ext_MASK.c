
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct setup_data {int dummy; } ;
struct e820_entry {int dummy; } ;
typedef scalar_t__ efi_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,...) ;
 int VAR_3 ;

__attribute__((used)) static efi_status_t FUNC_1(u32 VAR_4, struct setup_data **VAR_5,
      u32 *VAR_6)
{
 efi_status_t VAR_7;
 unsigned long VAR_8;

 VAR_8 = sizeof(struct setup_data) +
  sizeof(struct e820_entry) * VAR_4;

 if (*VAR_5) {
  FUNC_0(VAR_3, *VAR_5);
  *VAR_5 = ((void*)0);
  *VAR_6 = 0;
 }

 VAR_7 = FUNC_0(VAR_2, VAR_0,
    VAR_8, (void **)VAR_5);
 if (VAR_7 == VAR_1)
  *VAR_6 = VAR_8;

 return VAR_7;
}
