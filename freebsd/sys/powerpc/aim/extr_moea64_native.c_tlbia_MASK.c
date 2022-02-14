
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int register_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(void)
{
 vm_offset_t VAR_0;

 register_t VAR_1, VAR_2;


 VAR_0 = 0xc00;
 switch (FUNC_2() >> 16) {
 case 135:
 case 134:
 case 132:
 case 133:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_0 = 0;
  break;
 }

 FUNC_1();

 for (; VAR_0 < 0x400000; VAR_0 += 0x00001000) {



  __asm __volatile("		    mfmsr %0; 		    mr %1, %0; 		    insrdi %1,%3,1,0; 		    mtmsrd %1; 		    isync; 		    		    tlbiel %2; 		    		    mtmsrd %0; 		    isync;"
  : "=r"(VAR_1), "=r"(VAR_2) : "r"(VAR_0), "r"(1));

 }

 FUNC_0();
 FUNC_1();
}
