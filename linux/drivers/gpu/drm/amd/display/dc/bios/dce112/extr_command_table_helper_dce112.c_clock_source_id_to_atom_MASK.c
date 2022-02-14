
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;


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
__attribute__((used)) static bool FUNC_0(
 enum clock_source_id VAR_10,
 uint32_t *VAR_11)
{
 bool VAR_12 = 1;

 if (VAR_11 != ((void*)0))
  switch (VAR_10) {
  case 137:
   *VAR_11 = VAR_0;
   break;
  case 136:
   *VAR_11 = VAR_1;
   break;
  case 135:
   *VAR_11 = VAR_2;
   break;
  case 134:
   *VAR_11 = VAR_3;
   break;
  case 133:
   *VAR_11 = VAR_4;
   break;
  case 132:
   *VAR_11 = VAR_5;
   break;
  case 138:
   *VAR_11 = VAR_8;
   break;
  case 131:
   *VAR_11 = VAR_7;
   break;
  case 128:
   *VAR_11 = VAR_6;
   break;
  case 130:
   *VAR_11 = VAR_6;
   break;
  case 129:

   *VAR_11 = VAR_9;
   VAR_12 = 0;
   break;
  default:
   VAR_12 = 0;
   break;
  }

 return VAR_12;
}
