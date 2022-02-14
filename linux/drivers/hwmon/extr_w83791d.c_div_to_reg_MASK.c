
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (long,int,int) ;

__attribute__((used)) static u8 FUNC_1(int VAR_0, long VAR_1)
{
 int VAR_2;


 VAR_1 = FUNC_0(VAR_1, 1, 128) >> 1;
 for (VAR_2 = 0; VAR_2 < 7; VAR_2++) {
  if (VAR_1 == 0)
   break;
  VAR_1 >>= 1;
 }
 return (u8) VAR_2;
}
