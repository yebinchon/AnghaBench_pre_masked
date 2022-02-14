
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_perfmon_request {unsigned int flags; } ;
struct etnaviv_gpu {int dummy; } ;
struct etnaviv_gem_submit {unsigned int nr_pmrs; int exec_state; struct etnaviv_perfmon_request* pmrs; } ;
struct etnaviv_event {struct etnaviv_gem_submit* submit; } ;


 int FUNC_0 (struct etnaviv_gpu*,struct etnaviv_perfmon_request const*,int ) ;

__attribute__((used)) static void FUNC_1(struct etnaviv_gpu *VAR_0,
 struct etnaviv_event *VAR_1, unsigned int VAR_2)
{
 const struct etnaviv_gem_submit *VAR_3 = VAR_1->submit;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_pmrs; VAR_4++) {
  const struct etnaviv_perfmon_request *VAR_5 = VAR_3->pmrs + VAR_4;

  if (VAR_5->flags == VAR_2)
   FUNC_0(VAR_0, VAR_5, VAR_3->exec_state);
 }
}
