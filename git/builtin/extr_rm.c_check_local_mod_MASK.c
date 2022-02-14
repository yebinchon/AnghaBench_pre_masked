
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {int nr; } ;
struct stat {int st_mode; } ;
struct object_id {int dummy; } ;
struct cache_entry {scalar_t__ ce_mode; int oid; int name; } ;
struct TYPE_4__ {int nr; TYPE_1__* entry; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (char*,char*,int ) ;
 struct string_list VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 struct cache_entry** VAR_3 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (struct cache_entry const*) ;
 scalar_t__ FUNC_7 (struct cache_entry const*,struct stat*,int ) ;
 scalar_t__ FUNC_8 (unsigned short) ;
 int VAR_4 ;
 int FUNC_9 (char const*,int) ;
 scalar_t__ FUNC_10 (int ,struct object_id*,char const*,struct object_id*,unsigned short*) ;
 scalar_t__ FUNC_11 (char const*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct object_id*) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_14 (int ,struct stat*) ;
 int FUNC_15 (int *,struct object_id*) ;
 int FUNC_16 (struct string_list*,int ,int ,int*) ;
 int FUNC_17 (struct string_list*,char const*) ;
 int FUNC_18 (struct string_list*,int ) ;
 int FUNC_19 (char const*) ;
 int VAR_6 ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static int FUNC_21(struct object_id *VAR_7, int VAR_8)
{







 int VAR_9, VAR_10;
 int VAR_11 = 0;
 struct string_list VAR_12 = VAR_0;
 struct string_list VAR_13 = VAR_0;
 struct string_list VAR_14 = VAR_0;

 VAR_10 = FUNC_13(VAR_7);
 for (VAR_9 = 0; VAR_9 < VAR_5.nr; VAR_9++) {
  struct stat VAR_15;
  int VAR_16;
  const struct cache_entry *VAR_17;
  const char *VAR_18 = VAR_5.entry[VAR_9].name;
  struct object_id VAR_19;
  unsigned short VAR_20;
  int VAR_21 = 0;
  int VAR_22 = 0;

  VAR_16 = FUNC_5(VAR_18, FUNC_19(VAR_18));
  if (VAR_16 < 0) {




   VAR_16 = FUNC_9(VAR_18, VAR_16);
   if (VAR_16 < 0)
    continue;

   if (!FUNC_2(VAR_3[VAR_16]->ce_mode) ||
       FUNC_11(VAR_18))
    continue;
  }
  VAR_17 = VAR_3[VAR_16];

  if (FUNC_14(VAR_17->name, &VAR_15) < 0) {
   if (!FUNC_12(VAR_4))
    FUNC_20(FUNC_3("failed to stat '%s'"), VAR_17->name);

   continue;
  }
  else if (FUNC_1(VAR_15.st_mode)) {





   if (!FUNC_2(VAR_17->ce_mode))
    continue;
  }
  if (FUNC_7(VAR_17, &VAR_15, 0) ||
      (FUNC_2(VAR_17->ce_mode) &&
       FUNC_4(VAR_17->name,
    VAR_1 |
    VAR_2)))
   VAR_21 = 1;







  if (VAR_10
       || FUNC_10(VAR_6, VAR_7, VAR_18, &VAR_19, &VAR_20)
       || VAR_17->ce_mode != FUNC_8(VAR_20)
       || !FUNC_15(&VAR_17->oid, &VAR_19))
   VAR_22 = 1;
  if (VAR_21 && VAR_22) {
   if (!VAR_8 || !FUNC_6(VAR_17))
    FUNC_17(&VAR_12, VAR_18);
  }
  else if (!VAR_8) {
   if (VAR_22)
    FUNC_17(&VAR_13, VAR_18);
   if (VAR_21)
    FUNC_17(&VAR_14, VAR_18);
  }
 }
 FUNC_16(&VAR_12,
     FUNC_0("the following file has staged content different "
        "from both the\nfile and the HEAD:",
        "the following files have staged content different"
        " from both the\nfile and the HEAD:",
        VAR_12.nr),
     FUNC_3("\n(use -f to force removal)"),
     &VAR_11);
 FUNC_18(&VAR_12, 0);
 FUNC_16(&VAR_13,
     FUNC_0("the following file has changes "
        "staged in the index:",
        "the following files have changes "
        "staged in the index:", VAR_13.nr),
     FUNC_3("\n(use --cached to keep the file,"
       " or -f to force removal)"),
     &VAR_11);
 FUNC_18(&VAR_13, 0);

 FUNC_16(&VAR_14,
     FUNC_0("the following file has local modifications:",
        "the following files have local modifications:",
        VAR_14.nr),
     FUNC_3("\n(use --cached to keep the file,"
       " or -f to force removal)"),
     &VAR_11);
 FUNC_18(&VAR_14, 0);

 return VAR_11;
}
