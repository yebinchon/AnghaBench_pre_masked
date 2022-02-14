
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct stat {int st_nlink; int st_ctimensec; int st_atimensec; int st_mtimensec; int st_ctime; int st_atime; int st_mtime; int st_mode; } ;
typedef int stbuf ;
typedef int path ;
struct TYPE_9__ {scalar_t__ type; char* name; struct TYPE_9__* child; int symlink; struct TYPE_9__* first; struct TYPE_9__* parent; struct TYPE_9__* next; } ;
typedef TYPE_1__ fsnode ;
struct TYPE_11__ {int tv_nsec; int tv_sec; } ;
struct TYPE_10__ {scalar_t__ type; char* name; int flags; int * slink; struct TYPE_10__* next; struct TYPE_10__* child; } ;
typedef TYPE_2__ NODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (char const*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (char*,char*,char*,struct stat*) ;
 int VAR_14 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (struct stat*,int ,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,char const*,...) ;
 scalar_t__ FUNC_11 (char*,int,char*,char const*,char*) ;
 TYPE_3__ VAR_15 ;
 scalar_t__ FUNC_12 (char*,char*) ;

__attribute__((used)) static void
FUNC_13(const char *VAR_16, NODE *VAR_17, fsnode *VAR_18, int VAR_19)
{
 char VAR_20[VAR_11 + 1];
 NODE *VAR_21;
 fsnode *VAR_22;

 FUNC_2(VAR_17 != ((void*)0));
 FUNC_2(VAR_18 != ((void*)0));

 if (VAR_14 & VAR_1)
  FUNC_10("apply_specdir: %s %p %p\n", VAR_16, VAR_17, VAR_18);

 if (VAR_17->type != VAR_3)
  FUNC_4(1, "Specfile node `%s/%s' is not a directory",
      VAR_16, VAR_17->name);
 if (VAR_18->type != VAR_12)
  FUNC_4(1, "Directory node `%s/%s' is not a directory",
      VAR_16, VAR_18->name);

 FUNC_1(VAR_16, VAR_17, VAR_18);






 if (VAR_19) {
  fsnode *VAR_23;
  FUNC_2(VAR_18->name[0] == '.' && VAR_18->name[1] == '\0');
  for (VAR_22 = VAR_18->next; VAR_22 != ((void*)0); VAR_22 = VAR_23) {
   VAR_23 = VAR_22->next;
   for (VAR_21 = VAR_17->child; VAR_21 != ((void*)0);
        VAR_21 = VAR_21->next) {
    if (FUNC_12(VAR_21->name, VAR_22->name) == 0)
     break;
   }
   if (VAR_21 == ((void*)0)) {
    if (VAR_14 & VAR_2) {
     FUNC_10("apply_specdir: trimming %s/%s %p\n", VAR_16, VAR_22->name, VAR_22);
    }
    FUNC_6(VAR_22);
   }
  }
 }


 for (VAR_21 = VAR_17->child; VAR_21 != ((void*)0);
     VAR_21 = VAR_21->next) {
  if (VAR_14 & VAR_0)
   FUNC_10("apply_specdir:  spec %s\n",
       VAR_21->name);
  for (VAR_22 = VAR_18->next; VAR_22 != ((void*)0);
      VAR_22 = VAR_22->next) {





   if (FUNC_12(VAR_21->name, VAR_22->name) == 0)
    break;
  }
  if ((size_t)FUNC_11(VAR_20, sizeof(VAR_20), "%s/%s", VAR_16,
      VAR_21->name) >= sizeof(VAR_20))
   FUNC_4(1, "Pathname too long.");
  if (VAR_22 == ((void*)0)) {
   struct stat VAR_24;





   if ((VAR_21->flags & VAR_7) &&
       FUNC_7(VAR_20, &VAR_24) == -1)
     continue;





   if (!(VAR_21->flags & VAR_8)) FUNC_4(1, "`%s': %s not provided", VAR_20, "type");
   if (!(VAR_21->flags & VAR_6)) FUNC_4(1, "`%s': %s not provided", VAR_20, "mode");

   if (!(VAR_21->flags & VAR_4 || VAR_21->flags & VAR_5)) FUNC_4(1, "`%s': %s not provided", VAR_20, "group");

   if (!(VAR_21->flags & VAR_9 || VAR_21->flags & VAR_10)) FUNC_4(1, "`%s': %s not provided", VAR_20, "user");






   if (VAR_14 & VAR_1)
    FUNC_10("apply_specdir: adding %s\n",
        VAR_21->name);

   FUNC_8(&VAR_24, 0, sizeof(VAR_24));
   VAR_24.st_mode = FUNC_9(VAR_21->type);
   VAR_24.st_nlink = 1;
   VAR_24.st_mtime = VAR_24.st_atime =
       VAR_24.st_ctime = VAR_15.tv_sec;




   VAR_22 = FUNC_3(".", ".", VAR_21->name,
       &VAR_24);
   VAR_22->parent = VAR_18->parent;
   VAR_22->first = VAR_18;
   VAR_22->next = VAR_18->next;
   VAR_18->next = VAR_22;
   if (VAR_22->type == VAR_12) {

    VAR_22->child = FUNC_3(".", ".", ".",
        &VAR_24);
    VAR_22->child->parent = VAR_22;
    VAR_22->child->first = VAR_22->child;
   }
   if (VAR_22->type == VAR_13) {
    FUNC_2(VAR_21->slink != ((void*)0));

    VAR_22->symlink = FUNC_5(VAR_21->slink);
   }
  }
  FUNC_1(VAR_16, VAR_21, VAR_22);
  if (VAR_21->type == VAR_3) {
   if (VAR_22->type != VAR_12)
    FUNC_4(1, "`%s' is not a directory", VAR_20);
   FUNC_2 (VAR_22->child != ((void*)0));
   FUNC_13(VAR_20, VAR_21, VAR_22->child, VAR_19);
  }
 }
}
