
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_0)
{
 u32 VAR_1 = (VAR_0 << 1) & 0xff;


 VAR_1 |= (VAR_0 & FUNC_0(6, 0)) << 1;


 VAR_1 |= (VAR_0 & FUNC_0(9, 7)) << 6;


 if (!(FUNC_1(VAR_0 & 0x7f) & 1))
  VAR_1 |= 1;

 return VAR_1;
}
