
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,int const,unsigned long long) ;
 unsigned long long FUNC_2 () ;
 unsigned long long FUNC_3 () ;
 unsigned long long FUNC_4 () ;
 int FUNC_5 (int ) ;

void FUNC_6(void)
{
 const int VAR_0 = FUNC_0();
 unsigned long long VAR_1;
 unsigned long long VAR_2;


 VAR_1 = 0x1f00000000ull;
 VAR_2 = FUNC_4();
 if (VAR_2 & VAR_1)
  FUNC_1("Core%d BIST Failure: CacheErr(icache) = 0x%llx\n",
         VAR_0, VAR_2);

 VAR_2 = FUNC_3();
 if (VAR_2 & 1)
  FUNC_1("Core%d L1 Dcache parity error: "
         "CacheErr(dcache) = 0x%llx\n",
         VAR_0, VAR_2);

 VAR_1 = 0xfc00000000000000ull;
 VAR_2 = FUNC_2();
 if (VAR_2 & VAR_1)
  FUNC_1("Core%d BIST Failure: COP0_CVM_MEM_CTL = 0x%llx\n",
         VAR_0, VAR_2);

 FUNC_5(0);
}
