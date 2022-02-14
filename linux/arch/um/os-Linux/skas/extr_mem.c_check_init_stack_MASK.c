
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_id {scalar_t__ stack; } ;



__attribute__((used)) static inline unsigned long *FUNC_0(struct mm_id * VAR_0,
           unsigned long *VAR_1)
{
 if (VAR_1 == ((void*)0)) {
  VAR_1 = (unsigned long *) VAR_0->stack + 2;
  *VAR_1 = 0;
 }
 return VAR_1;
}
