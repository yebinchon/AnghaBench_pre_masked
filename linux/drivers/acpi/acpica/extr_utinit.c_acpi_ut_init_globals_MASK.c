
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef int acpi_status ;
struct TYPE_8__ {int * handler; } ;
struct TYPE_7__ {scalar_t__ use_count; int thread_id; int * mutex; } ;
struct TYPE_5__ {int integer; } ;
struct TYPE_6__ {int * object; int * peer; int * child; int * parent; int type; int descriptor_type; TYPE_1__ name; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__* VAR_14 ;
 int * VAR_15 ;
 void* VAR_16 ;
 int ** VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 void* VAR_27 ;
 scalar_t__ VAR_28 ;
 int * VAR_29 ;
 void* VAR_30 ;
 int * VAR_31 ;
 TYPE_4__* VAR_32 ;
 int ** VAR_33 ;
 int * VAR_34 ;
 int * VAR_35 ;
 int * VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 TYPE_3__* VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int * VAR_43 ;
 int* VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 int * VAR_47 ;
 TYPE_2__ VAR_48 ;
 int * VAR_49 ;
 void* VAR_50 ;
 void* VAR_51 ;
 int * VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 int VAR_56 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_57 ;

acpi_status FUNC_5(void)
{
 acpi_status VAR_58;
 u32 VAR_59;

 FUNC_2(VAR_57);



 VAR_58 = FUNC_3();
 if (FUNC_1(VAR_58)) {
  FUNC_4(VAR_58);
 }



 for (VAR_59 = 0; VAR_59 < VAR_0; VAR_59++) {
  VAR_17[VAR_59] = ((void*)0);
 }



 for (VAR_59 = 0; VAR_59 < VAR_4; VAR_59++) {
  VAR_39[VAR_59].mutex = ((void*)0);
  VAR_39[VAR_59].thread_id = VAR_2;
  VAR_39[VAR_59].use_count = 0;
 }

 for (VAR_59 = 0; VAR_59 < VAR_5; VAR_59++) {
  VAR_44[VAR_59] = 0;
 }



 VAR_44[VAR_5 - 1] = 0x80000000;



 VAR_54 = 0;
 VAR_55 = 0;
 VAR_53 = 0;

 for (VAR_59 = 0; VAR_59 < VAR_3; VAR_59++) {
  VAR_14[VAR_59] = 0;
 }





 VAR_18 = VAR_11;
 VAR_34 = ((void*)0);
 VAR_33[0] = ((void*)0);
 VAR_33[1] = ((void*)0);
 VAR_13 = 0;

 VAR_26 = ((void*)0);
 VAR_49 = ((void*)0);





 VAR_32[0].handler = ((void*)0);
 VAR_32[1].handler = ((void*)0);
 VAR_24 = ((void*)0);
 VAR_35 = ((void*)0);
 VAR_52 = ((void*)0);
 VAR_36 = ((void*)0);



 VAR_31 = ((void*)0);
 VAR_29 = ((void*)0);
 VAR_27 = VAR_11;
 VAR_28 = 0;
 VAR_30 = VAR_11;



 VAR_15 = ((void*)0);
 VAR_19 = VAR_11;
 VAR_50 = VAR_11;
 VAR_41 = 0;
 VAR_45 = 0;
 VAR_16 = VAR_12;
 VAR_37 = 0;
 VAR_40 = 0;
 VAR_20 = VAR_10;
 VAR_43 = ((void*)0);



 VAR_23 = VAR_11;
 VAR_51 = VAR_12;



 VAR_47 = ((void*)0);
 VAR_48.name.integer = VAR_6;
 VAR_48.descriptor_type = VAR_1;
 VAR_48.type = VAR_8;
 VAR_48.parent = ((void*)0);
 VAR_48.child = ((void*)0);
 VAR_48.peer = ((void*)0);
 VAR_48.object = ((void*)0);
 FUNC_4(VAR_9);
}
