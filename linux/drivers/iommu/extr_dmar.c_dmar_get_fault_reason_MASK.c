
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const** VAR_3 ;
 char const** VAR_4 ;
 char const** VAR_5 ;

__attribute__((used)) static const char *FUNC_1(u8 VAR_6, int *VAR_7)
{
 if (VAR_6 >= 0x20 && (VAR_6 - 0x20 <
     FUNC_0(VAR_5))) {
  *VAR_7 = VAR_1;
  return VAR_5[VAR_6 - 0x20];
 } else if (VAR_6 >= 0x30 && (VAR_6 - 0x30 <
   FUNC_0(VAR_4))) {
  *VAR_7 = VAR_0;
  return VAR_4[VAR_6 - 0x30];
 } else if (VAR_6 < FUNC_0(VAR_3)) {
  *VAR_7 = VAR_0;
  return VAR_3[VAR_6];
 } else {
  *VAR_7 = VAR_2;
  return "Unknown";
 }
}
