
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 u64 VAR_0, VAR_1;
 int VAR_2 = FUNC_2();
 u64 VAR_3 = FUNC_0(VAR_2);
 for (VAR_0 = 0; VAR_0 <= 0x8000; VAR_0 += 0x1000) {
  for (VAR_1 = 0; VAR_1 <= 0x400; VAR_1 += 0x200)
   FUNC_4(VAR_3 + VAR_0 + VAR_1, 0);
 }

 FUNC_3(FUNC_1(VAR_2));
}
