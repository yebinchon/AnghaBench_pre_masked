
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int version_id; int num_counters; int bit_width; } ;
union cpuid10_eax {TYPE_1__ split; int full; } ;
struct TYPE_6__ {int x86; int x86_model; } ;
struct TYPE_5__ {void* num_controls; void* num_counters; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int ) ;
 void* VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
 union cpuid10_eax VAR_4;

 VAR_4.full = FUNC_0(0xa);


 if (VAR_4.split.version_id == 0 && VAR_1.x86 == 6 &&
     VAR_1.x86_model == 15) {
  VAR_4.split.version_id = 2;
  VAR_4.split.num_counters = 2;
  VAR_4.split.bit_width = 40;
 }

 VAR_2 = FUNC_1((int)VAR_4.split.num_counters, VAR_0);

 VAR_3.num_counters = VAR_2;
 VAR_3.num_controls = VAR_2;
}
