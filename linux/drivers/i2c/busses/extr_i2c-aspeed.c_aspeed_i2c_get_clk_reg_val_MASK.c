
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct device *VAR_5,
          u32 VAR_6,
          u32 VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 VAR_9 = (VAR_6 + 1) * 2;
 VAR_8 = VAR_7 > VAR_9 ?
   FUNC_1((VAR_7 - 1) / VAR_9) + 1 : 0;

 if (VAR_8 > VAR_0) {
  VAR_8 = VAR_0;
  VAR_11 = VAR_6;
  VAR_10 = VAR_6;
  FUNC_0(VAR_5,
   "clamping clock divider: divider requested, %u, is greater than largest possible divider, %u.\n",
   VAR_7, (1 << VAR_8) * VAR_9);
 } else {
  VAR_12 = (VAR_7 + (1 << VAR_8) - 1)
    >> VAR_8;
  VAR_11 = VAR_12 / 2;
  VAR_10 = VAR_12 - VAR_11;

  if (VAR_10)
   VAR_10--;

  if (VAR_11)
   VAR_11--;
 }


 return ((VAR_10 << VAR_2)
  & VAR_1)
   | ((VAR_11 << VAR_4)
      & VAR_3)
   | (VAR_8
      & VAR_0);
}
