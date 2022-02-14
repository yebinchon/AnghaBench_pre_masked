
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_zstate {int dummy; } ;
typedef int code_int ;
typedef int char_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int,int,int ) ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static code_int
FUNC_2(struct s_zstate *VAR_12)
{
 code_int VAR_13;
 int VAR_14, VAR_15;
 char_type *VAR_16;

 VAR_16 = VAR_4;
 if (VAR_1 > 0 || VAR_10 >= VAR_11 || VAR_3 > VAR_6) {





  if (VAR_3 > VAR_6) {
   VAR_8++;
   if (VAR_8 == VAR_5)
    VAR_6 = VAR_7;
   else
    VAR_6 = FUNC_0(VAR_8);
  }
  if (VAR_1 > 0) {
   VAR_6 = FUNC_0(VAR_8 = VAR_0);
   VAR_1 = 0;
  }
  VAR_11 = FUNC_1(VAR_4, 1, VAR_8, VAR_2);
  if (VAR_11 <= 0)
   return (-1);
  VAR_10 = 0;

  VAR_11 = (VAR_11 << 3) - (VAR_8 - 1);
 }
 VAR_14 = VAR_10;
 VAR_15 = VAR_8;


 VAR_16 += (VAR_14 >> 3);
 VAR_14 &= 7;


 VAR_13 = (*VAR_16++ >> VAR_14);
 VAR_15 -= (8 - VAR_14);
 VAR_14 = 8 - VAR_14;


 if (VAR_15 >= 8) {
  VAR_13 |= *VAR_16++ << VAR_14;
  VAR_14 += 8;
  VAR_15 -= 8;
 }


 VAR_13 |= (*VAR_16 & VAR_9[VAR_15]) << VAR_14;
 VAR_10 += VAR_8;

 return (VAR_13);
}
