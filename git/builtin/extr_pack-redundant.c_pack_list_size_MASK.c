
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_list {struct pack_list* next; } ;



__attribute__((used)) static inline size_t FUNC_0(struct pack_list *VAR_0)
{
 size_t VAR_1 = 0;
 while (VAR_0) {
  VAR_1++;
  VAR_0 = VAR_0->next;
 }
 return VAR_1;
}
