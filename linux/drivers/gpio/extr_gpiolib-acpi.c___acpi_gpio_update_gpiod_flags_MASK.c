
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(enum gpiod_flags *VAR_4, enum gpiod_flags VAR_5)
{
 const enum gpiod_flags VAR_6 =
  VAR_2 | VAR_1 |
  VAR_3;
 int VAR_7 = 0;






 if (VAR_5 & VAR_2) {
  enum gpiod_flags VAR_8 = *VAR_4 ^ VAR_5;
  if (((*VAR_4 & VAR_2) && (VAR_8 & VAR_1)) ||
      ((*VAR_4 & VAR_1) && (VAR_8 & VAR_3)))
   VAR_7 = -VAR_0;
  *VAR_4 = (*VAR_4 & ~VAR_6) | (VAR_5 & VAR_6);
 }
 return VAR_7;
}
