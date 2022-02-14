
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct acpi_ec_query {int work; int handler; int transaction; } ;
struct acpi_ec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct acpi_ec_query* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct acpi_ec_query*) ;
 int FUNC_2 (struct acpi_ec*,scalar_t__) ;
 int FUNC_3 (struct acpi_ec*,int *) ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct acpi_ec *VAR_4, u8 *VAR_5)
{
 u8 VAR_6 = 0;
 int VAR_7;
 struct acpi_ec_query *VAR_8;

 VAR_8 = FUNC_0(&VAR_6);
 if (!VAR_8)
  return -VAR_2;






 VAR_7 = FUNC_3(VAR_4, &VAR_8->transaction);
 if (!VAR_6)
  VAR_7 = -VAR_1;
 if (VAR_7)
  goto err_exit;

 VAR_8->handler = FUNC_2(VAR_4, VAR_6);
 if (!VAR_8->handler) {
  VAR_7 = -VAR_1;
  goto err_exit;
 }
 FUNC_4("Query(0x%02x) scheduled", VAR_6);
 if (!FUNC_5(VAR_3, &VAR_8->work)) {
  FUNC_4("Query(0x%02x) overlapped", VAR_6);
  VAR_7 = -VAR_0;
 }

err_exit:
 if (VAR_7)
  FUNC_1(VAR_8);
 if (VAR_5)
  *VAR_5 = VAR_6;
 return VAR_7;
}
