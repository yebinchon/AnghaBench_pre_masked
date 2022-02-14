
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_smb_hc {int query_bit; int ec; } ;
struct acpi_device {int * driver_data; } ;


 int VAR_0 ;
 struct acpi_smb_hc* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct acpi_smb_hc*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_1)
{
 struct acpi_smb_hc *VAR_2;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_2->ec, VAR_2->query_bit);
 FUNC_2();
 FUNC_3(VAR_2);
 VAR_1->driver_data = ((void*)0);
 return 0;
}
