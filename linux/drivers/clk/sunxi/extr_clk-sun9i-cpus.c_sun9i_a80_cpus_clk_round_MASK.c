
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static long FUNC_1(unsigned long VAR_1, u8 *VAR_2, u8 *VAR_3,
         u8 VAR_4, unsigned long VAR_5)
{
 u8 VAR_6, VAR_7 = 1;





 if (VAR_5 && VAR_1 > VAR_5)
  VAR_1 = VAR_5;

 VAR_6 = FUNC_0(VAR_5, VAR_1);


 if (VAR_4 == VAR_0 && VAR_6 > 4) {

  if (VAR_6 < 32) {
   VAR_7 = VAR_6;
   VAR_6 = 1;
  } else if (VAR_6 < 64) {
   VAR_7 = FUNC_0(VAR_6, 2);
   VAR_6 = 2;
  } else if (VAR_6 < 96) {
   VAR_7 = FUNC_0(VAR_6, 3);
   VAR_6 = 3;
  } else {
   VAR_7 = FUNC_0(VAR_6, 4);
   VAR_6 = 4;
  }
 }


 if (VAR_2) {
  *VAR_2 = VAR_6 - 1;
  *VAR_3 = VAR_7 - 1;
 }

 return VAR_5 / VAR_7 / VAR_6;
}
