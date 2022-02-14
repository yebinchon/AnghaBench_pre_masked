
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gkc_tuple {int dummy; } ;
struct gkc_summary {struct freelist* fl; int alloced; } ;
struct freelist {struct freelist* next; } ;



__attribute__((used)) static void FUNC_0(struct gkc_summary *VAR_0, struct gkc_tuple *VAR_1)
{
    struct freelist *VAR_2 = (void *)VAR_1;
    VAR_0->alloced--;

    VAR_2->next = VAR_0->fl;
    VAR_0->fl = VAR_2;
}
