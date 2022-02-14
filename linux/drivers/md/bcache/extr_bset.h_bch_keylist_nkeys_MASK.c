
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keylist {size_t top_p; size_t keys_p; } ;



__attribute__((used)) static inline size_t FUNC_0(struct keylist *VAR_0)
{
 return VAR_0->top_p - VAR_0->keys_p;
}
