
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uid_t ;
typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
struct stat {scalar_t__ st_mtime; } ;
struct bsdar {char const* filename; int argc; char** argv; int options; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int mode_t ;
typedef int gid_t ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 scalar_t__ FUNC_3 (struct archive_entry*) ;
 char* FUNC_4 (struct archive_entry*) ;
 size_t FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive*) ;
 char const* FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*,int) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*,struct archive_entry*,int) ;
 int FUNC_13 (struct archive*) ;
 struct archive* FUNC_14 () ;
 int FUNC_15 (struct archive*,struct archive_entry**) ;
 int FUNC_16 (struct archive*,char const*,int ) ;
 int FUNC_17 (struct archive*) ;
 char* FUNC_18 (char*) ;
 int FUNC_19 (struct bsdar*,int ,scalar_t__,char*) ;
 int FUNC_20 (struct bsdar*,int ,char*,...) ;
 scalar_t__ VAR_14 ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,char*,...) ;
 struct tm* FUNC_23 (scalar_t__*) ;
 scalar_t__ FUNC_24 (char const*,struct stat*) ;
 int VAR_15 ;
 scalar_t__ FUNC_25 (char const*,char const*) ;
 int FUNC_26 (char*,int,char*,struct tm*) ;
 int FUNC_27 (int ,char*) ;

__attribute__((used)) static void
FUNC_28(struct bsdar *VAR_16, char VAR_17)
{
 struct archive *VAR_18;
 struct archive_entry *VAR_19;
 struct stat VAR_20;
 struct tm *VAR_21;
 const char *VAR_22;
 const char *VAR_23;
 mode_t VAR_24;
 size_t VAR_25;
 time_t VAR_26;
 uid_t VAR_27;
 gid_t VAR_28;
 char **VAR_29;
 char VAR_30[25];
 char VAR_31;
 int VAR_32, VAR_33, VAR_34;

 if ((VAR_18 = FUNC_14()) == ((void*)0))
  FUNC_19(VAR_16, VAR_13, 0, "archive_read_new failed");
 FUNC_17(VAR_18);
 FUNC_0(FUNC_16(VAR_18, VAR_16->filename, VAR_11));

 for (;;) {
  VAR_33 = FUNC_15(VAR_18, &VAR_19);
  if (VAR_33 == VAR_6 || VAR_33 == VAR_5 ||
      VAR_33 == VAR_4)
   FUNC_20(VAR_16, FUNC_7(VAR_18), "%s",
       FUNC_8(VAR_18));
  if (VAR_33 == VAR_0 || VAR_33 == VAR_4)
   break;
  if (VAR_33 == VAR_5) {
   FUNC_20(VAR_16, 0, "Retrying...");
   continue;
  }

  if ((VAR_23 = FUNC_4(VAR_19)) == ((void*)0))
   break;


  if (FUNC_25(VAR_23, "/") == 0 || FUNC_25(VAR_23, "//") == 0 ||
      FUNC_25(VAR_23, "/SYM64/") == 0)
   continue;

  if (VAR_16->argc > 0) {
   VAR_31 = 0;
   for(VAR_34 = 0; VAR_34 < VAR_16->argc; VAR_34++) {
    VAR_29 = &VAR_16->argv[VAR_34];
    if (*VAR_29 == ((void*)0))
     continue;
    if ((VAR_22 = FUNC_18(*VAR_29)) == ((void*)0))
     FUNC_19(VAR_16, VAR_13, VAR_14,
         "basename failed");
    if (FUNC_25(VAR_22, VAR_23) != 0)
     continue;

    *VAR_29 = ((void*)0);
    VAR_31 = 1;
    break;
   }
   if (!VAR_31)
    continue;
  }

  if (VAR_17 == 't') {
   if (VAR_16->options & VAR_10) {
    VAR_24 = FUNC_2(VAR_19);
    VAR_27 = FUNC_6(VAR_19);
    VAR_28 = FUNC_1(VAR_19);
    VAR_25 = FUNC_5(VAR_19);
    VAR_26 = FUNC_3(VAR_19);
    (void)FUNC_27(VAR_24, VAR_30);
    (void)FUNC_22(VAR_15, "%s %6d/%-6d %8jd ",
        VAR_30 + 1, VAR_27, VAR_28, (uintmax_t)VAR_25);
    VAR_21 = FUNC_23(&VAR_26);
    (void)FUNC_26(VAR_30, sizeof(VAR_30),
        "%b %e %H:%M %Y", VAR_21);
    (void)FUNC_22(VAR_15, "%s %s", VAR_30, VAR_23);
   } else
    (void)FUNC_22(VAR_15, "%s", VAR_23);
   VAR_33 = FUNC_11(VAR_18);
   if (VAR_33 == VAR_6 || VAR_33 == VAR_5 ||
       VAR_33 == VAR_4) {
    (void)FUNC_22(VAR_15, "\n");
    FUNC_20(VAR_16, FUNC_7(VAR_18), "%s",
        FUNC_8(VAR_18));
   }

   if (VAR_33 == VAR_4)
    break;

   (void)FUNC_22(VAR_15, "\n");
  } else {

   if (VAR_17 == 'p') {
    if (VAR_16->options & VAR_10) {
     (void)FUNC_22(VAR_15, "\n<%s>\n\n",
         VAR_23);
     FUNC_21(VAR_15);
    }
    VAR_33 = FUNC_10(VAR_18, 1);
   } else {

    if (FUNC_24(VAR_23, &VAR_20) != 0) {
     if (VAR_14 != VAR_12) {
      FUNC_20(VAR_16, 0,
          "stat %s failed",
          VAR_16->filename);
      continue;
     }
    } else {

     if (VAR_16->options & VAR_7)
      continue;
     if (VAR_16->options & VAR_9 &&
         FUNC_3(VAR_19) <=
         VAR_20.st_mtime)
      continue;
    }

    if (VAR_16->options & VAR_10)
     (void)FUNC_22(VAR_15, "x - %s\n", VAR_23);

    if (VAR_23[0] == '/') {
     FUNC_20(VAR_16, 0,
         "Absolute path '%s'", VAR_23);
     continue;
    }

    VAR_32 = VAR_2 |
        VAR_1;
    if (VAR_16->options & VAR_8)
     VAR_32 |= VAR_3;

    VAR_33 = FUNC_12(VAR_18, VAR_19, VAR_32);
   }

   if (VAR_33)
    FUNC_20(VAR_16, FUNC_7(VAR_18), "%s",
        FUNC_8(VAR_18));
  }
 }
 FUNC_0(FUNC_9(VAR_18));
 FUNC_0(FUNC_13(VAR_18));
}
