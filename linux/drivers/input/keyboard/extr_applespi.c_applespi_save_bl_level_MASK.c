
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct applespi_data {TYPE_1__* spi; } ;
typedef int efi_guid_t ;
typedef int efi_data ;
typedef int efi_char16_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int,int,unsigned long,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct applespi_data *VAR_5,
       unsigned int VAR_6)
{
 efi_guid_t VAR_7;
 u32 VAR_8;
 unsigned long VAR_9;
 u16 VAR_10;
 int VAR_11;


 VAR_7 = VAR_0;
 VAR_10 = (u16)VAR_6;
 VAR_9 = sizeof(VAR_10);
 VAR_8 = VAR_3 | VAR_2 |
     VAR_4;

 VAR_11 = FUNC_1((efi_char16_t *)VAR_1, VAR_7,
        VAR_8, 1, VAR_9, &VAR_10);
 if (VAR_11)
  FUNC_0(&VAR_5->spi->dev,
    "Error saving backlight level to EFI vars: %d\n", VAR_11);
}
