
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

uint32_t FUNC_0(int VAR_13)
{
 uint32_t VAR_14;


 if (VAR_13 < VAR_6) {
  if (VAR_13 < VAR_4)
   VAR_14 = VAR_0;
  else
   VAR_14 = VAR_0
    + (VAR_13 - VAR_4)
     / VAR_5;
 } else if (VAR_13 < VAR_8) {
  VAR_14 = VAR_1
    + (VAR_13 - VAR_6)
     / VAR_7;
 } else if (VAR_13 < VAR_10) {
  VAR_14 = VAR_2
    + (VAR_13 - VAR_8)
     / VAR_9;
 } else {
  VAR_14 = VAR_3
    + (VAR_13 - VAR_10)
     / VAR_11;
  if (VAR_14 > VAR_12)
   VAR_14 = VAR_12;
 }

 return VAR_14;
}
