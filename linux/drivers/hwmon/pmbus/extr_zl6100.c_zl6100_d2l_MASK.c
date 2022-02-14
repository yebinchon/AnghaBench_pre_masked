
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s16 ;


 int FUNC_0 (long,int) ;
 long VAR_0 ;
 long VAR_1 ;

__attribute__((used)) static u16 FUNC_1(long VAR_2)
{
 s16 VAR_3 = 0, VAR_4;
 bool VAR_5 = 0;


 if (VAR_2 == 0)
  return 0;

 if (VAR_2 < 0) {
  VAR_5 = 1;
  VAR_2 = -VAR_2;
 }


 while (VAR_2 >= VAR_0 && VAR_3 < 15) {
  VAR_3++;
  VAR_2 >>= 1;
 }

 while (VAR_2 < VAR_1 && VAR_3 > -15) {
  VAR_3--;
  VAR_2 <<= 1;
 }


 VAR_4 = FUNC_0(VAR_2, 1000);


 if (VAR_4 > 0x3ff)
  VAR_4 = 0x3ff;


 if (VAR_5)
  VAR_4 = -VAR_4;


 return (VAR_4 & 0x7ff) | ((VAR_3 << 11) & 0xf800);
}
