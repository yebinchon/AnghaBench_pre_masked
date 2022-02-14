
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,struct resource*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_4(acpi_handle VAR_3)
{
 acpi_status VAR_4;
 struct resource VAR_5;


 if (!(VAR_2 && FUNC_2(VAR_3, VAR_0)))
  return 0;





 VAR_4 = FUNC_3(VAR_3, VAR_0,
         VAR_1, &VAR_5);
 if (FUNC_0(VAR_4) || VAR_5.start != VAR_2)
  return 0;

 FUNC_1(VAR_3, "The UART device @%pa in SPCR table will be hidden\n",
    &VAR_5.start);

 return 1;
}
