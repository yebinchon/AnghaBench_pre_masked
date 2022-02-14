
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_pmc {int counter; scalar_t__ perf_event; } ;


 scalar_t__ FUNC_0 (scalar_t__,int*,int*) ;
 int FUNC_1 (struct kvm_pmc*) ;

__attribute__((used)) static inline u64 FUNC_2(struct kvm_pmc *VAR_0)
{
 u64 VAR_1, VAR_2, VAR_3;

 VAR_1 = VAR_0->counter;
 if (VAR_0->perf_event)
  VAR_1 += FUNC_0(VAR_0->perf_event,
       &VAR_2, &VAR_3);

 return VAR_1 & FUNC_1(VAR_0);
}
