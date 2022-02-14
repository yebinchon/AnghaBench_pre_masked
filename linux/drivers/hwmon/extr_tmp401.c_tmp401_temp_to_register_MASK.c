
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (long,int) ;
 int VAR_0 ;
 long FUNC_1 (long,int,int) ;

__attribute__((used)) static u16 FUNC_2(long VAR_1, u8 VAR_2, int VAR_3)
{
 if (VAR_2 & VAR_0) {
  VAR_1 = FUNC_1(VAR_1, -64000, 191000);
  VAR_1 += 64000;
 } else
  VAR_1 = FUNC_1(VAR_1, 0, 127000);

 return FUNC_0(VAR_1 * (1 << (8 - VAR_3)), 1000) << VAR_3;
}
