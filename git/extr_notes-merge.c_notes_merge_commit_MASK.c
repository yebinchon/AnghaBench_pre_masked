
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; int len; } ;
struct stat {int dummy; } ;
struct object_id {int dummy; } ;
struct notes_tree {int dummy; } ;
struct notes_merge_options {int verbosity; TYPE_1__* repo; } ;
struct dirent {int d_name; } ;
struct commit {int parents; } ;
struct TYPE_2__ {int index; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 scalar_t__ FUNC_0 (struct notes_tree*,struct object_id*,struct object_id*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,struct notes_tree*,int ,char const*,int ,struct object_id*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (struct commit*,int *) ;
 scalar_t__ FUNC_6 (int ,struct object_id*) ;
 int FUNC_7 (struct strbuf*,int ) ;
 scalar_t__ FUNC_8 (int ,struct object_id*,char*,struct stat*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 char* FUNC_10 (struct object_id*) ;
 int * FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,...) ;
 struct dirent* FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (char*,struct stat*) ;
 int FUNC_15 (struct strbuf*,char) ;
 int FUNC_16 (struct strbuf*,int ) ;
 int FUNC_17 (struct strbuf*) ;
 int FUNC_18 (struct strbuf*,int) ;
 int FUNC_19 (char const*) ;
 char* FUNC_20 (char const*,char*) ;
 int FUNC_21 (struct commit*,char const*) ;

int FUNC_22(struct notes_merge_options *VAR_3,
         struct notes_tree *VAR_4,
         struct commit *VAR_5,
         struct object_id *VAR_6)
{







 DIR *VAR_7;
 struct dirent *VAR_8;
 struct strbuf VAR_9 = VAR_2;
 const char *VAR_10 = FUNC_5(VAR_5, ((void*)0));
 const char *VAR_11 = FUNC_20(VAR_10, "\n\n");
 int VAR_12;

 FUNC_7(&VAR_9, VAR_1);
 if (VAR_3->verbosity >= 3)
  FUNC_12("Committing notes in notes merge worktree at %s\n",
   VAR_9.buf);

 if (!VAR_11 || VAR_11[2] == '\0')
  FUNC_3("partial notes commit has empty message");
 VAR_11 += 2;

 VAR_7 = FUNC_11(VAR_9.buf);
 if (!VAR_7)
  FUNC_4("could not open %s", VAR_9.buf);

 FUNC_15(&VAR_9, '/');
 VAR_12 = VAR_9.len;
 while ((VAR_8 = FUNC_13(VAR_7)) != ((void*)0)) {
  struct stat VAR_13;
  struct object_id VAR_14, VAR_15;

  if (FUNC_9(VAR_8->d_name))
   continue;

  if (FUNC_6(VAR_8->d_name, &VAR_14)) {
   if (VAR_3->verbosity >= 3)
    FUNC_12("Skipping non-SHA1 entry '%s%s'\n",
     VAR_9.buf, VAR_8->d_name);
   continue;
  }

  FUNC_16(&VAR_9, VAR_8->d_name);

  if (FUNC_14(VAR_9.buf, &VAR_13))
   FUNC_4("Failed to stat '%s'", VAR_9.buf);
  if (FUNC_8(VAR_3->repo->index, &VAR_15, VAR_9.buf, &VAR_13, VAR_0))
   FUNC_3("Failed to write blob object from '%s'", VAR_9.buf);
  if (FUNC_0(VAR_4, &VAR_14, &VAR_15, ((void*)0)))
   FUNC_3("Failed to add resolved note '%s' to notes tree",
       VAR_9.buf);
  if (VAR_3->verbosity >= 4)
   FUNC_12("Added resolved note for object %s: %s\n",
    FUNC_10(&VAR_14), FUNC_10(&VAR_15));
  FUNC_18(&VAR_9, VAR_12);
 }

 FUNC_2(VAR_3->repo, VAR_4, VAR_5->parents, VAR_11,
       FUNC_19(VAR_11), VAR_6);
 FUNC_21(VAR_5, VAR_10);
 if (VAR_3->verbosity >= 4)
  FUNC_12("Finalized notes merge commit: %s\n",
   FUNC_10(VAR_6));
 FUNC_17(&VAR_9);
 FUNC_1(VAR_7);
 return 0;
}
