
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ dev_t ;
typedef int bakname ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned char) ;
 int FUNC_5 (char*,char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*,char const*,char*) ;
 scalar_t__* VAR_7 ;
 scalar_t__ FUNC_8 (char const*,struct stat*) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (char*) ;
 char* FUNC_12 (char*,char) ;
 char FUNC_13 (unsigned char) ;
 int FUNC_14 (char const*) ;

int
FUNC_15(const char *VAR_8)
{
 struct stat VAR_9;
 char VAR_10[VAR_1], *VAR_11, *VAR_12;
 dev_t VAR_13;
 ino_t VAR_14;

 if (VAR_2 == VAR_5 || FUNC_8(VAR_8, &VAR_9) != 0)
  return 0;





 if ((VAR_6 && *VAR_6 == 0) || *VAR_7 == 0) {
  FUNC_14(VAR_8);
  return 0;
 }
 VAR_13 = VAR_9.st_dev;
 VAR_14 = VAR_9.st_ino;

 if (VAR_6) {
  if (FUNC_10(VAR_10, VAR_6, sizeof(VAR_10)) >= sizeof(VAR_10) ||
      FUNC_9(VAR_10, VAR_8, sizeof(VAR_10)) >= sizeof(VAR_10))
   FUNC_1("filename %s too long for buffer\n", VAR_6);
 } else {
  if ((VAR_11 = FUNC_2(VAR_8)) == ((void*)0))
   FUNC_1("out of memory\n");
  if (FUNC_10(VAR_10, VAR_11, sizeof(VAR_10)) >= sizeof(VAR_10))
   FUNC_1("filename %s too long for buffer\n", VAR_11);
  FUNC_3(VAR_11);
 }

 if ((VAR_12 = FUNC_12(VAR_10, '/')) != ((void*)0))
  VAR_12 = VAR_12 + 1;
 else
  VAR_12 = VAR_10;






 while (FUNC_8(VAR_10, &VAR_9) == 0 &&
     VAR_13 == VAR_9.st_dev && VAR_14 == VAR_9.st_ino) {

  for (VAR_11 = VAR_12; *VAR_11 && !FUNC_4((unsigned char)*VAR_11); VAR_11++)
   ;
  if (*VAR_11)
   *VAR_11 = FUNC_13((unsigned char)*VAR_11);
  else
   FUNC_5(VAR_12, VAR_12 + 1,
       FUNC_11(VAR_12 + 1) + 1);
 }




 if (FUNC_6(VAR_8, VAR_10) < 0) {
  if (VAR_4 != VAR_0 || FUNC_0(VAR_8, VAR_10) < 0)
   return -1;
 }
 return 0;
}
