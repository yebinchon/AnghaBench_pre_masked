
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (size_t,int ) ;
 scalar_t__ FUNC_3 (size_t,size_t) ;

void *FUNC_4(size_t VAR_0, size_t VAR_1)
{
 void *VAR_2;

 if (FUNC_3(VAR_0, VAR_1))
  FUNC_1("data too large to fit into virtual memory space");

 FUNC_2(VAR_1 * VAR_0, 0);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2 && (!VAR_0 || !VAR_1))
  VAR_2 = FUNC_0(1, 1);
 if (!VAR_2)
  FUNC_1("Out of memory, calloc failed");
 return VAR_2;
}
