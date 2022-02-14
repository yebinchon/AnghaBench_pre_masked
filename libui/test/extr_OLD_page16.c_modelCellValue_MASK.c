
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiTableModelHandler ;
typedef int uiTableModel ;


 int* VAR_0 ;
 void** VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 void* FUNC_2 (double,double,double,int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void *FUNC_5(uiTableModelHandler *VAR_4, uiTableModel *VAR_5, int VAR_6, int VAR_7)
{
 char VAR_8[256];

 if (VAR_7 == 3) {
  if (VAR_6 == VAR_3)
   return FUNC_2(1, 1, 0, 1);
  if (VAR_6 == 3)
   return FUNC_2(1, 0, 0, 1);
  if (VAR_6 == 11)
   return FUNC_2(0, 0.5, 1, 0.5);
  return ((void*)0);
 }
 if (VAR_7 == 4) {
  if ((VAR_6 % 2) == 1)
   return FUNC_2(0.5, 0, 0.75, 1);
  return ((void*)0);
 }
 if (VAR_7 == 5) {
  if (VAR_6 < 8)
   return VAR_1[0];
  return VAR_1[1];
 }
 if (VAR_7 == 7)
  return FUNC_3(VAR_0[VAR_6]);
 if (VAR_7 == 8) {
  if (VAR_6 == 0)
   return FUNC_3(0);
  if (VAR_6 == 13)
   return FUNC_3(100);
  if (VAR_6 == 14)
   return FUNC_3(-1);
  return FUNC_3(50);
 }
 switch (VAR_7) {
 case 0:
  FUNC_0(VAR_8, "Row %d", VAR_6);
  break;
 case 2:
  if (VAR_6 == 9)
   return FUNC_4(VAR_2);

 case 1:
  FUNC_1(VAR_8, "Part");
  break;
 case 6:
  FUNC_1(VAR_8, "Make Yellow");
  break;
 }
 return FUNC_4(VAR_8);
}
