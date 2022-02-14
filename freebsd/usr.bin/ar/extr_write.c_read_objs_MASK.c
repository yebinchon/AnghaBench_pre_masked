
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdar {int argc; char** argv; int v_obj; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
struct ar_obj {char* maddr; size_t size; int fd; scalar_t__ ino; scalar_t__ dev; int mtime; int md; int gid; int uid; int * name; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct ar_obj*,int ) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 char* FUNC_5 (struct archive_entry*) ;
 size_t FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 scalar_t__ FUNC_11 (struct archive*,char*,size_t) ;
 int FUNC_12 (struct archive*) ;
 struct archive* FUNC_13 () ;
 int FUNC_14 (struct archive*,struct archive_entry**) ;
 int FUNC_15 (struct archive*,char const*,int ) ;
 int FUNC_16 (struct archive*) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (struct bsdar*,int ,int ,char*,...) ;
 int FUNC_19 (struct bsdar*,int ,char*,...) ;
 int VAR_7 ;
 int FUNC_20 (char*) ;
 void* FUNC_21 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_22 (char const*,char const*) ;
 int * FUNC_23 (char const*) ;

__attribute__((used)) static void
FUNC_24(struct bsdar *VAR_9, const char *VAR_10, int VAR_11)
{
 struct archive *VAR_12;
 struct archive_entry *VAR_13;
 struct ar_obj *VAR_14;
 const char *VAR_15;
 const char *VAR_16;
 char *VAR_17;
 char **VAR_18;
 size_t VAR_19;
 int VAR_20, VAR_21, VAR_22;

 if ((VAR_12 = FUNC_13()) == ((void*)0))
  FUNC_18(VAR_9, VAR_6, 0, "archive_read_new failed");
 FUNC_16(VAR_12);
 FUNC_0(FUNC_15(VAR_12, VAR_10, VAR_4));
 for (;;) {
  VAR_21 = FUNC_14(VAR_12, &VAR_13);
  if (VAR_21 == VAR_1)
   FUNC_18(VAR_9, VAR_5, FUNC_8(VAR_12), "%s",
       FUNC_9(VAR_12));
  if (VAR_21 == VAR_0)
   break;
  if (VAR_21 == VAR_3 || VAR_21 == VAR_2)
   FUNC_19(VAR_9, FUNC_8(VAR_12), "%s",
       FUNC_9(VAR_12));
  if (VAR_21 == VAR_2) {
   FUNC_19(VAR_9, 0, "Retrying...");
   continue;
  }

  VAR_15 = FUNC_5(VAR_13);




  if (FUNC_22(VAR_15, "/") == 0 || FUNC_22(VAR_15, "//") == 0)
   continue;





  if (VAR_11 && VAR_9->argc > 0) {
   VAR_22 = 0;
   for(VAR_20 = 0; VAR_20 < VAR_9->argc; VAR_20++) {
    VAR_18 = &VAR_9->argv[VAR_20];
    if (*VAR_18 == ((void*)0))
     continue;
    if ((VAR_16 = FUNC_17(*VAR_18)) == ((void*)0))
     FUNC_18(VAR_9, VAR_6, VAR_7,
         "basename failed");
    if (FUNC_22(VAR_16, VAR_15) != 0)
     continue;

    *VAR_18 = ((void*)0);
    VAR_22 = 1;
    break;
   }
   if (!VAR_22)
    continue;
  }

  VAR_19 = FUNC_6(VAR_13);

  if (VAR_19 > 0) {
   if ((VAR_17 = FUNC_21(VAR_19)) == ((void*)0))
    FUNC_18(VAR_9, VAR_6, VAR_7,
        "malloc failed");
   if (FUNC_11(VAR_12, VAR_17, VAR_19) != (ssize_t)VAR_19) {
    FUNC_19(VAR_9, FUNC_8(VAR_12), "%s",
        FUNC_9(VAR_12));
    FUNC_20(VAR_17);
    continue;
   }
  } else
   VAR_17 = ((void*)0);

  VAR_14 = FUNC_21(sizeof(struct ar_obj));
  if (VAR_14 == ((void*)0))
   FUNC_18(VAR_9, VAR_6, VAR_7, "malloc failed");
  VAR_14->maddr = VAR_17;
  if ((VAR_14->name = FUNC_23(VAR_15)) == ((void*)0))
   FUNC_18(VAR_9, VAR_6, VAR_7, "strdup failed");
  VAR_14->size = VAR_19;
  VAR_14->uid = FUNC_7(VAR_13);
  VAR_14->gid = FUNC_2(VAR_13);
  VAR_14->md = FUNC_3(VAR_13);
  VAR_14->mtime = FUNC_4(VAR_13);
  VAR_14->dev = 0;
  VAR_14->ino = 0;





  VAR_14->fd = -1;
  FUNC_1(&VAR_9->v_obj, VAR_14, VAR_8);
 }
 FUNC_0(FUNC_10(VAR_12));
 FUNC_0(FUNC_12(VAR_12));
}
