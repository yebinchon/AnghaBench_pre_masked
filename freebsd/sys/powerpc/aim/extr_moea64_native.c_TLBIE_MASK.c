
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
typedef scalar_t__ register_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ volatile*,int ,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline void
FUNC_4(uint64_t VAR_3) {

 register_t VAR_4, VAR_5;
 register_t VAR_6;
 register_t VAR_7, VAR_8;


 static volatile u_int VAR_9 = 0;
 bool VAR_10 = VAR_2;

 VAR_3 <<= VAR_0;


 if (VAR_10) {
  while (!FUNC_0(&VAR_9, 0, 1));
  FUNC_3();

  if (VAR_1)
   VAR_3 &= ~(0xffffULL << 48);
 }
 VAR_4 = (uint32_t)(VAR_3 >> 32);
 VAR_5 = (uint32_t)VAR_3;

 VAR_8 = FUNC_1();
 __asm __volatile("	    mfmsr %0; 	    mr %1, %0; 	    insrdi %1,%5,1,0; 	    mtmsrd %1; isync; 	    	    sld %1,%2,%4; 	    or %1,%1,%3; 	    tlbie %1; 	    	    mtmsrd %0; isync; 	    eieio; 	    tlbsync; 	    ptesync;"
 : "=r"(VAR_6), "=r"(VAR_7) : "r"(VAR_4), "r"(VAR_5), "r"(32), "r"(1)
     : "memory");
 FUNC_2(VAR_8);



 if (VAR_10)
  VAR_9 = 0;
}
