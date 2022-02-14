
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuinfo_x86 {int dummy; } ;
struct TYPE_2__ {int (* c_detect_tlb ) (struct cpuinfo_x86*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,...) ;
 int FUNC_1 (struct cpuinfo_x86*) ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static void FUNC_2(struct cpuinfo_x86 *VAR_9)
{
 if (VAR_1->c_detect_tlb)
  VAR_1->c_detect_tlb(VAR_9);

 FUNC_0("Last level iTLB entries: 4KB %d, 2MB %d, 4MB %d\n",
  VAR_7[VAR_0], VAR_6[VAR_0],
  VAR_8[VAR_0]);

 FUNC_0("Last level dTLB entries: 4KB %d, 2MB %d, 4MB %d, 1GB %d\n",
  VAR_4[VAR_0], VAR_3[VAR_0],
  VAR_5[VAR_0], VAR_2[VAR_0]);
}
