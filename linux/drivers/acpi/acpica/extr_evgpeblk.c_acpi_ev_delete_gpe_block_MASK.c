
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acpi_gpe_block_info {struct acpi_gpe_block_info* event_info; struct acpi_gpe_block_info* register_info; scalar_t__ gpe_count; TYPE_2__* previous; TYPE_1__* next; TYPE_3__* xrupt_block; } ;
typedef int acpi_status ;
typedef int acpi_cpu_flags ;
struct TYPE_7__ {TYPE_1__* gpe_block_list_head; } ;
struct TYPE_6__ {TYPE_1__* next; } ;
struct TYPE_5__ {TYPE_2__* previous; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_gpe_block_info*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*,struct acpi_gpe_block_info*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(struct acpi_gpe_block_info *VAR_4)
{
 acpi_status VAR_5;
 acpi_cpu_flags VAR_6;

 FUNC_2(VAR_3);

 VAR_5 = FUNC_7(VAR_0);
 if (FUNC_0(VAR_5)) {
  FUNC_9(VAR_5);
 }



 VAR_5 =
     FUNC_4(VAR_4->xrupt_block, VAR_4, ((void*)0));

 if (!VAR_4->previous && !VAR_4->next) {



  VAR_5 = FUNC_3(VAR_4->xrupt_block);
  if (FUNC_0(VAR_5)) {
   goto unlock_and_exit;
  }
 } else {


  VAR_6 = FUNC_5(VAR_2);
  if (VAR_4->previous) {
   VAR_4->previous->next = VAR_4->next;
  } else {
   VAR_4->xrupt_block->gpe_block_list_head =
       VAR_4->next;
  }

  if (VAR_4->next) {
   VAR_4->next->previous = VAR_4->previous;
  }

  FUNC_6(VAR_2, VAR_6);
 }

 VAR_1 -= VAR_4->gpe_count;



 FUNC_1(VAR_4->register_info);
 FUNC_1(VAR_4->event_info);
 FUNC_1(VAR_4);

unlock_and_exit:
 VAR_5 = FUNC_8(VAR_0);
 FUNC_9(VAR_5);
}
