
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ waysize; } ;
struct TYPE_4__ {scalar_t__ waysize; } ;
struct TYPE_6__ {scalar_t__ waysize; } ;
struct cpuinfo_mips {TYPE_2__ tcache; TYPE_1__ scache; TYPE_3__ icache; } ;
struct cpu_cacheinfo {int cpu_map_populated; struct cacheinfo* info_list; } ;
struct cacheinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpuinfo_mips VAR_3 ;
 int VAR_4 ;
 struct cpu_cacheinfo* FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int FUNC_1 (int ,struct cacheinfo*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_8)
{
 struct cpuinfo_mips *VAR_9 = &VAR_3;
 struct cpu_cacheinfo *VAR_10 = FUNC_0(VAR_8);
 struct cacheinfo *VAR_11 = VAR_10->info_list;

 if (VAR_9->icache.waysize) {
  FUNC_1(VAR_4, VAR_11, 1, VAR_0);
  FUNC_1(VAR_5, VAR_11, 1, VAR_1);
 } else {
  FUNC_1(VAR_4, VAR_11, 1, VAR_2);
 }

 if (VAR_9->scache.waysize)
  FUNC_1(VAR_6, VAR_11, 2, VAR_2);

 if (VAR_9->tcache.waysize)
  FUNC_1(VAR_7, VAR_11, 3, VAR_2);

 VAR_10->cpu_map_populated = 1;

 return 0;
}
