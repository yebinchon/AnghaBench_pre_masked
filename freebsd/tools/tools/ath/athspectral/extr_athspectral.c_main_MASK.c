
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spectralhandler {int dummy; } ;
typedef int spectral ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct spectralhandler*,int ,int) ;
 int FUNC_3 (struct spectralhandler*) ;
 int FUNC_4 (struct spectralhandler*,int ) ;
 int FUNC_5 (struct spectralhandler*) ;
 scalar_t__ FUNC_6 (struct spectralhandler*,char const*) ;
 scalar_t__ FUNC_7 (struct spectralhandler*,char*,char*) ;
 int FUNC_8 (struct spectralhandler*) ;
 int FUNC_9 (struct spectralhandler*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char const*) ;

int
FUNC_13(int VAR_1, char *VAR_2[])
{
 struct spectralhandler VAR_3;
 const char *VAR_4 = VAR_0;
 const char *VAR_5 = VAR_2[0];

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));


 if (VAR_1 >= 2 && FUNC_11(VAR_2[1], "-h") == 0) {
  FUNC_12(VAR_5);
  FUNC_1(0);
 }
 if (VAR_1 >= 2 && FUNC_11(VAR_2[1], "-?") == 0) {
  FUNC_12(VAR_5);
  FUNC_1(0);
 }

 if (VAR_1 >= 2 && FUNC_11(VAR_2[1], "-i") == 0) {
  if (VAR_1 == 2) {
   FUNC_12(VAR_5);
   FUNC_1(127);
  }
  VAR_4 = VAR_2[2];
  VAR_1 -= 2; VAR_2 += 2;
 }


 if (VAR_1 == 1) {
  FUNC_12(VAR_5);
  FUNC_1(127);
 }

 if (FUNC_6(&VAR_3, VAR_4) == 0)
  FUNC_1(127);

 if (FUNC_10(VAR_2[1], "get") == 0) {
  FUNC_5(&VAR_3);
 } else if (FUNC_10(VAR_2[1], "set") == 0) {
  if (VAR_1 < 4) {
   FUNC_12(VAR_5);
   FUNC_1(127);
  }
  if (FUNC_7(&VAR_3, VAR_2[2], VAR_2[3]) == 0) {
   FUNC_12(VAR_5);
   FUNC_1(127);
  }
 } else if (FUNC_10(VAR_2[1], "start") == 0) {
  FUNC_8(&VAR_3);
 } else if (FUNC_10(VAR_2[1], "stop") == 0) {
  FUNC_9(&VAR_3);
 } else if (FUNC_10(VAR_2[1], "enable_at_reset") == 0) {
  if (VAR_1 < 3) {
   FUNC_12(VAR_5);
   FUNC_1(127);
  }
  FUNC_4(&VAR_3, FUNC_0(VAR_2[2]));
 } else {
  FUNC_12(VAR_5);
  FUNC_1(127);
 }


 FUNC_3(&VAR_3);
 FUNC_1(0);
}
