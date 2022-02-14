
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int phys_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(void)
{
 phys_addr_t VAR_6 = FUNC_2(VAR_0);
 u64 VAR_7;
 int VAR_8;


 VAR_7 = VAR_6 & FUNC_0(VAR_5 - 1);
 VAR_7 ^= FUNC_0(VAR_5 - 1);

 VAR_8 = FUNC_3((u64)FUNC_6(FUNC_5()) ^
   (u64)(VAR_1 - 1));

 if (VAR_8 == (VAR_5 - 1)) {





  VAR_4 = FUNC_0(VAR_5 - 1) - 1;
  VAR_4 |= VAR_7;
 } else {
  VAR_2 = VAR_8;
  VAR_4 = FUNC_1(VAR_2 - 1, 0);
  VAR_3 = FUNC_4() & FUNC_1(VAR_5 - 2, VAR_2);
  VAR_3 |= VAR_7;
  VAR_3 >>= VAR_2;
 }
}
