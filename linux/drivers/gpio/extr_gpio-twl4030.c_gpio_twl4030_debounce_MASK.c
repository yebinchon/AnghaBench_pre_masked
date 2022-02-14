
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int ,int) ;

__attribute__((used)) static int FUNC_1(u32 VAR_2, u8 VAR_3)
{
 u8 VAR_4[3];




 VAR_4[0] = (VAR_2 & 0xff) | (VAR_3 & 0x03);
 VAR_2 >>= 8;
 VAR_4[1] = (VAR_2 & 0xff);
 VAR_2 >>= 8;
 VAR_4[2] = (VAR_2 & 0x03);

 return FUNC_0(VAR_1, VAR_4,
    VAR_0, 3);
}
