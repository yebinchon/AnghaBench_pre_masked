
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {union acpi_operand_object* handler; union acpi_operand_object* next; int space_id; int node; } ;
struct TYPE_3__ {union acpi_operand_object* region_list; } ;
union acpi_operand_object {TYPE_2__ region; TYPE_1__ address_space; } ;
typedef int u8 ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (union acpi_operand_object*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

acpi_status
FUNC_6(union acpi_operand_object *VAR_4,
        union acpi_operand_object *VAR_5,
        u8 VAR_6)
{

 FUNC_1(VAR_3);



 if (VAR_5->region.handler) {
  FUNC_5(VAR_1);
 }

 FUNC_0((VAR_0,
     "Adding Region [%4.4s] %p to address handler %p [%s]\n",
     FUNC_3(VAR_5->region.node),
     VAR_5, VAR_4,
     FUNC_4(VAR_5->region.
        space_id)));



 VAR_5->region.next = VAR_4->address_space.region_list;
 VAR_4->address_space.region_list = VAR_5;
 VAR_5->region.handler = VAR_4;
 FUNC_2(VAR_4);

 FUNC_5(VAR_2);
}
