
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct kobject {int dummy; } ;
struct attribute {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static umode_t FUNC_0(struct kobject *VAR_16, struct attribute *VAR_17,
         int VAR_18)
{
 if (VAR_13 && VAR_18 >= 8)
  return 0;
 if (VAR_14 &&
     (VAR_18 == 9 || VAR_18 == 12 || VAR_18 == 15))
  return 0;
 if (VAR_18 >= 0 && VAR_18 <= 1 &&
     !(VAR_15 & VAR_3))
  return 0;
 if (VAR_18 >= 2 && VAR_18 <= 3 &&
     !(VAR_15 & VAR_5))
  return 0;
 if (VAR_18 >= 4 && VAR_18 <= 5 &&
     !(VAR_15 & VAR_6))
  return 0;
 if (VAR_18 >= 6 && VAR_18 <= 7 &&
     !(VAR_15 & VAR_7))
  return 0;
 if (VAR_18 >= 8 && VAR_18 <= 9 &&
     !(VAR_15 & VAR_8))
  return 0;
 if (VAR_18 >= 10 && VAR_18 <= 11 &&
     !(VAR_15 & VAR_9))
  return 0;
 if (VAR_18 >= 12 && VAR_18 <= 13 &&
     !(VAR_15 & VAR_10))
  return 0;
 if (VAR_18 >= 14 && VAR_18 <= 15 &&
     !(VAR_15 & VAR_11))
  return 0;
 if (VAR_18 >= 16 && VAR_18 <= 17 &&
     !(VAR_15 & VAR_12))
  return 0;
 if (VAR_18 >= 18 && VAR_18 <= 19 &&
     !(VAR_15 & VAR_4))
  return 0;

 if (VAR_18 >= 20 && VAR_18 <= 22 &&
     !(VAR_15 & VAR_0))
  return 0;
 if (VAR_18 >= 23 && VAR_18 <= 25 &&
     !(VAR_15 & VAR_1))
  return 0;
 if (VAR_18 >= 26 && VAR_18 <= 28 &&
     !(VAR_15 & VAR_2))
  return 0;

 return VAR_17->mode;
}
