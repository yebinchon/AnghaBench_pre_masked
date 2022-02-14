
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct s_zstate {int dummy; } ;
typedef int code_int ;
typedef int char_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int*,int,int,int ) ;
 int* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;

__attribute__((used)) static int
FUNC_2(struct s_zstate *VAR_13, code_int VAR_14)
{
 int VAR_15;
 u_int VAR_16;
 char_type *VAR_17;

 VAR_15 = VAR_11;
 VAR_16 = VAR_10;
 VAR_17 = VAR_1;
 if (VAR_14 >= 0) {

  VAR_17 += (VAR_15 >> 3);
  VAR_15 &= 7;




  *VAR_17 = (*VAR_17 & VAR_12[VAR_15]) | ((VAR_14 << VAR_15) & VAR_6[VAR_15]);
  VAR_17++;
  VAR_16 -= (8 - VAR_15);
  VAR_14 >>= 8 - VAR_15;

  if (VAR_16 >= 8) {
   *VAR_17++ = VAR_14;
   VAR_14 >>= 8;
   VAR_16 -= 8;
  }

  if (VAR_16)
   *VAR_17 = VAR_14;
  VAR_11 += VAR_10;
  if (VAR_11 == (VAR_10 << 3)) {
   VAR_17 = VAR_1;
   VAR_16 = VAR_10;
   VAR_2 += VAR_16;
   if (FUNC_1(VAR_17, sizeof(char), VAR_16, VAR_4) != VAR_16)
    return (-1);
   VAR_17 += VAR_16;
   VAR_16 = 0;
   VAR_11 = 0;
  }




  if (VAR_5 > VAR_8 || (VAR_3 > 0)) {




   if (VAR_11 > 0) {
    if (FUNC_1(VAR_1, 1, VAR_10, VAR_4) != VAR_10)
     return (-1);
    VAR_2 += VAR_10;
   }
   VAR_11 = 0;

   if (VAR_3) {
    VAR_8 = FUNC_0(VAR_10 = VAR_0);
    VAR_3 = 0;
   } else {
    VAR_10++;
    if (VAR_10 == VAR_7)
     VAR_8 = VAR_9;
    else
     VAR_8 = FUNC_0(VAR_10);
   }
  }
 } else {

  if (VAR_11 > 0) {
   VAR_11 = (VAR_11 + 7) / 8;
   if (FUNC_1(VAR_1, 1, VAR_11, VAR_4) != VAR_11)
    return (-1);
   VAR_2 += VAR_11;
  }
  VAR_11 = 0;
 }
 return (0);
}
