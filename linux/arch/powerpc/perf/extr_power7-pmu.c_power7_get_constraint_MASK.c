
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(u64 VAR_6, unsigned long *VAR_7,
     unsigned long *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12 = 0, VAR_13 = 0;

 VAR_9 = (VAR_6 >> VAR_3) & VAR_2;
 if (VAR_9) {
  if (VAR_9 > 6)
   return -1;
  VAR_10 = (VAR_9 - 1) * 2;
  VAR_12 |= 2 << VAR_10;
  VAR_13 |= 1 << VAR_10;
  if (VAR_9 >= 5 && !(VAR_6 == 0x500fa || VAR_6 == 0x600f4))
   return -1;
 }
 if (VAR_9 < 5) {

  VAR_12 |= 0x8000;
  VAR_13 |= 0x1000;
 }

 VAR_11 = (VAR_6 >> VAR_5) & VAR_4;
 if (VAR_11 == 6) {

  int VAR_14 = (VAR_6 >> VAR_1) & VAR_0;
  VAR_12 |= 0x7 << 16;
  VAR_13 |= VAR_14 << 16;
 }

 *VAR_7 = VAR_12;
 *VAR_8 = VAR_13;
 return 0;
}
