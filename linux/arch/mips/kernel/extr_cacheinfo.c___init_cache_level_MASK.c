
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ waysize; } ;
struct TYPE_6__ {scalar_t__ waysize; } ;
struct TYPE_5__ {scalar_t__ waysize; } ;
struct TYPE_8__ {scalar_t__ waysize; } ;
struct cpuinfo_mips {TYPE_3__ tcache; TYPE_2__ scache; TYPE_1__ icache; TYPE_4__ dcache; } ;
struct cpu_cacheinfo {int num_levels; int num_leaves; } ;


 int VAR_0 ;
 struct cpuinfo_mips VAR_1 ;
 struct cpu_cacheinfo* FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_2)
{
 struct cpuinfo_mips *VAR_3 = &VAR_1;
 struct cpu_cacheinfo *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0, VAR_6 = 0;





 if (VAR_3->dcache.waysize)
  VAR_5 += 1;
 else
  return -VAR_0;


 VAR_6 += (VAR_3->icache.waysize) ? 2 : 1;

 if (VAR_3->scache.waysize) {
  VAR_5++;
  VAR_6++;
 }

 if (VAR_3->tcache.waysize) {
  VAR_5++;
  VAR_6++;
 }

 VAR_4->num_levels = VAR_5;
 VAR_4->num_leaves = VAR_6;
 return 0;
}
