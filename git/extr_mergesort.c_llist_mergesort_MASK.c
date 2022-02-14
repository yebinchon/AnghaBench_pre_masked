
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mergesort_sublist {void const* ptr; unsigned long len; } ;


 void* FUNC_0 (void const*,unsigned long,void* (*) (void const*)) ;
 void* FUNC_1 (struct mergesort_sublist*,void* (*) (void const*)) ;

void *FUNC_2(void *VAR_0,
        void *(*VAR_1)(const void *),
        void (*VAR_2)(void *, void *),
        int (*VAR_3)(const void *, const void *))
{
 unsigned long VAR_4;

 if (!VAR_0)
  return ((void*)0);
 for (VAR_4 = 1; ; VAR_4 *= 2) {
  void *VAR_5;
  struct mergesort_sublist VAR_6, VAR_7;

  VAR_6.ptr = VAR_0;
  VAR_7.ptr = FUNC_0(VAR_6.ptr, VAR_4, VAR_1);
  if (!VAR_7.ptr)
   break;
  VAR_6.len = VAR_7.len = VAR_4;

  if (VAR_3(VAR_6.ptr, VAR_7.ptr) > 0)
   VAR_0 = VAR_5 = FUNC_1(&VAR_7, VAR_1);
  else
   VAR_0 = VAR_5 = FUNC_1(&VAR_6, VAR_1);

  while (VAR_6.ptr) {
   while (VAR_6.len || VAR_7.len) {
    void *VAR_8 = VAR_5;

    if (!VAR_6.len)
     VAR_5 = FUNC_1(&VAR_7, VAR_1);
    else if (!VAR_7.len)
     VAR_5 = FUNC_1(&VAR_6, VAR_1);
    else if (VAR_3(VAR_6.ptr, VAR_7.ptr) > 0)
     VAR_5 = FUNC_1(&VAR_7, VAR_1);
    else
     VAR_5 = FUNC_1(&VAR_6, VAR_1);
    VAR_2(VAR_8, VAR_5);
   }
   VAR_6.ptr = VAR_7.ptr;
   VAR_6.len = VAR_4;
   VAR_7.ptr = FUNC_0(VAR_6.ptr, VAR_4, VAR_1);
   VAR_7.len = VAR_7.ptr ? VAR_4 : 0;

  }
  VAR_2(VAR_5, ((void*)0));
 }
 return VAR_0;
}
