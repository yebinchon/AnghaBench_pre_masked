
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdt_resource {unsigned int mon_scale; unsigned int num_rmid; int mon_capable; int mon_enabled; } ;
struct TYPE_2__ {unsigned int x86_cache_size; unsigned int x86_cache_occ_scale; unsigned int x86_cache_max_rmid; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct rdt_resource*) ;
 int FUNC_1 (struct rdt_resource*) ;
 unsigned int VAR_1 ;

int FUNC_2(struct rdt_resource *VAR_2)
{
 unsigned int VAR_3 = VAR_0.x86_cache_size;
 int VAR_4;

 VAR_2->mon_scale = VAR_0.x86_cache_occ_scale;
 VAR_2->num_rmid = VAR_0.x86_cache_max_rmid + 1;
 VAR_1 = VAR_3 * 1024 / VAR_2->num_rmid;


 VAR_1 /= VAR_2->mon_scale;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_2);

 VAR_2->mon_capable = 1;
 VAR_2->mon_enabled = 1;

 return 0;
}
