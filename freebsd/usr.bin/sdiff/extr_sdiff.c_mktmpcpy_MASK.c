
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct stat {int st_mode; } ;
typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char**,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,struct stat*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*,int ,int ) ;
 int FUNC_8 (int,int *,int) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int VAR_5 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (int,int *,size_t) ;

__attribute__((used)) static char *
FUNC_13(const char *VAR_6)
{
 struct stat VAR_7;
 ssize_t VAR_8;
 int VAR_9, VAR_10;
 u_char VAR_11[VAR_0];
 char *VAR_12;


 VAR_9 = FUNC_7(VAR_6, VAR_2, 0);

 if (VAR_9 != -1) {
  if (FUNC_5(VAR_9, &VAR_7) == -1)
   FUNC_3(2, "error getting file status from %s", VAR_6);


  if (FUNC_0(VAR_7.st_mode)) {
   FUNC_2(VAR_9);
   return (((void*)0));
  }
 } else {

  if (VAR_4 == VAR_1 && FUNC_9(VAR_6, "-") == 0)
   VAR_9 = VAR_3;
  else
   FUNC_3(2, "error opening %s", VAR_6);
 }


 if (FUNC_1(&VAR_12, "%d/sdiff.XXXXXXXXXX", VAR_5) == -1)
  FUNC_3(2, "asprintf");
 if ((VAR_10 = FUNC_6(VAR_12)) == -1) {
  FUNC_11("error opening %s", VAR_12);
  goto FAIL;
 }
 while ((VAR_8 = FUNC_8(VAR_9, VAR_11, sizeof(VAR_11))) != -1 &&
     VAR_8 != 0) {
  ssize_t VAR_13;

  VAR_13 = FUNC_12(VAR_10, VAR_11, (size_t)VAR_8);
  if (-1 == VAR_13 || VAR_8 != VAR_13) {
   FUNC_11("error writing to %s", VAR_12);
   goto FAIL;
  }
 }
 if (VAR_8 == -1) {
  FUNC_11("error reading from %s", VAR_6);
  goto FAIL;
 }

 FUNC_2(VAR_9);
 FUNC_2(VAR_10);

 return (VAR_12);

FAIL:
 FUNC_10(VAR_12);
 FUNC_4(2);
}
