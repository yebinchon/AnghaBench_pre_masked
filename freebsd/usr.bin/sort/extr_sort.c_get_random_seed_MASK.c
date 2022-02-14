
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; scalar_t__ st_dev; scalar_t__ st_ino; int st_mode; } ;
typedef int ssize_t ;
typedef int randseed ;
typedef int off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (int,struct stat*) ;
 scalar_t__ FUNC_8 (char*,int) ;
 int VAR_5 ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char const*,int) ;
 int FUNC_11 (int,char*,int) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;

__attribute__((used)) static void
FUNC_13(const char *VAR_6)
{
 char VAR_7[32];
 struct stat VAR_8, VAR_9;
 ssize_t VAR_10;
 int VAR_11;

 VAR_11 = -1;
 VAR_10 = sizeof(VAR_7);

 if (VAR_6 == ((void*)0)) {
  if (FUNC_8(VAR_7, sizeof(VAR_7)) < 0)
   FUNC_5(VAR_1, "getentropy");
  goto out;
 }

 VAR_11 = FUNC_10(VAR_6, VAR_4 | VAR_3);
 if (VAR_11 < 0)
  FUNC_5(VAR_0, "open: %s", VAR_6);

 if (FUNC_7(VAR_11, &VAR_8) != 0)
  FUNC_5(VAR_1, "fstat");

 if (!FUNC_3(VAR_8.st_mode) && !FUNC_2(VAR_8.st_mode))
  FUNC_5(VAR_2,
      "random seed isn't a regular file or /dev/random");





 if (FUNC_3(VAR_8.st_mode)) {
  if (VAR_8.st_size > (off_t)sizeof(VAR_7))
   FUNC_6(VAR_2, "random seed is too large (%jd >"
       " %zu)!", (intmax_t)VAR_8.st_size,
       sizeof(VAR_7));
  else if (VAR_8.st_size < 1)
   FUNC_6(VAR_2, "random seed is too small ("
       "0 bytes)");

  FUNC_9(VAR_7, 0, sizeof(VAR_7));

  VAR_10 = FUNC_11(VAR_11, VAR_7, VAR_8.st_size);
  if (VAR_10 < 0)
   FUNC_5(VAR_1, "reading random seed file %s",
       VAR_6);
  if (VAR_10 < (ssize_t)VAR_8.st_size)
   FUNC_6(VAR_1, "short read from %s", VAR_6);
 } else if (FUNC_2(VAR_8.st_mode)) {
  if (FUNC_12("/dev/random", &VAR_9) < 0)
   FUNC_5(VAR_1, "stat");

  if (VAR_8.st_dev != VAR_9.st_dev ||
      VAR_8.st_ino != VAR_9.st_ino)
   FUNC_6(VAR_2, "random seed is a character "
       "device other than /dev/random");

  if (FUNC_8(VAR_7, sizeof(VAR_7)) < 0)
   FUNC_5(VAR_1, "getentropy");
 }

out:
 if (VAR_11 >= 0)
  FUNC_4(VAR_11);

 FUNC_0(&VAR_5);
 FUNC_1(&VAR_5, VAR_7, VAR_10);
}
