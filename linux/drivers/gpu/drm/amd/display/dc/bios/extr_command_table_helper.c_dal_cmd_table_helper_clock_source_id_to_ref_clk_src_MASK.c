
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;


 int FUNC_0 () ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

bool FUNC_1(
 enum clock_source_id VAR_5,
 uint32_t *VAR_6)
{
 if (VAR_6 == ((void*)0)) {
  FUNC_0();
  return 0;
 }

 switch (VAR_5) {
 case 130:
  *VAR_6 = VAR_3;
  return 1;
 case 129:
  *VAR_6 = VAR_4;
  return 1;
 case 132:
  *VAR_6 = VAR_0;
  return 1;
 case 131:
  *VAR_6 = VAR_1;
  return 1;
 case 128:
  *VAR_6 = VAR_2;
  return 1;
 default:

  FUNC_0();
  return 0;
 }
}
