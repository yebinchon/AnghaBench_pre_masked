
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsort_store {size_t alloc; void** storage; } ;


 void** FUNC_0 (void**,size_t,int) ;

__attribute__((used)) static int FUNC_1(struct tsort_store *VAR_0, size_t VAR_1)
{
 if (VAR_0->alloc < VAR_1) {
  void **VAR_2;

  VAR_2 = FUNC_0(VAR_0->storage, VAR_1, sizeof(void *));






  if (VAR_2 == ((void*)0))
   return -1;

  VAR_0->storage = VAR_2;
  VAR_0->alloc = VAR_1;
 }

 return 0;
}
