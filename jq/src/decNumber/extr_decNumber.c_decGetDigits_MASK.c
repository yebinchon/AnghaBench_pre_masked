
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uInt ;
typedef int Unit ;
typedef int LI ;
typedef int Int ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static Int FUNC_1(Unit *VAR_2, Int VAR_3) {
  Unit *VAR_4=VAR_2+(VAR_3-1);
  Int VAR_5=(VAR_3-1)*VAR_0+1;
  for (; VAR_4>=VAR_2; VAR_4--) {
    if (*VAR_4==0) {
      if (VAR_5==1) break;
      VAR_5-=VAR_0;
      continue;}
    break;
    }
  return VAR_5;
  }
