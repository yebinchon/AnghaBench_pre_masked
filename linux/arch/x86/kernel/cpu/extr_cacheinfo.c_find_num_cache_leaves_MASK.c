
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
union _cpuid4_leaf_eax {unsigned int full; TYPE_1__ split; } ;
struct cpuinfo_x86 {scalar_t__ x86_vendor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int,int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct cpuinfo_x86 *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 union _cpuid4_leaf_eax VAR_9;
 int VAR_10 = -1;

 if (VAR_3->x86_vendor == VAR_1 ||
     VAR_3->x86_vendor == VAR_2)
  VAR_8 = 0x8000001d;
 else
  VAR_8 = 4;

 do {
  ++VAR_10;

  FUNC_0(VAR_8, VAR_10, &VAR_4, &VAR_5, &VAR_6, &VAR_7);
  VAR_9.full = VAR_4;
 } while (VAR_9.split.type != VAR_0);
 return VAR_10;
}
