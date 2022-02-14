
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct stat {TYPE_1__ st_mtim; int st_mode; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct archive_entry*) ;
 scalar_t__ FUNC_3 (struct archive_entry*) ;
 scalar_t__ FUNC_4 (struct archive_entry*) ;
 char* FUNC_5 (struct archive_entry*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (struct archive*,char*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 (int,struct timespec*) ;
 int FUNC_10 (char**) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (char*,int) ;
 scalar_t__ FUNC_13 (char*,struct stat*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (char*,int,int) ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int ,char*,struct timespec*,int ) ;
 int FUNC_18 (char*,char*) ;

__attribute__((used)) static void
FUNC_19(struct archive *VAR_11, struct archive_entry *VAR_12, char **VAR_13)
{
 int VAR_14;
 struct timespec VAR_15;
 struct stat VAR_16;
 struct timespec VAR_17[2];
 int VAR_18, VAR_19, VAR_20;
 const char *VAR_21;

 VAR_14 = FUNC_2(VAR_12) & 0777;
 if (VAR_14 == 0)
  VAR_14 = 0644;
 VAR_15.tv_sec = FUNC_3(VAR_12);
 VAR_15.tv_nsec = FUNC_4(VAR_12);


recheck:
 if (FUNC_13(*VAR_13, &VAR_16) == 0) {
  if (VAR_10 || VAR_6) {

   if ((FUNC_1(VAR_16.st_mode) || FUNC_0(VAR_16.st_mode)) &&
       (VAR_16.st_mtim.tv_sec > VAR_15.tv_sec ||
       (VAR_16.st_mtim.tv_sec == VAR_15.tv_sec &&
       VAR_16.st_mtim.tv_nsec >= VAR_15.tv_nsec)))
    return;
   (void)FUNC_16(*VAR_13);
  } else if (VAR_8) {

   (void)FUNC_16(*VAR_13);
  } else if (VAR_7) {

   return;
  } else {
   VAR_19 = FUNC_10(VAR_13);
   if (VAR_19 == 0)
    goto recheck;
   if (VAR_19 == -1)
    return;
  }
 } else {
  if (VAR_6)
   return;
 }

 VAR_17[0].tv_sec = 0;
 VAR_17[0].tv_nsec = VAR_5;
 VAR_17[1] = VAR_15;


 VAR_21 = FUNC_5(VAR_12);
 if (VAR_21 != ((void*)0)) {
  if (FUNC_15(VAR_21, *VAR_13) != 0)
   FUNC_7("symlink('%s')", *VAR_13);
  FUNC_11(" extracting: %s -> %s\n", *VAR_13, VAR_21);
  if (FUNC_12(*VAR_13, VAR_14) != 0)
   FUNC_18("Cannot set mode for '%s'", *VAR_13);

  if (FUNC_17(VAR_0, *VAR_13, VAR_17, VAR_1) != 0)
   FUNC_18("utimensat('%s')", *VAR_13);
  return;
 }

 if ((VAR_18 = FUNC_14(*VAR_13, VAR_3|VAR_2|VAR_4, VAR_14)) < 0)
  FUNC_7("open('%s')", *VAR_13);

 FUNC_11(" extracting: %s", *VAR_13);

 VAR_20 = FUNC_8(VAR_11, *VAR_13, VAR_18);

 if (VAR_9)
  FUNC_11("  \b\b");
 if (VAR_20)
  FUNC_11(" (text)");
 FUNC_11("\n");


 if (FUNC_9(VAR_18, VAR_17) != 0)
  FUNC_7("futimens('%s')", *VAR_13);
 if (FUNC_6(VAR_18) != 0)
  FUNC_7("close('%s')", *VAR_13);
}
