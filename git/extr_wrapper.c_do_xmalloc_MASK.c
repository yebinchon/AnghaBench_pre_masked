
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (char*,unsigned long) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (size_t,int) ;
 int FUNC_4 (void*,int,size_t) ;

__attribute__((used)) static void *FUNC_5(size_t VAR_0, int VAR_1)
{
 void *VAR_2;

 if (FUNC_3(VAR_0, VAR_1))
  return ((void*)0);
 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2 && !VAR_0)
  VAR_2 = FUNC_2(1);
 if (!VAR_2) {
  if (!VAR_1)
   FUNC_0("Out of memory, malloc failed (tried to allocate %lu bytes)",
       (unsigned long)VAR_0);
  else {
   FUNC_1("Out of memory, malloc failed (tried to allocate %lu bytes)",
         (unsigned long)VAR_0);
   return ((void*)0);
  }
 }



 return VAR_2;
}
