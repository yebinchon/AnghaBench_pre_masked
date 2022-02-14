
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(enum scan_mode VAR_4, int VAR_5, int VAR_6, int VAR_7,
    int VAR_8, int VAR_9)
{
 u_int VAR_10;
 int VAR_11;

 VAR_10 = (u_int)(VAR_3 - VAR_6);
 VAR_11 = VAR_8;







 if (VAR_4 == VAR_0 && VAR_5) {
  if (VAR_10 < VAR_2 && VAR_7 >= VAR_11 &&
      VAR_11 < VAR_9) {
   VAR_11 = FUNC_0(VAR_11 << 1, VAR_9);
  }
  return (VAR_11);
 }





 if (VAR_4 != VAR_1)
  return (VAR_11);


 if (VAR_10 < VAR_2)
  return (VAR_11);





 if (VAR_5) {
  VAR_11 = VAR_7 * VAR_2 / VAR_10;
  if (VAR_11 <= 0)
   VAR_11 = 1;
  else if (VAR_11 > VAR_9)
   VAR_11 = VAR_9;
 } else {
  VAR_11 = 1;
 }
 return (VAR_11);
}
