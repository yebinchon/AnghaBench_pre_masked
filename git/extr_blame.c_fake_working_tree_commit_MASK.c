
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int time_t ;
struct strbuf {int len; int buf; } ;
struct stat {int st_mode; int st_size; } ;
struct repository {TYPE_7__* index; } ;
struct object_id {int dummy; } ;
struct TYPE_16__ {int allow_textconv; } ;
struct diff_options {TYPE_4__ flags; } ;
struct commit_list {TYPE_3__* item; struct commit_list* next; } ;
struct TYPE_13__ {int parsed; } ;
struct commit {struct commit_list* parents; int date; TYPE_1__ object; } ;
struct cache_entry {int ce_namelen; int ce_mode; int ce_flags; int name; int oid; } ;
struct TYPE_17__ {int size; int ptr; } ;
struct blame_origin {int blob_oid; TYPE_5__ file; } ;
struct TYPE_19__ {TYPE_6__** cache; } ;
struct TYPE_18__ {unsigned int ce_mode; } ;
struct TYPE_14__ {int oid; } ;
struct TYPE_15__ {TYPE_2__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (TYPE_7__*,struct cache_entry*,int) ;
 struct commit* FUNC_1 (struct repository*) ;
 int FUNC_2 (struct repository*,struct commit_list**) ;
 struct commit_list** FUNC_3 (struct repository*,struct commit_list**,struct object_id*) ;
 int FUNC_4 (TYPE_7__*,char const*) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (TYPE_7__*,char const*,int ,int ,struct strbuf*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (TYPE_7__*) ;
 char* FUNC_12 (char*,char*,int ,int *,int ) ;
 int FUNC_13 (TYPE_7__*,char const*,int) ;
 scalar_t__ FUNC_14 (char const*,struct stat*) ;
 struct cache_entry* FUNC_15 (TYPE_7__*,int) ;
 struct blame_origin* FUNC_16 (struct commit*,char const*) ;
 int FUNC_17 (int ,char const*,int) ;
 int VAR_7 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int ,int ,int ,int *) ;
 int FUNC_21 (struct repository*) ;
 int FUNC_22 (char*,int ,struct object_id*,int *) ;
 int FUNC_23 (struct repository*,struct commit*,struct strbuf*) ;
 scalar_t__ FUNC_24 (char const*,struct stat*) ;
 int FUNC_25 (struct strbuf*,char*,char const*,...) ;
 int FUNC_26 (struct strbuf*,char*) ;
 int FUNC_27 (struct strbuf*,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_28 (struct strbuf*,int ,int ) ;
 int FUNC_29 (struct strbuf*,char const*,int ) ;
 int FUNC_30 (struct strbuf*,char const*,int ) ;
 scalar_t__ FUNC_31 (char const*,char const*) ;
 int FUNC_32 (char const*) ;
 int FUNC_33 (struct repository*,char const*,unsigned int,int *,int ,char**,unsigned long*) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (struct repository*,struct commit*,char const*) ;

__attribute__((used)) static struct commit *FUNC_36(struct repository *VAR_8,
            struct diff_options *VAR_9,
            const char *VAR_10,
            const char *VAR_11)
{
 struct commit *VAR_12;
 struct blame_origin *VAR_13;
 struct commit_list **VAR_14, *VAR_15;
 struct object_id VAR_16;
 struct strbuf VAR_17 = VAR_4;
 const char *VAR_18;
 time_t VAR_19;
 int VAR_20;
 struct cache_entry *VAR_21;
 unsigned VAR_22;
 struct strbuf VAR_23 = VAR_4;

 FUNC_21(VAR_8);
 FUNC_34(&VAR_19);
 VAR_12 = FUNC_1(VAR_8);
 VAR_12->object.parsed = 1;
 VAR_12->date = VAR_19;
 VAR_14 = &VAR_12->parents;

 if (!FUNC_22("HEAD", VAR_3, &VAR_16, ((void*)0)))
  FUNC_9("no such ref: HEAD");

 VAR_14 = FUNC_3(VAR_8, VAR_14, &VAR_16);
 FUNC_2(VAR_8, VAR_14);
 FUNC_35(VAR_8, VAR_12, VAR_10);

 VAR_13 = FUNC_16(VAR_12, VAR_10);

 VAR_18 = FUNC_12("Not Committed Yet", "not.committed.yet",
   VAR_6, ((void*)0), 0);
 FUNC_26(&VAR_23, "tree 0000000000000000000000000000000000000000\n");
 for (VAR_15 = VAR_12->parents; VAR_15; VAR_15 = VAR_15->next)
  FUNC_25(&VAR_23, "parent %s\n",
       FUNC_18(&VAR_15->item->object.oid));
 FUNC_25(&VAR_23,
      "author %s\n"
      "committer %s\n\n"
      "Version of %s from %s\n",
      VAR_18, VAR_18, VAR_10,
      (!VAR_11 ? VAR_10 :
       (!FUNC_31(VAR_11, "-") ? "standard input" : VAR_11)));
 FUNC_23(VAR_8, VAR_12, &VAR_23);

 if (!VAR_11 || FUNC_31("-", VAR_11)) {
  struct stat VAR_24;
  const char *VAR_25;
  char *VAR_26;
  unsigned long VAR_27;

  if (VAR_11) {
   if (FUNC_24(VAR_11, &VAR_24) < 0)
    FUNC_10("Cannot stat '%s'", VAR_11);
   VAR_25 = VAR_11;
  }
  else {
   if (FUNC_14(VAR_10, &VAR_24) < 0)
    FUNC_10("Cannot lstat '%s'", VAR_10);
   VAR_25 = VAR_10;
  }
  VAR_22 = FUNC_5(VAR_24.st_mode);

  switch (VAR_24.st_mode & VAR_5) {
  case 128:
   if (VAR_9->flags.allow_textconv &&
       FUNC_33(VAR_8, VAR_25, VAR_22, &VAR_7, 0, &VAR_26, &VAR_27))
    FUNC_27(&VAR_17, VAR_26, VAR_27, VAR_27 + 1);
   else if (FUNC_29(&VAR_17, VAR_25, VAR_24.st_size) != VAR_24.st_size)
    FUNC_10("cannot open or read '%s'", VAR_25);
   break;
  case 129:
   if (FUNC_30(&VAR_17, VAR_25, VAR_24.st_size) < 0)
    FUNC_10("cannot readlink '%s'", VAR_25);
   break;
  default:
   FUNC_9("unsupported file type %s", VAR_25);
  }
 }
 else {

  VAR_22 = 0;
  if (FUNC_28(&VAR_17, 0, 0) < 0)
   FUNC_10("failed to read from stdin");
 }
 FUNC_6(VAR_8->index, VAR_10, VAR_17.buf, VAR_17.len, &VAR_17, 0);
 VAR_13->file.ptr = VAR_17.buf;
 VAR_13->file.size = VAR_17.len;
 FUNC_20(VAR_17.buf, VAR_17.len, VAR_2, &VAR_13->blob_oid);







 FUNC_11(VAR_8->index);
 FUNC_21(VAR_8);

 VAR_20 = FUNC_32(VAR_10);
 if (!VAR_22) {
  int VAR_28 = FUNC_13(VAR_8->index, VAR_10, VAR_20);
  if (0 <= VAR_28)
   VAR_22 = VAR_8->index->cache[VAR_28]->ce_mode;
  else

   VAR_22 = 128 | 0644;
 }
 VAR_21 = FUNC_15(VAR_8->index, VAR_20);
 FUNC_19(&VAR_21->oid, &VAR_13->blob_oid);
 FUNC_17(VAR_21->name, VAR_10, VAR_20);
 VAR_21->ce_flags = FUNC_7(0);
 VAR_21->ce_namelen = VAR_20;
 VAR_21->ce_mode = FUNC_8(VAR_22);
 FUNC_0(VAR_8->index, VAR_21,
   VAR_0 | VAR_1);

 FUNC_4(VAR_8->index, VAR_10);

 return VAR_12;
}
