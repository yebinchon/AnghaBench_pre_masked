
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int dummy; } ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,char*,char*,char*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (struct timeval*,int ,int) ;
 int FUNC_8 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_9 (char*,int,char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(int VAR_5, char **VAR_6)
{
 char *VAR_7;
 char *VAR_8, *VAR_9;
 int VAR_10, VAR_11;


 if (VAR_5 < 3)
  return (VAR_2);
 VAR_8 = VAR_6[1];
 VAR_9 = VAR_6[2];


 for (VAR_11 = 1, VAR_10 = 3; VAR_10 < VAR_5; VAR_10++)
  VAR_11 += FUNC_10(VAR_6[VAR_10]) + 1;
 if ((VAR_7 = FUNC_6(VAR_11)) == ((void*)0)) {
  FUNC_11("malloc");
  return (VAR_0);
 }
 for (*VAR_7 = '\0', VAR_10 = 3; VAR_10 < VAR_5; VAR_10++) {
  FUNC_9(VAR_7 + FUNC_10(VAR_7),
      VAR_11 - FUNC_10(VAR_7), " %s", VAR_6[VAR_10]);
 }


 if (FUNC_3(VAR_4, VAR_8, "%s%s", VAR_9, VAR_7) < 0) {
  FUNC_5(VAR_7);
  FUNC_11("send msg");
  return (VAR_0);
 }
 FUNC_5(VAR_7);


 {
  struct timeval VAR_12;
  fd_set VAR_13;

  FUNC_1(&VAR_13);
  FUNC_0(VAR_4, &VAR_13);
  FUNC_7(&VAR_12, 0, sizeof(VAR_12));
  switch (FUNC_8(VAR_4 + 1, &VAR_13, ((void*)0), ((void*)0), &VAR_12)) {
  case -1:
   FUNC_4(VAR_3, "select");
  case 0:
   break;
  default:
   FUNC_2();
   break;
  }
 }


 return (VAR_1);
}
