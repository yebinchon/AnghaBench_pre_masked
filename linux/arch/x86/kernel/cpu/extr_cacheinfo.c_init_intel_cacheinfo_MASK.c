
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cpuinfo_x86 {unsigned int cpu_index; int cpuid_level; int apicid; int x86; unsigned int phys_proc_id; unsigned int x86_cache_size; } ;
struct TYPE_4__ {int level; int num_threads_sharing; int type; } ;
struct TYPE_5__ {TYPE_1__ split; } ;
struct _cpuid4_info_regs {int size; TYPE_2__ eax; } ;
struct TYPE_6__ {unsigned char descriptor; int cache_type; unsigned int size; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 TYPE_3__* VAR_3 ;
 int FUNC_0 (struct cpuinfo_x86*) ;
 int VAR_4 ;
 int FUNC_1 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (unsigned int,struct _cpuid4_info_regs*) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (struct cpuinfo_x86*) ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int FUNC_6 (int ,unsigned int) ;

void FUNC_7(struct cpuinfo_x86 *VAR_6)
{

 unsigned int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 unsigned int VAR_12 = 0, VAR_13 = 0;
 unsigned int VAR_14 = 0, VAR_15 = 0, VAR_16;
 unsigned int VAR_17 = 0, VAR_18 = 0, VAR_19, VAR_20;




 if (VAR_6->cpuid_level > 3) {
  static int VAR_21;

  if (VAR_21 == 0) {

   VAR_5 = FUNC_4(VAR_6);
   VAR_21++;
  }





  for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
   struct _cpuid4_info_regs VAR_22 = {};
   int VAR_23;

   VAR_23 = FUNC_2(VAR_16, &VAR_22);
   if (VAR_23 < 0)
    continue;

   switch (VAR_22.eax.split.level) {
   case 1:
    if (VAR_22.eax.split.type == VAR_1)
     VAR_12 = VAR_22.size/1024;
    else if (VAR_22.eax.split.type == VAR_2)
     VAR_13 = VAR_22.size/1024;
    break;
   case 2:
    VAR_14 = VAR_22.size/1024;
    VAR_19 = 1 + VAR_22.eax.split.num_threads_sharing;
    VAR_20 = FUNC_5(VAR_19);
    VAR_17 = VAR_6->apicid & ~((1 << VAR_20) - 1);
    break;
   case 3:
    VAR_15 = VAR_22.size/1024;
    VAR_19 = 1 + VAR_22.eax.split.num_threads_sharing;
    VAR_20 = FUNC_5(VAR_19);
    VAR_18 = VAR_6->apicid & ~((1 << VAR_20) - 1);
    break;
   default:
    break;
   }
  }
 }




 if ((VAR_5 == 0 || VAR_6->x86 == 15) && VAR_6->cpuid_level > 1) {

  int VAR_24, VAR_25;
  unsigned int VAR_26[4];
  unsigned char *VAR_27 = (unsigned char *)VAR_26;
  int VAR_28 = 0;

  if (VAR_5 != 0 && VAR_6->x86 == 15)
   VAR_28 = 1;


  VAR_25 = FUNC_3(2) & 0xFF;

  for (VAR_16 = 0 ; VAR_16 < VAR_25 ; VAR_16++) {
   FUNC_1(2, &VAR_26[0], &VAR_26[1], &VAR_26[2], &VAR_26[3]);


   for (VAR_24 = 0 ; VAR_24 < 3 ; VAR_24++)
    if (VAR_26[VAR_24] & (1 << 31))
     VAR_26[VAR_24] = 0;


   for (VAR_24 = 1 ; VAR_24 < 16 ; VAR_24++) {
    unsigned char VAR_29 = VAR_27[VAR_24];
    unsigned char VAR_30 = 0;


    while (VAR_3[VAR_30].descriptor != 0) {
     if (VAR_3[VAR_30].descriptor == VAR_29) {
      if (VAR_28 && VAR_3[VAR_30].cache_type != 128)
       break;
      switch (VAR_3[VAR_30].cache_type) {
      case 131:
       VAR_8 += VAR_3[VAR_30].size;
       break;
      case 132:
       VAR_9 += VAR_3[VAR_30].size;
       break;
      case 130:
       VAR_10 += VAR_3[VAR_30].size;
       break;
      case 129:
       VAR_11 += VAR_3[VAR_30].size;
       break;
      case 128:
       VAR_7 += VAR_3[VAR_30].size;
       break;
      }

      break;
     }

     VAR_30++;
    }
   }
  }
 }

 if (VAR_12)
  VAR_9 = VAR_12;

 if (VAR_13)
  VAR_8 = VAR_13;

 if (VAR_14) {
  VAR_10 = VAR_14;



 }

 if (VAR_15) {
  VAR_11 = VAR_15;



 }
 VAR_6->x86_cache_size = VAR_11 ? VAR_11 : (VAR_10 ? VAR_10 : (VAR_8+VAR_9));

 if (!VAR_10)
  FUNC_0(VAR_6);
}
