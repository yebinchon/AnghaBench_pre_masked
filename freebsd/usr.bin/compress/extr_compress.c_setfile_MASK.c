
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct stat {int st_mode; int st_flags; int st_gid; int st_uid; struct timespec st_mtim; struct timespec st_atim; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ,char const*,struct timespec*,int ) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_9, struct stat *VAR_10)
{
 static struct timespec VAR_11[2];

 VAR_10->st_mode &= VAR_7|VAR_6|VAR_5|VAR_3|VAR_4;

 VAR_11[0] = VAR_10->st_atim;
 VAR_11[1] = VAR_10->st_mtim;
 if (FUNC_4(VAR_0, VAR_9, VAR_11, 0))
  FUNC_3("utimensat: %s", VAR_9);







 if (FUNC_2(VAR_9, VAR_10->st_uid, VAR_10->st_gid)) {
  if (VAR_8 != VAR_2)
   FUNC_3("chown: %s", VAR_9);
  VAR_10->st_mode &= ~(VAR_7|VAR_6);
 }
 if (FUNC_1(VAR_9, VAR_10->st_mode) && VAR_8 != VAR_1)
  FUNC_3("chmod: %s", VAR_9);

 if (FUNC_0(VAR_9, VAR_10->st_flags) && VAR_8 != VAR_1)
  FUNC_3("chflags: %s", VAR_9);
}
