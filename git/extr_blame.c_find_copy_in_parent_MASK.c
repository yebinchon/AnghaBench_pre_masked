
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int recursive; int find_copies_harder; } ;
struct diff_options {int pathspec; TYPE_2__ flags; int output_format; } ;
struct diff_filepair {TYPE_8__* one; } ;
struct TYPE_9__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct blame_scoreboard {scalar_t__ copy_score; int num_read_blob; TYPE_3__* revs; int repo; } ;
struct blame_origin {struct blame_entry* suspects; int mode; int blob_oid; int path; struct commit* commit; } ;
struct blame_list {struct blame_entry* ent; struct blame_entry* split; } ;
struct blame_entry {struct blame_entry* next; scalar_t__ suspect; } ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_4__ mmfile_t ;
struct TYPE_14__ {int mode; int oid; int path; } ;
struct TYPE_13__ {int nr; struct diff_filepair** queue; } ;
struct TYPE_11__ {int diffopt; } ;


 int FUNC_0 (TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct blame_scoreboard*,struct blame_entry*) ;
 int FUNC_3 (struct blame_origin*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct blame_scoreboard*,struct blame_entry*,struct blame_entry*) ;
 int FUNC_6 (struct blame_entry*) ;
 int FUNC_7 (struct diff_options*) ;
 TYPE_7__ VAR_3 ;
 int FUNC_8 (struct diff_options*) ;
 int FUNC_9 (int ,int ,char*,struct diff_options*) ;
 int FUNC_10 (struct diff_options*) ;
 int FUNC_11 (int ,struct diff_options*) ;
 int FUNC_12 (int *,struct blame_origin*,TYPE_4__*,int *,int ) ;
 struct blame_entry** FUNC_13 (struct blame_scoreboard*,struct blame_entry**,struct blame_entry**,scalar_t__) ;
 int FUNC_14 (struct blame_scoreboard*,struct blame_entry*,struct blame_origin*,struct blame_entry*,TYPE_4__*) ;
 int FUNC_15 (struct blame_list*) ;
 int FUNC_16 (struct commit*) ;
 struct blame_origin* FUNC_17 (struct commit*,int ) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int ,struct diff_options*) ;
 struct blame_entry* FUNC_21 (struct blame_entry*,int *) ;
 struct blame_list* FUNC_22 (struct blame_entry*,int*) ;
 int FUNC_23 (struct blame_entry***,struct blame_entry***,struct blame_entry*,struct blame_entry*) ;
 scalar_t__ FUNC_24 (int ,int ) ;

__attribute__((used)) static void FUNC_25(struct blame_scoreboard *VAR_4,
    struct blame_entry ***VAR_5,
    struct blame_entry **VAR_6,
    struct blame_origin *VAR_7,
    struct commit *VAR_8,
    struct blame_origin *VAR_9,
    int VAR_10)
{
 struct diff_options VAR_11;
 int VAR_12, VAR_13;
 struct blame_list *VAR_14;
 int VAR_15;
 struct blame_entry *VAR_16 = VAR_7->suspects;
 struct blame_entry *VAR_17 = ((void*)0);

 if (!VAR_16)
  return;

 FUNC_20(VAR_4->repo, &VAR_11);
 VAR_11.flags.recursive = 1;
 VAR_11.output_format = VAR_0;

 FUNC_8(&VAR_11);
 if ((VAR_10 & VAR_2)
     || ((VAR_10 & VAR_1)
  && (!VAR_9 || FUNC_24(VAR_7->path, VAR_9->path))))
  VAR_11.flags.find_copies_harder = 1;

 if (FUNC_18(&VAR_7->commit->object.oid))
  FUNC_11(FUNC_16(VAR_8), &VAR_11);
 else
  FUNC_9(FUNC_16(VAR_8),
         FUNC_16(VAR_7->commit),
         "", &VAR_11);

 if (!VAR_11.flags.find_copies_harder)
  FUNC_10(&VAR_11);

 do {
  struct blame_entry **VAR_18 = &VAR_16;
  VAR_14 = FUNC_22(VAR_16, &VAR_15);

  for (VAR_12 = 0; VAR_12 < VAR_3.nr; VAR_12++) {
   struct diff_filepair *VAR_19 = VAR_3.queue[VAR_12];
   struct blame_origin *VAR_20;
   mmfile_t VAR_21;
   struct blame_entry VAR_22[3];

   if (!FUNC_0(VAR_19->one))
    continue;
   if (FUNC_1(VAR_19->one->mode))
    continue;
   if (VAR_9 && !FUNC_24(VAR_19->one->path, VAR_9->path))

    continue;

   VAR_20 = FUNC_17(VAR_8, VAR_19->one->path);
   FUNC_19(&VAR_20->blob_oid, &VAR_19->one->oid);
   VAR_20->mode = VAR_19->one->mode;
   FUNC_12(&VAR_4->revs->diffopt, VAR_20, &VAR_21,
      &VAR_4->num_read_blob, 0);
   if (!VAR_21.ptr)
    continue;

   for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
    FUNC_14(VAR_4, VAR_14[VAR_13].ent,
        VAR_20, VAR_22, &VAR_21);
    FUNC_5(VAR_4, VAR_14[VAR_13].split,
           VAR_22);
    FUNC_6(VAR_22);
   }
   FUNC_3(VAR_20);
  }

  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
   struct blame_entry *VAR_23 = VAR_14[VAR_13].split;
   if (VAR_23[1].suspect &&
       VAR_4->copy_score < FUNC_2(VAR_4, &VAR_23[1])) {
    FUNC_23(VAR_5, &VAR_18, VAR_23,
         VAR_14[VAR_13].ent);
   } else {
    VAR_14[VAR_13].ent->next = VAR_17;
    VAR_17 = VAR_14[VAR_13].ent;
   }
   FUNC_6(VAR_23);
  }
  FUNC_15(VAR_14);
  *VAR_18 = ((void*)0);
  VAR_6 = FUNC_13(VAR_4, VAR_6, &VAR_16, VAR_4->copy_score);
 } while (VAR_16);
 VAR_7->suspects = FUNC_21(VAR_17, ((void*)0));
 FUNC_7(&VAR_11);
 FUNC_4(&VAR_11.pathspec);
}
