
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_buffer {scalar_t__ length; int pointer; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_6 (struct acpi_buffer*,scalar_t__) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;

acpi_status
FUNC_8(struct acpi_buffer *VAR_3,
        struct acpi_buffer *VAR_4)
{
 acpi_status VAR_5;
 acpi_size VAR_6 = 0;

 FUNC_2(VAR_2);



 FUNC_0((VAR_0, "ResourceList Buffer = %p\n",
     VAR_3->pointer));



 VAR_5 =
     FUNC_5(VAR_3->pointer,
       VAR_3->length, &VAR_6);

 FUNC_0((VAR_0, "AmlSizeNeeded=%X, %s\n",
     (u32)VAR_6, FUNC_3(VAR_5)));
 if (FUNC_1(VAR_5)) {
  FUNC_7(VAR_5);
 }



 VAR_5 = FUNC_6(VAR_4, VAR_6);
 if (FUNC_1(VAR_5)) {
  FUNC_7(VAR_5);
 }



 VAR_5 = FUNC_4(VAR_3->pointer,
        VAR_6,
        VAR_4->pointer);
 if (FUNC_1(VAR_5)) {
  FUNC_7(VAR_5);
 }

 FUNC_0((VAR_0, "OutputBuffer %p Length %X\n",
     VAR_4->pointer, (u32) VAR_4->length));
 FUNC_7(VAR_1);
}
