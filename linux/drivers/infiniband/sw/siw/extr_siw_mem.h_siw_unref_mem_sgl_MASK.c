
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_mem {int dummy; } ;


 int FUNC_0 (struct siw_mem*) ;

__attribute__((used)) static inline void FUNC_1(struct siw_mem **VAR_0, unsigned int VAR_1)
{
 while (VAR_1) {
  if (*VAR_0 == ((void*)0))
   break;

  FUNC_0(*VAR_0);
  *VAR_0 = ((void*)0);
  VAR_0++;
  VAR_1--;
 }
}
