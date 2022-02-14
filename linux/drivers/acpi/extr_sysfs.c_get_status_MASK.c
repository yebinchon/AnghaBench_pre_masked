
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int acpi_status ;
typedef int acpi_handle ;
typedef int acpi_event_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int ,scalar_t__,int *) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_5(u32 VAR_7, acpi_event_status *VAR_8,
        acpi_handle *VAR_9)
{
 acpi_status VAR_10;

 if (VAR_7 >= VAR_6 + VAR_0)
  return -VAR_3;

 if (VAR_7 < VAR_6) {
  VAR_10 = FUNC_3(VAR_7, VAR_9);
  if (FUNC_1(VAR_10)) {
   FUNC_0((VAR_1, VAR_2,
     "Invalid GPE 0x%x", VAR_7));
   return -VAR_5;
  }
  VAR_10 = FUNC_4(*VAR_9, VAR_7, VAR_8);
 } else {
  VAR_10 = FUNC_2(VAR_7 - VAR_6, VAR_8);
 }
 if (FUNC_1(VAR_10))
  return -VAR_4;

 return 0;
}
