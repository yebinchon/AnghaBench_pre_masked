
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct ath9k_platform_data {char const* eeprom_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct ath9k_platform_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 char* FUNC_3 (struct device*,int ,int ) ;
 int FUNC_4 (char*,int ,char*,int ) ;

__attribute__((used)) static const char *FUNC_5(struct pci_dev *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct ath9k_platform_data *VAR_4;
 char *VAR_5;


 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 && VAR_4->eeprom_name)
  return VAR_4->eeprom_name;

 FUNC_0(VAR_3, "using auto-generated eeprom filename\n");

 VAR_5 = FUNC_3(VAR_3, VAR_0, VAR_1);
 if (!VAR_5)
  return ((void*)0);


 FUNC_4(VAR_5, VAR_0, "ath9k-eeprom-pci-%s.bin",
    FUNC_2(VAR_3));

 return VAR_5;
}
