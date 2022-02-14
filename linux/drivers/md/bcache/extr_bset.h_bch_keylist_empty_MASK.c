
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keylist {scalar_t__ top; scalar_t__ keys; } ;



__attribute__((used)) static inline bool FUNC_0(struct keylist *VAR_0)
{
 return VAR_0->top == VAR_0->keys;
}
