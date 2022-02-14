
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_perfmon_request {int sequence; int * bo_vma; } ;
struct etnaviv_gpu {int dummy; } ;
struct etnaviv_gem_submit {unsigned int nr_pmrs; struct etnaviv_perfmon_request* pmrs; } ;
struct etnaviv_event {struct etnaviv_gem_submit* submit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct etnaviv_gpu*,int ) ;
 int FUNC_1 (struct etnaviv_gpu*,int ,int ) ;
 int FUNC_2 (struct etnaviv_gpu*,struct etnaviv_event*,int ) ;

__attribute__((used)) static void FUNC_3(struct etnaviv_gpu *VAR_5,
 struct etnaviv_event *VAR_6)
{
 const struct etnaviv_gem_submit *VAR_7 = VAR_6->submit;
 unsigned int VAR_8;
 u32 VAR_9;

 FUNC_2(VAR_5, VAR_6, VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_7->nr_pmrs; VAR_8++) {
  const struct etnaviv_perfmon_request *VAR_10 = VAR_7->pmrs + VAR_8;

  *VAR_10->bo_vma = VAR_10->sequence;
 }


 VAR_9 = FUNC_0(VAR_5, VAR_1);
 VAR_9 |= VAR_2;
 FUNC_1(VAR_5, VAR_1, VAR_9);


 VAR_9 = FUNC_0(VAR_5, VAR_3);
 VAR_9 |= VAR_4;
 FUNC_1(VAR_5, VAR_3, VAR_9);
}
