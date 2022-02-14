
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline {scalar_t__ has_initial_breadcrumb; int seqno; } ;



__attribute__((used)) static void FUNC_0(struct intel_timeline *VAR_0)
{
 VAR_0->seqno -= 1 + VAR_0->has_initial_breadcrumb;
}
