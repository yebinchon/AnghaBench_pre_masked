
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int rev_input_given; } ;
struct all_refs_cb {unsigned int all_flags; int * wt; struct rev_info* all_revs; } ;



__attribute__((used)) static void FUNC_0(struct all_refs_cb *VAR_0, struct rev_info *VAR_1,
 unsigned VAR_2)
{
 VAR_0->all_revs = VAR_1;
 VAR_0->all_flags = VAR_2;
 VAR_1->rev_input_given = 1;
 VAR_0->wt = ((void*)0);
}
