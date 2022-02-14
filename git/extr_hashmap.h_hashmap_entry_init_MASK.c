
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {unsigned int hash; int * next; } ;



__attribute__((used)) static inline void FUNC_0(struct hashmap_entry *VAR_0,
     unsigned int VAR_1)
{
 VAR_0->hash = VAR_1;
 VAR_0->next = ((void*)0);
}
