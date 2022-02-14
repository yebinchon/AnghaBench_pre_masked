
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_desc {int flags; scalar_t__ address; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct acpi_table_desc*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5(struct acpi_table_desc *VAR_4)
{

 FUNC_1(VAR_3);



 if (!VAR_4->address) {
  VAR_2;
 }

 FUNC_4(VAR_4);

 if ((VAR_4->flags & VAR_1) ==
     VAR_0) {
  FUNC_0(FUNC_2(VAR_4->address));
 }

 VAR_4->address = FUNC_3(((void*)0));
 VAR_2;
}
