
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ caddr_t ;


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
FUNC_4(caddr_t VAR_7, caddr_t VAR_8, const char *VAR_9)
{
 int VAR_10;
 int VAR_11;
 char VAR_12[VAR_0];

 FUNC_1((void *)VAR_12, 0, VAR_0);
 FUNC_3(VAR_5, VAR_0, VAR_9);

 VAR_11 = 1;
 VAR_6++;
 if (VAR_8 == VAR_7) {
  VAR_10 = FUNC_3(VAR_12, VAR_0, "ok");
  VAR_4++;
  VAR_11 = 0;
 } else {
  VAR_10 = FUNC_3(VAR_12, VAR_0, "not ok");
  FUNC_3(VAR_1, VAR_0, " : Expected %#x, but got %#x",
      (unsigned int)VAR_7, (unsigned int)VAR_8);
  VAR_2++;
 }
 FUNC_3(VAR_12 + VAR_10, VAR_0 - VAR_10, " %d - %s (%s)",
     VAR_6, VAR_3, VAR_5);
 FUNC_2(VAR_12);
 if (VAR_11)
  FUNC_2(VAR_1);
 FUNC_2("\n");
 FUNC_0(((void*)0));
 FUNC_1((void *)VAR_1, 0, VAR_0);
 FUNC_1((void *)VAR_5, 0, VAR_0);
}
