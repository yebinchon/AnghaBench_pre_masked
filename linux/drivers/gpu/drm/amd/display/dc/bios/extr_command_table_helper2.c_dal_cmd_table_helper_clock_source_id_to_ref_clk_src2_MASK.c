
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

bool FUNC_1(
 enum clock_source_id VAR_4,
 uint32_t *VAR_5)
{
 if (VAR_5 == ((void*)0)) {
  FUNC_0();
  return 0;
 }

 switch (VAR_4) {
 case 130:
  *VAR_5 = VAR_2;
  return 1;
 case 129:
  *VAR_5 = VAR_3;
  return 1;




 case 131:
  *VAR_5 = VAR_0;
  return 1;
 case 128:
  *VAR_5 = VAR_1;
  return 1;
 default:

  FUNC_0();
  return 0;
 }
}
