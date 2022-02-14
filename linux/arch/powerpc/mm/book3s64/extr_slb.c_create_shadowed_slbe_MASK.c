
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum slb_index { ____Placeholder_slb_index } slb_index ;


 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (unsigned long,int,unsigned long,int) ;

__attribute__((used)) static inline void FUNC_2(unsigned long VAR_0, int VAR_1,
     unsigned long VAR_2,
     enum slb_index VAR_3)
{





 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_0(0, VAR_0);
 asm volatile("slbmte  %0,%1" :
       : "r" (FUNC_0(VAR_0, VAR_1, VAR_2)),
         "r" (FUNC_0(VAR_0, VAR_1, VAR_3))
       : "memory" );
}
