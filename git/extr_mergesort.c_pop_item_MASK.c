
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mergesort_sublist {void const* ptr; int len; } ;



__attribute__((used)) static void *FUNC_0(struct mergesort_sublist *VAR_0,
        void *(*VAR_1)(const void *))
{
 void *VAR_2 = VAR_0->ptr;
 VAR_0->ptr = VAR_1(VAR_0->ptr);
 VAR_0->len = VAR_0->ptr ? (VAR_0->len - 1) : 0;
 return VAR_2;
}
