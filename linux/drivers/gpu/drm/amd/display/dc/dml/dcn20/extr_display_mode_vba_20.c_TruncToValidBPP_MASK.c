
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum output_format_class { ____Placeholder_output_format_class } output_format_class ;
typedef enum output_encoder_class { ____Placeholder_output_encoder_class } output_encoder_class ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static unsigned int FUNC_1(
  double VAR_6,
  bool VAR_7,
  enum output_encoder_class VAR_8,
  enum output_format_class VAR_9,
  unsigned int VAR_10)
{
 if (VAR_8 == VAR_3) {
  if (VAR_9 == VAR_1) {
   if (VAR_6 >= 18)
    return 18;
   else if (VAR_6 >= 15)
    return 15;
   else if (VAR_6 >= 12)
    return 12;
   else
    return VAR_0;
  } else if (VAR_9 == VAR_2) {
   if (VAR_6 >= 36)
    return 36;
   else if (VAR_6 >= 30)
    return 30;
   else if (VAR_6 >= 24)
    return 24;
   else if (VAR_6 >= 18)
    return 18;
   else
    return VAR_0;
  } else {
   if (VAR_6 / 1.5 >= 24)
    return 24;
   else if (VAR_6 / 1.5 >= 20)
    return 20;
   else if (VAR_6 / 1.5 >= 16)
    return 16;
   else
    return VAR_0;
  }
 } else {
  if (VAR_7) {
   if (VAR_9 == VAR_1) {
    if (VAR_6 < 6)
     return VAR_0;
    else if (VAR_6 >= 1.5 * VAR_10 - 1 / 16)
     return 1.5 * VAR_10 - 1 / 16;
    else
     return FUNC_0(16 * VAR_6, 1) / 16;
   } else if (VAR_9 == VAR_4) {
    if (VAR_6 < 7)
     return VAR_0;
    else if (VAR_6 >= 2 * VAR_10 - 1 / 16)
     return 2 * VAR_10 - 1 / 16;
    else
     return FUNC_0(16 * VAR_6, 1) / 16;
   } else {
    if (VAR_6 < 8)
     return VAR_0;
    else if (VAR_6 >= 3 * VAR_10 - 1 / 16)
     return 3 * VAR_10 - 1 / 16;
    else
     return FUNC_0(16 * VAR_6, 1) / 16;
   }
  } else if (VAR_9 == VAR_1) {
   if (VAR_6 >= 18)
    return 18;
   else if (VAR_6 >= 15)
    return 15;
   else if (VAR_6 >= 12)
    return 12;
   else
    return VAR_0;
  } else if (VAR_9 == VAR_5 || VAR_9 == VAR_4) {
   if (VAR_6 >= 24)
    return 24;
   else if (VAR_6 >= 20)
    return 20;
   else if (VAR_6 >= 16)
    return 16;
   else
    return VAR_0;
  } else {
   if (VAR_6 >= 36)
    return 36;
   else if (VAR_6 >= 30)
    return 30;
   else if (VAR_6 >= 24)
    return 24;
   else if (VAR_6 >= 18)
    return 18;
   else
    return VAR_0;
  }
 }
}
