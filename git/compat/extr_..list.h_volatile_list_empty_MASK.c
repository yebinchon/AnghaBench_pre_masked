
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct volatile_list_head {struct volatile_list_head volatile* next; } ;



__attribute__((used)) static inline int FUNC_0(volatile struct volatile_list_head *VAR_0)
{
 return VAR_0 == VAR_0->next;
}
