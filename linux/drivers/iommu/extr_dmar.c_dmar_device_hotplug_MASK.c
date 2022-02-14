
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int * acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,int ,int *,int *,int **) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(acpi_handle VAR_6, bool VAR_7)
{
 int VAR_8;
 acpi_handle VAR_9 = ((void*)0);
 acpi_status VAR_10;

 if (!FUNC_5())
  return 0;

 if (FUNC_2(VAR_6, VAR_2)) {
  VAR_9 = VAR_6;
 } else {
  VAR_10 = FUNC_1(VAR_0, VAR_6,
          VAR_1,
          VAR_4,
          ((void*)0), ((void*)0), &VAR_9);
  if (FUNC_0(VAR_10)) {
   FUNC_7("Failed to locate _DSM method.\n");
   return -VAR_3;
  }
 }
 if (VAR_9 == ((void*)0))
  return 0;

 FUNC_6(&VAR_5);
 if (VAR_7)
  VAR_8 = FUNC_3(VAR_9);
 else
  VAR_8 = FUNC_4(VAR_9);
 FUNC_8(&VAR_5);

 return VAR_8;
}
