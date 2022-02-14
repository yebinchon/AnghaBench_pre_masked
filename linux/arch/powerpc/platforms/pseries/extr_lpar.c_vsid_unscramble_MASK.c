
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10 = VAR_4;
 unsigned long VAR_11, VAR_12;
 unsigned long VAR_13, VAR_14;

 if (!FUNC_0(VAR_0))
  VAR_10 = 65;

 if (VAR_8 == VAR_1) {
  VAR_11 = VAR_6;
  VAR_12 = ((1UL << (VAR_10 - VAR_2)) - 1);
 } else {
  VAR_11 = VAR_5;
  VAR_12 = ((1UL << (VAR_10 - VAR_3)) - 1);
 }




 if (VAR_7 >= VAR_12)
  return 0;
 VAR_13 = 0x7fffffffffffffffull / VAR_7;
 if (VAR_11 < VAR_13)
  return (VAR_7 * VAR_11) % VAR_12;

 VAR_14 = VAR_11/VAR_13;
 VAR_11 %= VAR_13;

 VAR_9 = (((VAR_7 * VAR_13) % VAR_12) * VAR_14) % VAR_12;
 VAR_9 = (VAR_9 + VAR_7 * VAR_11) % VAR_12;

 return VAR_9;
}
