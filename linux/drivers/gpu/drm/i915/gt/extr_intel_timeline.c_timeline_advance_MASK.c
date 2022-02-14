
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_timeline {int seqno; int has_initial_breadcrumb; int pin_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u32 FUNC_2(struct intel_timeline *VAR_0)
{
 FUNC_0(!FUNC_1(&VAR_0->pin_count));
 FUNC_0(VAR_0->seqno & VAR_0->has_initial_breadcrumb);

 return VAR_0->seqno += 1 + VAR_0->has_initial_breadcrumb;
}
