
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ value; } ;
union acpi_object {TYPE_3__ integer; void* type; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_namespace_node {scalar_t__ type; TYPE_2__* object; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_4__ {scalar_t__ space_id; } ;
struct TYPE_5__ {TYPE_1__ region; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,struct acpi_object_list*,int *) ;
 int FUNC_3 (struct acpi_namespace_node*,int ,int *) ;
 struct acpi_namespace_node* FUNC_4 (struct acpi_namespace_node*,struct acpi_namespace_node*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_7(struct acpi_namespace_node *VAR_8)
{
 acpi_handle VAR_9;
 struct acpi_namespace_node *VAR_10;
 acpi_status VAR_11;
 struct acpi_object_list VAR_12;
 union acpi_object VAR_13[2];

 FUNC_1(VAR_6);

 if (!VAR_8) {
  VAR_7;
 }



 (void)FUNC_6(VAR_1);



 VAR_11 = FUNC_3(VAR_8, VAR_5, &VAR_9);
 if (FUNC_0(VAR_11)) {
  goto exit;
 }
 VAR_10 = FUNC_4(VAR_8, ((void*)0));
 while (VAR_10) {
  if ((VAR_10->type == VAR_4) &&
      (VAR_10->object) &&
      (VAR_10->object->region.space_id == VAR_0)) {
   goto exit;
  }

  VAR_10 = FUNC_4(VAR_8, VAR_10);
 }



 VAR_12.count = 2;
 VAR_12.pointer = VAR_13;
 VAR_13[0].type = VAR_3;
 VAR_13[0].integer.value = VAR_0;
 VAR_13[1].type = VAR_3;
 VAR_13[1].integer.value = VAR_2;

 VAR_11 = FUNC_2(VAR_9, ((void*)0), &VAR_12, ((void*)0));

exit:


 VAR_11 = FUNC_5(VAR_1);
 VAR_7;
}
