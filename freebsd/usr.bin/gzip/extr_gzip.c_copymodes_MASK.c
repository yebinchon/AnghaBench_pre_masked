
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct stat {int st_mode; scalar_t__ st_flags; struct timespec st_mtim; struct timespec st_atim; int st_gid; int st_uid; } ;
typedef int mode_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (int,struct timespec*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(int VAR_8, const struct stat *VAR_9, const char *VAR_10)
{
 struct timespec VAR_11[2];
 struct stat VAR_12;





 if (VAR_9 == ((void*)0)) {
  mode_t VAR_13 = FUNC_5(022);

  (void)FUNC_1(VAR_8, VAR_0 & ~VAR_13);
  (void)FUNC_5(VAR_13);
  return;
 }
 VAR_12 = *VAR_9;


 if (FUNC_2(VAR_8, VAR_12.st_uid, VAR_12.st_gid) < 0) {
  if (VAR_7 != VAR_1)
   FUNC_4("couldn't fchown: %s", VAR_10);
  VAR_12.st_mode &= ~(VAR_6|VAR_5);
 }


 VAR_12.st_mode &= VAR_6 | VAR_5 | VAR_4 | VAR_2 | VAR_3;
 if (FUNC_1(VAR_8, VAR_12.st_mode) < 0)
  FUNC_4("couldn't fchmod: %s", VAR_10);

 VAR_11[0] = VAR_12.st_atim;
 VAR_11[1] = VAR_12.st_mtim;
 if (FUNC_3(VAR_8, VAR_11) < 0)
  FUNC_4("couldn't futimens: %s", VAR_10);


        if (VAR_12.st_flags != 0 && FUNC_0(VAR_8, VAR_12.st_flags) < 0)
  FUNC_4("couldn't fchflags: %s", VAR_10);
}
