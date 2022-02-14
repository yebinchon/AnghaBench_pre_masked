
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* zone_name; int version; int pressure_relief; int free_definite_size; int memalign; TYPE_1__* introspect; int batch_free; int batch_malloc; int destroy; int realloc; int free; int valloc; int calloc; int malloc; int size; } ;
struct TYPE_3__ {int reinit_lock; int * enumerate_unavailable_without_blocks; int * enumerate_discharged_pointers; int * discharge; int * disable_discharge_checking; int * enable_discharge_checking; int zone_locked; int statistics; int force_unlock; int force_lock; int log; int print; int check; int good_size; int enumerator; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void
FUNC_0(void) {
 VAR_0.size = VAR_21;
 VAR_0.malloc = VAR_15;
 VAR_0.calloc = VAR_4;
 VAR_0.valloc = VAR_23;
 VAR_0.free = VAR_10;
 VAR_0.realloc = VAR_19;
 VAR_0.destroy = VAR_6;
 VAR_0.zone_name = "jemalloc_zone";
 VAR_0.batch_malloc = VAR_3;
 VAR_0.batch_free = VAR_2;
 VAR_0.introspect = &VAR_1;
 VAR_0.version = 9;
 VAR_0.memalign = VAR_16;
 VAR_0.free_definite_size = VAR_11;
 VAR_0.pressure_relief = VAR_17;

 VAR_1.enumerator = VAR_7;
 VAR_1.good_size = VAR_12;
 VAR_1.check = VAR_5;
 VAR_1.print = VAR_18;
 VAR_1.log = VAR_14;
 VAR_1.force_lock = VAR_8;
 VAR_1.force_unlock = VAR_9;
 VAR_1.statistics = VAR_22;
 VAR_1.zone_locked = VAR_13;
 VAR_1.enable_discharge_checking = ((void*)0);
 VAR_1.disable_discharge_checking = ((void*)0);
 VAR_1.discharge = ((void*)0);



 VAR_1.enumerate_unavailable_without_blocks = ((void*)0);

 VAR_1.reinit_lock = VAR_20;
}
