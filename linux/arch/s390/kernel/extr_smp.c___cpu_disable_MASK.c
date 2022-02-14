
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long*,int ,int) ;
 int FUNC_1 (unsigned long*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(void)
{
 unsigned long VAR_1[16];


 FUNC_5();
 FUNC_4(FUNC_6(), 0);

 FUNC_3();

 FUNC_1(VAR_1, 0, 15);
 VAR_1[0] &= ~0x0000ee70UL;
 VAR_1[6] &= ~0xff000000UL;
 VAR_1[14] &= ~0x1f000000UL;
 FUNC_0(VAR_1, 0, 15);
 FUNC_2(VAR_0);
 return 0;
}
