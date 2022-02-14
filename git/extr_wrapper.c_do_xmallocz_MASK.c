
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 void* FUNC_1 (size_t,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (size_t,int) ;

__attribute__((used)) static void *FUNC_4(size_t VAR_0, int VAR_1)
{
 void *VAR_2;
 if (FUNC_3(VAR_0, 1)) {
  if (VAR_1) {
   FUNC_2("Data too large to fit into virtual memory space.");
   return ((void*)0);
  } else
   FUNC_0("Data too large to fit into virtual memory space.");
 }
 VAR_2 = FUNC_1(VAR_0 + 1, VAR_1);
 if (VAR_2)
  ((char*)VAR_2)[VAR_0] = 0;
 return VAR_2;
}
