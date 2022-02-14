
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct stat {int dummy; } ;
struct TYPE_3__ {int flags; scalar_t__ type; scalar_t__ st_uid; scalar_t__ st_flags; int st_mode; int st_gid; struct TYPE_3__* child; int slink; int name; struct TYPE_3__* next; } ;
typedef TYPE_1__ NODE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,scalar_t__,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 char* VAR_13 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (char*,int ) ;
 char* FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static void
FUNC_11(NODE *VAR_16, char *VAR_17)
{
 int VAR_18;
 char *VAR_19;
 const char *VAR_20, *VAR_21;
 int VAR_22;

 for (; VAR_16; VAR_16 = VAR_16->next) {
  if (VAR_16->flags & VAR_6 && !(VAR_16->flags & VAR_9))
   continue;
  if (VAR_16->type != VAR_0 && (VAR_11 || VAR_16->flags & VAR_9))
   continue;
  (void)FUNC_8(VAR_17, VAR_16->name);
  if (!(VAR_16->flags & VAR_9)) {


   struct stat VAR_23;

   if (VAR_14 && FUNC_7(VAR_13, &VAR_23) == 0)
    VAR_16->flags |= VAR_9;
   else
    (void)FUNC_5("%s missing", VAR_13);
  }
  if (VAR_16->type != VAR_0 && VAR_16->type != VAR_4) {
   FUNC_6('\n');
   continue;
  }

  VAR_18 = 0;
  if (VAR_16->type == VAR_4)
   VAR_20 = "symlink";
  else
   VAR_20 = "directory";
  if (!(VAR_16->flags & VAR_9) && VAR_15) {
   if (!(VAR_16->flags & (VAR_7 | VAR_8)))
    (void)FUNC_5(" (%s not created: user not specified)", VAR_20);
   else if (!(VAR_16->flags & (VAR_2 | VAR_3)))
    (void)FUNC_5(" (%s not created: group not specified)", VAR_20);
   else if (VAR_16->type == VAR_4) {
    if (FUNC_10(VAR_16->slink, VAR_13))
     (void)FUNC_5(" (symlink not created: %s)\n",
         FUNC_9(VAR_12));
    else
     (void)FUNC_5(" (created)\n");
    if (FUNC_3(VAR_13, VAR_16->st_uid, VAR_16->st_gid) == -1) {
     VAR_22 = VAR_12;
     if (VAR_16->st_uid == (uid_t)-1)
      VAR_21 = "group";
     else if (FUNC_3(VAR_13, (uid_t)-1,
         VAR_16->st_gid) == -1)
      VAR_21 = "user & group";
     else {
      VAR_21 = "user";
      VAR_12 = VAR_22;
     }
     (void)FUNC_5("%s: %s not modified: %s"
         "\n", VAR_13, VAR_21, FUNC_9(VAR_12));
    }
    continue;
   } else if (!(VAR_16->flags & VAR_5))
       (void)FUNC_5(" (directory not created: mode not specified)");
   else if (FUNC_4(VAR_13, VAR_10))
    (void)FUNC_5(" (directory not created: %s)",
        FUNC_9(VAR_12));
   else {
    VAR_18 = 1;
    (void)FUNC_5(" (created)");
   }
  }
  if (!(VAR_16->flags & VAR_9))
   (void)FUNC_6('\n');

  for (VAR_19 = VAR_17; *VAR_19; ++VAR_19);
  *VAR_19 = '/';
  FUNC_11(VAR_16->child, VAR_19 + 1);
  *VAR_19 = '\0';

  if (!VAR_18 && !VAR_15)
   continue;
  if (FUNC_2(VAR_13, VAR_16->st_uid, VAR_16->st_gid) == -1) {
   VAR_22 = VAR_12;
   if (VAR_16->st_uid == (uid_t)-1)
    VAR_21 = "group";
   else if (FUNC_2(VAR_13, (uid_t)-1, VAR_16->st_gid) == -1)
    VAR_21 = "user & group";
   else {
    VAR_21 = "user";
    VAR_12 = VAR_22;
   }
   (void)FUNC_5("%s: %s not modified: %s\n",
       VAR_13, VAR_21, FUNC_9(VAR_12));
  }
  if (FUNC_1(VAR_13, VAR_16->st_mode))
   (void)FUNC_5("%s: permissions not set: %s\n",
       VAR_13, FUNC_9(VAR_12));
  if ((VAR_16->flags & VAR_1) && VAR_16->st_flags &&
      FUNC_0(VAR_13, VAR_16->st_flags))
   (void)FUNC_5("%s: file flags not set: %s\n",
       VAR_13, FUNC_9(VAR_12));
 }
}
