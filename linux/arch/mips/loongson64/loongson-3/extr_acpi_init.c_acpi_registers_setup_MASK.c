
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

void FUNC_7(void)
{
 u32 VAR_4;


 FUNC_6(0x20, VAR_3 & 0xff);
 FUNC_6(0x21, VAR_3 >> 8);


 FUNC_6(0x22, VAR_2 & 0xff);
 FUNC_6(0x23, VAR_2 >> 8);


 FUNC_6(0x28, VAR_1 & 0xff);
 FUNC_6(0x29, VAR_1 >> 8);


 FUNC_6(0x2e, VAR_0 & 0xff);
 FUNC_6(0x2f, VAR_0 >> 8);



 FUNC_6(0x0e, 1 << 3);


 FUNC_2(1, VAR_2);


 FUNC_6(0x10, FUNC_5(0x10) | 1);


 VAR_4 = FUNC_0(VAR_1 + 4);
 FUNC_1(VAR_4 | (1 << 14) | (1 << 22), VAR_1 + 4);


 FUNC_6(0x8d, FUNC_5(0x8d) & (~(1 << 1)));


 FUNC_6(0x94, FUNC_5(0x94) | (1 << 3));


 FUNC_6(0x33, FUNC_5(0x33) & (~(3 << 4)));


 FUNC_6(0x3d, FUNC_5(0x3d) & (~(3 << 2)));


 FUNC_6(0x37, FUNC_5(0x37) & (~(1 << 6)));


 FUNC_6(0x7c, FUNC_5(0x7c) | (1 << 6));


 VAR_4 = FUNC_3(0xf6);
 VAR_4 |= ((1 << 7) | (1 << 3));
 FUNC_4(0xf6, VAR_4);


 VAR_4 = FUNC_3(0xf8);
 VAR_4 |= ((1 << 5) | (1 << 1));
 FUNC_4(0xf8, VAR_4);
}
