
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_addr {int initialized; void* pfunction; int function; int dll; } ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static inline void *FUNC_2(struct proc_addr *VAR_3)
{

 if (!VAR_3->initialized) {
  HANDLE VAR_4;
  VAR_3->initialized = 1;
  VAR_4 = FUNC_1(VAR_3->dll, ((void*)0),
         VAR_1);
  if (VAR_4)
   VAR_3->pfunction = FUNC_0(VAR_4, VAR_3->function);
 }

 if (!VAR_3->pfunction)
  VAR_2 = VAR_0;
 return VAR_3->pfunction;
}
