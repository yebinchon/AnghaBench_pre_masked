
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_node {struct hlist_node** pprev; struct hlist_node* next; } ;



__attribute__((used)) static inline void FUNC_0(struct hlist_node *VAR_0,
     struct hlist_node *VAR_1)
{
 VAR_0->pprev = VAR_1->pprev;
 VAR_0->next = VAR_1;
 VAR_1->pprev = &VAR_0->next;
 *(VAR_0->pprev) = VAR_0;
}
