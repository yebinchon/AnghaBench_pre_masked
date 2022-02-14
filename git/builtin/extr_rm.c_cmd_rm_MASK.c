
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct pathspec {int nr; TYPE_1__* items; } ;
struct object_id {int dummy; } ;
struct lock_file {int dummy; } ;
struct cache_entry {int ce_mode; int name; } ;
struct TYPE_6__ {char* name; scalar_t__ is_submodule; } ;
struct TYPE_5__ {int nr; TYPE_3__* entry; int alloc; } ;
struct TYPE_4__ {char* original; } ;


 int FUNC_0 (TYPE_3__*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct lock_file VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct strbuf VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 struct cache_entry** VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,struct cache_entry const*,struct pathspec*,char*) ;
 scalar_t__ FUNC_4 (struct object_id*,int ) ;
 int FUNC_5 (int ,...) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int) ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (char*,struct object_id*) ;
 int FUNC_9 (int ,int *) ;
 int VAR_14 ;
 int FUNC_10 (struct lock_file*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (int *) ;
 TYPE_2__ VAR_17 ;
 int FUNC_12 (struct object_id*) ;
 int FUNC_13 (int,char const**,char const*,int ,int ,int ) ;
 int FUNC_14 (struct pathspec*,int ,int ,char const*,char const**) ;
 int FUNC_15 (char*,char const*) ;
 int VAR_18 ;
 scalar_t__ FUNC_16 () ;
 int VAR_19 ;
 int FUNC_17 (int *,int,struct pathspec*,int *,int *) ;
 scalar_t__ FUNC_18 (struct strbuf*,int ) ;
 scalar_t__ FUNC_19 (char const*) ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (char const*) ;
 int FUNC_22 () ;
 scalar_t__ VAR_20 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct strbuf*,char const*) ;
 int FUNC_25 (struct strbuf*) ;
 int FUNC_26 (struct strbuf*) ;
 int FUNC_27 () ;
 int VAR_21 ;
 int FUNC_28 (int ,int ) ;
 scalar_t__ FUNC_29 (int *,struct lock_file*,int) ;
 char* FUNC_30 (int,int) ;
 char* FUNC_31 (int ) ;

int FUNC_32(int VAR_22, const char **VAR_23, const char *VAR_24)
{
 struct lock_file VAR_25 = VAR_2;
 int VAR_26;
 struct pathspec VAR_27;
 char *VAR_28;

 FUNC_9(VAR_14, ((void*)0));

 VAR_22 = FUNC_13(VAR_22, VAR_23, VAR_24, VAR_11,
        VAR_12, 0);
 if (!VAR_22)
  FUNC_28(VAR_12, VAR_11);

 if (!VAR_16)
  FUNC_22();

 FUNC_10(&VAR_25, VAR_1);

 if (FUNC_16() < 0)
  FUNC_5(FUNC_2("index file corrupt"));

 FUNC_14(&VAR_27, 0,
         VAR_4,
         VAR_24, VAR_23);
 FUNC_17(&VAR_21, VAR_5|VAR_6, &VAR_27, ((void*)0), ((void*)0));

 VAR_28 = FUNC_30(VAR_27.nr, 1);

 for (VAR_26 = 0; VAR_26 < VAR_10; VAR_26++) {
  const struct cache_entry *VAR_29 = VAR_9[VAR_26];
  if (!FUNC_3(&VAR_21, VAR_29, &VAR_27, VAR_28))
   continue;
  FUNC_0(VAR_17.entry, VAR_17.nr + 1, VAR_17.alloc);
  VAR_17.entry[VAR_17.nr].name = FUNC_31(VAR_29->name);
  VAR_17.entry[VAR_17.nr].is_submodule = FUNC_1(VAR_29->ce_mode);
  if (VAR_17.entry[VAR_17.nr++].is_submodule &&
      !FUNC_11(&VAR_21))
   FUNC_5(FUNC_2("please stage your changes to .gitmodules or stash them to proceed"));
 }

 if (VAR_27.nr) {
  const char *VAR_30;
  int VAR_31 = 0;
  for (VAR_26 = 0; VAR_26 < VAR_27.nr; VAR_26++) {
   VAR_30 = VAR_27.items[VAR_26].original;
   if (!VAR_28[VAR_26]) {
    if (!VAR_15) {
     FUNC_5(FUNC_2("pathspec '%s' did not match any files"),
         VAR_30);
    }
   }
   else {
    VAR_31 = 1;
   }
   if (!VAR_19 && VAR_28[VAR_26] == VAR_3)
    FUNC_5(FUNC_2("not removing '%s' recursively without -r"),
        *VAR_30 ? VAR_30 : ".");
  }

  if (!VAR_31)
   FUNC_7(0);
 }

 if (!VAR_16)
  FUNC_27();
 if (!VAR_13) {
  struct object_id VAR_32;
  if (FUNC_8("HEAD", &VAR_32))
   FUNC_12(&VAR_32);
  if (FUNC_4(&VAR_32, VAR_16))
   FUNC_7(1);
 }





 for (VAR_26 = 0; VAR_26 < VAR_17.nr; VAR_26++) {
  const char *VAR_33 = VAR_17.entry[VAR_26].name;
  if (!VAR_18)
   FUNC_15("rm '%s'\n", VAR_33);

  if (FUNC_19(VAR_33))
   FUNC_5(FUNC_2("git rm: unable to remove %s"), VAR_33);
 }

 if (VAR_20)
  return 0;
 if (!VAR_16) {
  int VAR_34 = 0, VAR_35 = 0;
  struct strbuf VAR_36 = VAR_8;
  for (VAR_26 = 0; VAR_26 < VAR_17.nr; VAR_26++) {
   const char *VAR_37 = VAR_17.entry[VAR_26].name;
   if (VAR_17.entry[VAR_26].is_submodule) {
    FUNC_26(&VAR_36);
    FUNC_24(&VAR_36, VAR_37);
    if (FUNC_18(&VAR_36, 0))
     FUNC_5(FUNC_2("could not remove '%s'"), VAR_37);

    VAR_34 = 1;
    if (!FUNC_21(VAR_37))
     VAR_35 = 1;
    continue;
   }
   if (!FUNC_20(VAR_37)) {
    VAR_34 = 1;
    continue;
   }
   if (!VAR_34)
    FUNC_6("git rm: '%s'", VAR_37);
  }
  FUNC_25(&VAR_36);
  if (VAR_35)
   FUNC_23(&VAR_21);
 }

 if (FUNC_29(&VAR_21, &VAR_25,
          VAR_0 | VAR_7))
  FUNC_5(FUNC_2("Unable to write new index file"));

 return 0;
}
