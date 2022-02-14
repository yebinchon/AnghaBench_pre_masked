
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
__attribute__((used)) static bool FUNC_0(
 enum clock_source_id VAR_5,
 uint32_t *VAR_6)
{
 bool VAR_7 = 1;

 if (VAR_6 != ((void*)0))
  switch (VAR_5) {
  case 132:
   *VAR_6 = VAR_1;
   break;
  case 131:
   *VAR_6 = VAR_2;
   break;
  case 130:
   *VAR_6 = VAR_3;
   break;
  case 133:
   *VAR_6 = VAR_4;
   break;
  case 135:
   *VAR_6 = VAR_0;
   break;
  case 128:



   *VAR_6 = VAR_4;
   break;
  case 134:

   *VAR_6 = VAR_4;
   break;
  case 129:

   *VAR_6 = VAR_4;
   VAR_7 = 0;
   break;
  default:
   VAR_7 = 0;
   break;
  }

 return VAR_7;
}
