
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct cpuinfo_ia64 {int threads_per_core; int cores_per_socket; int num_log; int socket_id; unsigned int number; unsigned int revision; unsigned int model; unsigned int family; unsigned int archrev; long unimpl_va_mask; long unimpl_pa_mask; int model_name; int features; int ppn; int cpu; int vendor; } ;
struct TYPE_7__ {unsigned long impl_va_msb; } ;
struct TYPE_9__ {TYPE_1__ pal_vm_info_2_s; } ;
typedef TYPE_3__ pal_vm_info_2_u_t ;
struct TYPE_8__ {unsigned long phys_add_size; } ;
struct TYPE_10__ {TYPE_2__ pal_vm_info_1_s; } ;
typedef TYPE_4__ pal_vm_info_1_u_t ;
typedef scalar_t__ pal_status_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (struct cpuinfo_ia64*) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6 (struct cpuinfo_ia64 *VAR_2)
{
 union {
  unsigned long bits[5];
  struct {

   char vendor[16];


   u64 ppn;


   unsigned number : 8;
   unsigned revision : 8;
   unsigned model : 8;
   unsigned family : 8;
   unsigned archrev : 8;
   unsigned reserved : 24;


   u64 features;
  } field;
 } VAR_3;
 pal_vm_info_1_u_t VAR_4;
 pal_vm_info_2_u_t VAR_5;
 pal_status_t VAR_6;
 unsigned long VAR_7 = 50, VAR_8 = 44;
 int VAR_9;
 for (VAR_9 = 0; VAR_9 < 5; ++VAR_9)
  VAR_3.bits[VAR_9] = FUNC_1(VAR_9);

 FUNC_4(VAR_2->vendor, VAR_3.field.vendor, 16);
 VAR_2->ppn = VAR_3.field.ppn;
 VAR_2->number = VAR_3.field.number;
 VAR_2->revision = VAR_3.field.revision;
 VAR_2->model = VAR_3.field.model;
 VAR_2->family = VAR_3.field.family;
 VAR_2->archrev = VAR_3.field.archrev;
 VAR_2->features = VAR_3.field.features;
 VAR_2->model_name = FUNC_0(VAR_2->family, VAR_2->model);

 VAR_6 = FUNC_2(&VAR_4, &VAR_5);
 if (VAR_6 == VAR_0) {
  VAR_7 = VAR_5;
  VAR_8 = VAR_4;
 }
 VAR_2->unimpl_va_mask = ~((7L<<61) | ((1L << (VAR_7 + 1)) - 1));
 VAR_2->unimpl_pa_mask = ~((1L<<63) | ((1L << VAR_8) - 1));
}
