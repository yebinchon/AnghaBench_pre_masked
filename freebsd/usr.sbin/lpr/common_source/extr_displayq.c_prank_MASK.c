
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rline ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,char*,int,...) ;
 scalar_t__ FUNC_2 (char*) ;

void
FUNC_3(int VAR_1)
{
 char VAR_2[100];
 static const char *VAR_3[] = {
  "th", "st", "nd", "rd", "th", "th", "th", "th", "th", "th"
 };

 if (VAR_1 == 0) {
  FUNC_0("active");
  VAR_0 += 6;
  return;
 }
 if ((VAR_1/10)%10 == 1)
  (void)FUNC_1(VAR_2, sizeof(VAR_2), "%dth", VAR_1);
 else
  (void)FUNC_1(VAR_2, sizeof(VAR_2), "%d%s", VAR_1, VAR_3[VAR_1%10]);
 VAR_0 += FUNC_2(VAR_2);
 FUNC_0("%s", VAR_2);
}
