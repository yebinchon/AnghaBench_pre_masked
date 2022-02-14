
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct stat {int st_mode; int st_flags; } ;
struct dirent {char* d_name; } ;
typedef int ssize_t ;
typedef int mode_t ;
typedef int lnk ;
typedef int gid_t ;
typedef int copybuf ;
typedef int DIR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int,char const*,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int,char const*,int ,int ,int ) ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int,char*,struct stat*,int ) ;
 scalar_t__ FUNC_11 (int,char const*,int) ;
 int FUNC_12 (int,char const*,int,...) ;
 int FUNC_13 (int,char*,int) ;
 struct dirent* FUNC_14 (int *) ;
 int FUNC_15 (int,char*,char*,int) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (char*,char*,int) ;
 int FUNC_18 (char*,int,char*) ;
 int FUNC_19 (char*,char const*) ;
 int FUNC_20 (int,char*,int ) ;

void
FUNC_21(int VAR_10, char const * VAR_11, int VAR_12, mode_t VAR_13, uid_t VAR_14,
    gid_t VAR_15, int VAR_16)
{
 char *VAR_17, VAR_18[VAR_2], VAR_19[4096];
 int VAR_20, VAR_21, VAR_22, VAR_23;
 ssize_t VAR_24;
 struct stat VAR_25;
 struct dirent *VAR_26;
 DIR *VAR_27;

 if (*VAR_11 == '/')
  VAR_11++;

 if (FUNC_11(VAR_10, VAR_11, VAR_13) != 0 && VAR_9 != VAR_1) {
  FUNC_19("mkdir(%s)", VAR_11);
  return;
 }
 FUNC_8(VAR_10, VAR_11, VAR_14, VAR_15, VAR_0);
 if (VAR_16 > 0)
  FUNC_3(VAR_10, VAR_11, VAR_16, VAR_0);

 if (VAR_12 == -1)
  return;

 VAR_21 = FUNC_12(VAR_10, VAR_11, VAR_4);
 if ((VAR_27 = FUNC_9(VAR_12)) == ((void*)0)) {
  FUNC_4(VAR_12);
  FUNC_4(VAR_21);
  return;
 }

 while ((VAR_26 = FUNC_14(VAR_27)) != ((void*)0)) {
  if (FUNC_16(VAR_26->d_name, ".") == 0 || FUNC_16(VAR_26->d_name, "..") == 0)
   continue;

  VAR_17 = VAR_26->d_name;
  if (FUNC_10(VAR_12, VAR_17, &VAR_25, VAR_0) == -1)
   continue;

  if (FUNC_17(VAR_17, "dot.", 4) == 0)
   VAR_17 += 3;

  if (FUNC_0(VAR_25.st_mode)) {
   FUNC_21(VAR_21, VAR_17, FUNC_12(VAR_12, VAR_26->d_name, VAR_4),
       VAR_25.st_mode & VAR_8, VAR_14, VAR_15, VAR_25.st_flags);
   continue;
  }

  if (FUNC_1(VAR_25.st_mode) &&
      (VAR_20 = FUNC_15(VAR_12, VAR_26->d_name, VAR_18, sizeof(VAR_18) -1))
      != -1) {
   VAR_18[VAR_20] = '\0';
   FUNC_18(VAR_18, VAR_21, VAR_17);
   FUNC_8(VAR_21, VAR_17, VAR_14, VAR_15, VAR_0);
   continue;
  }

  if (!FUNC_2(VAR_25.st_mode))
   continue;

  if ((VAR_22 = FUNC_12(VAR_12, VAR_26->d_name, VAR_6)) == -1)
   continue;
  VAR_23 = FUNC_12(VAR_21, VAR_17, VAR_7 | VAR_3 | VAR_5,
      VAR_25.st_mode);
  if (VAR_23 == -1) {
   FUNC_4(VAR_22);
   continue;
  }

  while ((VAR_24 = FUNC_13(VAR_22, VAR_19, sizeof(VAR_19))) > 0)
   FUNC_20(VAR_23, VAR_19, VAR_24);

  FUNC_4(VAR_22);



  FUNC_7(VAR_23, VAR_14, VAR_15);
  FUNC_6(VAR_23, VAR_25.st_flags);
  FUNC_4(VAR_23);
 }
 FUNC_5(VAR_27);
}
