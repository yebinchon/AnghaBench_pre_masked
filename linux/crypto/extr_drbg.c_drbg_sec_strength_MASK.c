
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int drbg_flag_t ;





 int VAR_0 ;

__attribute__((used)) static inline unsigned short FUNC_0(drbg_flag_t VAR_1)
{
 switch (VAR_1 & VAR_0) {
 case 130:
  return 16;
 case 129:
  return 24;
 case 128:
  return 32;
 default:
  return 32;
 }
}
