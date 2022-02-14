
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radarhandler {int dummy; } ;
typedef int radar ;


 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct radarhandler*,int ,int) ;
 int FUNC_2 (struct radarhandler*) ;
 int FUNC_3 (struct radarhandler*) ;
 scalar_t__ FUNC_4 (struct radarhandler*,char const*) ;
 scalar_t__ FUNC_5 (struct radarhandler*,char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char const*) ;

int
FUNC_9(int VAR_1, char *VAR_2[])
{
 struct radarhandler VAR_3;
 const char *VAR_4 = VAR_0;
 const char *VAR_5 = VAR_2[0];

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));


 if (VAR_1 >= 2 && FUNC_7(VAR_2[1], "-h") == 0) {
  FUNC_8(VAR_5);
  FUNC_0(0);
 }
 if (VAR_1 >= 2 && FUNC_7(VAR_2[1], "-?") == 0) {
  FUNC_8(VAR_5);
  FUNC_0(0);
 }

 if (VAR_1 >= 2 && FUNC_7(VAR_2[1], "-i") == 0) {
  if (VAR_1 == 2) {
   FUNC_8(VAR_5);
   FUNC_0(127);
  }
  VAR_4 = VAR_2[2];
  VAR_1 -= 2; VAR_2 += 2;
 }


 if (VAR_1 == 1) {
  FUNC_8(VAR_5);
  FUNC_0(127);
 }

 if (FUNC_4(&VAR_3, VAR_4) == 0)
  FUNC_0(127);

 if (FUNC_6(VAR_2[1], "get") == 0) {
  FUNC_3(&VAR_3);
 } else if (FUNC_6(VAR_2[1], "set") == 0) {
  if (VAR_1 < 4) {
   FUNC_8(VAR_5);
   FUNC_0(127);
  }
  if (FUNC_5(&VAR_3, VAR_2[2], VAR_2[3]) == 0) {
   FUNC_8(VAR_5);
   FUNC_0(127);
  }
 } else {
  FUNC_8(VAR_5);
  FUNC_0(127);
 }


 FUNC_2(&VAR_3);
 FUNC_0(0);
}
