
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_tis_data {int manufacturer_id; } ;
struct tpm_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct tpm_tis_data* FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct tpm_chip *VAR_2, u8 VAR_3)
{
 struct tpm_tis_data *VAR_4 = FUNC_0(&VAR_2->dev);

 switch (VAR_4->manufacturer_id) {
 case 128:
  return ((VAR_3 == VAR_1) ||
   (VAR_3 == (VAR_1 | VAR_0)));
 case 129:
  return (VAR_3 == (VAR_1 | VAR_0));
 default:
  return (VAR_3 == VAR_0);
 }
}
