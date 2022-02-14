
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct patch_id_t {int ctxlen; scalar_t__ flags; int * ctx; } ;
typedef struct patch_id_t xpparam_t ;
typedef int xpp ;
typedef int xecfg ;
typedef struct patch_id_t xdemitconf_t ;
struct object_id {int hash; } ;
struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_options {TYPE_2__* repo; } ;
struct diff_filepair {scalar_t__ status; TYPE_3__* one; TYPE_3__* two; } ;
typedef int mmfile_t ;
typedef int git_hash_ctx ;
struct TYPE_10__ {scalar_t__ mode; int path; int oid; } ;
struct TYPE_9__ {int index; } ;
struct TYPE_8__ {int hexsz; int (* final_fn ) (int ,int *) ;int (* update_fn ) (int *,int ,int) ;int (* init_fn ) (int *) ;} ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (struct diff_filepair*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 struct diff_queue_struct VAR_1 ;
 scalar_t__ FUNC_5 (struct diff_filepair*) ;
 int VAR_2 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *,TYPE_3__*) ;
 int FUNC_8 (struct object_id*,int *) ;
 int FUNC_9 (struct patch_id_t*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct object_id*) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,char*) ;
 int VAR_3 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *,int ,int) ;
 int FUNC_19 (int *,int ,int) ;
 int FUNC_20 (int *,int ,int) ;
 int FUNC_21 (int *,int ,int) ;
 int FUNC_22 (int *,int ,int) ;
 int FUNC_23 (int *,int ,int) ;
 int FUNC_24 (int *,int ,int) ;
 int FUNC_25 (int *,int ,int) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_26 (int *,int *,int ,int ,struct patch_id_t*,struct patch_id_t*,struct patch_id_t*) ;

__attribute__((used)) static int FUNC_27(struct diff_options *VAR_5, struct object_id *VAR_6, int VAR_7, int VAR_8)
{
 struct diff_queue_struct *VAR_9 = &VAR_1;
 int VAR_10;
 git_hash_ctx VAR_11;
 struct patch_id_t VAR_12;

 VAR_4->init_fn(&VAR_11);
 FUNC_9(&VAR_12, 0, sizeof(struct patch_id_t));
 VAR_12.ctx = &VAR_11;
 FUNC_11(VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_9->nr; VAR_10++) {
  xpparam_t VAR_13;
  xdemitconf_t VAR_14;
  mmfile_t VAR_15, VAR_16;
  struct diff_filepair *VAR_17 = VAR_9->queue[VAR_10];
  int VAR_18, VAR_19;

  FUNC_9(&VAR_13, 0, sizeof(VAR_13));
  FUNC_9(&VAR_14, 0, sizeof(VAR_14));
  if (VAR_17->status == 0)
   return FUNC_6("internal diff status error");
  if (VAR_17->status == VAR_0)
   continue;
  if (FUNC_5(VAR_17))
   continue;
  if ((FUNC_0(VAR_17->one) && FUNC_2(VAR_17->one->mode)) ||
      (FUNC_0(VAR_17->two) && FUNC_2(VAR_17->two->mode)))
   continue;
  if (FUNC_1(VAR_17))
   continue;

  FUNC_4(VAR_17->one, VAR_5->repo->index);
  FUNC_4(VAR_17->two, VAR_5->repo->index);

  VAR_18 = FUNC_14(VAR_17->one->path, FUNC_15(VAR_17->one->path));
  VAR_19 = FUNC_14(VAR_17->two->path, FUNC_15(VAR_17->two->path));
  FUNC_13(&VAR_11, "diff--git");
  FUNC_13(&VAR_11, "a/");
  VAR_4->update_fn(&VAR_11, VAR_17->one->path, VAR_18);
  FUNC_13(&VAR_11, "b/");
  VAR_4->update_fn(&VAR_11, VAR_17->two->path, VAR_19);

  if (VAR_17->one->mode == 0) {
   FUNC_13(&VAR_11, "newfilemode");
   FUNC_12(&VAR_11, VAR_17->two->mode);
   FUNC_13(&VAR_11, "---/dev/null");
   FUNC_13(&VAR_11, "+++b/");
   VAR_4->update_fn(&VAR_11, VAR_17->two->path, VAR_19);
  } else if (VAR_17->two->mode == 0) {
   FUNC_13(&VAR_11, "deletedfilemode");
   FUNC_12(&VAR_11, VAR_17->one->mode);
   FUNC_13(&VAR_11, "---a/");
   VAR_4->update_fn(&VAR_11, VAR_17->one->path, VAR_18);
   FUNC_13(&VAR_11, "+++/dev/null");
  } else {
   FUNC_13(&VAR_11, "---a/");
   VAR_4->update_fn(&VAR_11, VAR_17->one->path, VAR_18);
   FUNC_13(&VAR_11, "+++b/");
   VAR_4->update_fn(&VAR_11, VAR_17->two->path, VAR_19);
  }

  if (VAR_7)
   continue;

  if (FUNC_7(VAR_5->repo, &VAR_15, VAR_17->one) < 0 ||
      FUNC_7(VAR_5->repo, &VAR_16, VAR_17->two) < 0)
   return FUNC_6("unable to read files to diff");

  if (FUNC_3(VAR_5->repo, VAR_17->one) ||
      FUNC_3(VAR_5->repo, VAR_17->two)) {
   VAR_4->update_fn(&VAR_11, FUNC_10(&VAR_17->one->oid),
     VAR_4->hexsz);
   VAR_4->update_fn(&VAR_11, FUNC_10(&VAR_17->two->oid),
     VAR_4->hexsz);
   continue;
  }

  VAR_13.flags = 0;
  VAR_14.ctxlen = 3;
  VAR_14.flags = 0;
  if (FUNC_26(&VAR_15, &VAR_16, VAR_2,
      VAR_3, &VAR_12, &VAR_13, &VAR_14))
   return FUNC_6("unable to generate patch-id diff for %s",
         VAR_17->one->path);

  if (VAR_8)
   FUNC_8(VAR_6, &VAR_11);
 }

 if (!VAR_8)
  VAR_4->final_fn(VAR_6->hash, &VAR_11);

 return 0;
}
