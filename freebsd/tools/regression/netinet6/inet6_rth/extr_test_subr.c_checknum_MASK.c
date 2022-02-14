
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char const*,...) ;

void
FUNC_4(int VAR_7, int VAR_8, int VAR_9, const char *VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 char VAR_14[VAR_0];

 FUNC_1((void *)VAR_14, 0, VAR_0);
 FUNC_3(VAR_5, VAR_0, VAR_10);

 VAR_13 = 1;
 VAR_12 = 0;
 VAR_6++;
 switch(VAR_9) {
 case 0:
  VAR_12 = (VAR_8 == VAR_7) ? 1 : 0;
  break;
 case 1:
  VAR_12 = (VAR_8 > VAR_7) ? 1 : 0;
  break;
 case -1:
  VAR_12 = (VAR_8 < VAR_7) ? 1 : 0;
  break;
 }
 if (VAR_12 != 0) {
  VAR_11 = FUNC_3(VAR_14, VAR_0, "ok");
  VAR_4++;
  VAR_13 = 0;
 } else {
  VAR_11 = FUNC_3(VAR_14, VAR_0, "not ok");
  FUNC_3(VAR_1, VAR_0,
      " : Expected %d, but got %d", VAR_7, VAR_8);
  VAR_2++;
 }
 FUNC_3(VAR_14 + VAR_11, VAR_0 - VAR_11, " %d - %s (%s)",
     VAR_6, VAR_3, VAR_5);
 FUNC_2(VAR_14);
 if (VAR_13)
  FUNC_2(VAR_1);
 FUNC_2("\n");
 FUNC_0(((void*)0));
 FUNC_1((void *)VAR_1, 0, VAR_0);
 FUNC_1((void *)VAR_5, 0, VAR_0);
}
