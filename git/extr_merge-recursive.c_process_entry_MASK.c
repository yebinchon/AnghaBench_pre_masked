
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stage_data {int processed; struct rename_conflict_info* rename_conflict_info; struct diff_filespec* stages; } ;
struct rename_conflict_info {int rename_type; TYPE_6__* ren2; TYPE_6__* ren1; } ;
struct merge_options {int renormalize; scalar_t__ branch1; char* branch2; TYPE_2__* repo; TYPE_1__* priv; } ;
struct merge_file_info {int dummy; } ;
struct diff_filespec {char* path; int mode; } ;
struct TYPE_12__ {scalar_t__ branch; TYPE_5__* pair; } ;
struct TYPE_11__ {TYPE_4__* two; TYPE_3__* one; } ;
struct TYPE_10__ {char* path; } ;
struct TYPE_9__ {char* path; } ;
struct TYPE_8__ {int index; } ;
struct TYPE_7__ {scalar_t__ call_depth; } ;


 int FUNC_0 (char*) ;







 int FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct merge_options*,struct diff_filespec*,struct diff_filespec*,int,char const*) ;
 scalar_t__ FUNC_5 (int ,char const*,int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct merge_file_info*,struct merge_options*,char const*,int,struct diff_filespec*,struct diff_filespec*,struct diff_filespec*,int *) ;
 int FUNC_8 (struct merge_options*,char const*,int *,int *,char*,char*,struct diff_filespec*,struct diff_filespec*) ;
 scalar_t__ FUNC_9 (struct merge_options*,char const*,struct diff_filespec*,struct diff_filespec*,struct diff_filespec*) ;
 int FUNC_10 (struct merge_options*,struct rename_conflict_info*) ;
 int FUNC_11 (struct merge_options*,struct rename_conflict_info*) ;
 int FUNC_12 (struct merge_options*,char const*,struct diff_filespec*,struct diff_filespec*,struct diff_filespec*,struct rename_conflict_info*) ;
 int FUNC_13 (struct merge_options*,struct rename_conflict_info*) ;
 int FUNC_14 (struct merge_options*,struct rename_conflict_info*) ;
 int FUNC_15 (struct merge_options*,struct rename_conflict_info*) ;
 int FUNC_16 (struct diff_filespec*) ;
 int FUNC_17 (struct merge_options*,int,char*,char const*,...) ;
 int FUNC_18 (struct merge_options*,int,char const*,int) ;
 int FUNC_19 (int ,char const*) ;
 char* FUNC_20 (struct merge_options*,char const*,char const*) ;
 scalar_t__ FUNC_21 (struct merge_options*,int ,struct diff_filespec const*,char*) ;
 scalar_t__ FUNC_22 (struct merge_options*,struct diff_filespec const*,char const*,int,int) ;
 int FUNC_23 (struct merge_options*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_24(struct merge_options *VAR_0,
    const char *VAR_1, struct stage_data *VAR_2)
{
 int VAR_3 = 1;
 int VAR_4 = VAR_0->renormalize;

 struct diff_filespec *VAR_5 = &VAR_2->stages[1];
 struct diff_filespec *VAR_6 = &VAR_2->stages[2];
 struct diff_filespec *VAR_7 = &VAR_2->stages[3];
 int VAR_8 = FUNC_16(VAR_5);
 int VAR_9 = FUNC_16(VAR_6);
 int VAR_10 = FUNC_16(VAR_7);
 VAR_5->path = VAR_6->path = VAR_7->path = (char*)VAR_1;

 VAR_2->processed = 1;
 if (VAR_2->rename_conflict_info) {
  struct rename_conflict_info *VAR_11 = VAR_2->rename_conflict_info;
  struct diff_filespec *VAR_12;
  int VAR_13;

  VAR_13 = FUNC_23(VAR_0, VAR_11->ren1);
  VAR_13 &= FUNC_23(VAR_0, VAR_11->ren2);







  VAR_12 = (VAR_0->branch1 == VAR_11->ren1->branch) ? VAR_7 : VAR_6;
  VAR_5->path = VAR_12->path = VAR_11->ren1->pair->one->path;
  if (VAR_11->ren2) {
   FUNC_3(VAR_0->branch1 == VAR_11->ren1->branch);
  }

  switch (VAR_11->rename_type) {
  case 132:
  case 131:
   VAR_3 = FUNC_12(VAR_0, VAR_1, VAR_5, VAR_6, VAR_7,
          VAR_11);
   break;
  case 128:
   VAR_3 = FUNC_15(VAR_0, VAR_11);
   break;
  case 134:






   VAR_3 = FUNC_10(VAR_0, VAR_11);
   break;
  case 133:
   VAR_3 = 0;
   if (FUNC_11(VAR_0, VAR_11))
    VAR_3 = -1;
   break;
  case 130:




   VAR_5->path = VAR_11->ren1->pair->one->path;
   VAR_6->path = VAR_11->ren1->pair->two->path;
   VAR_7->path = VAR_11->ren2->pair->two->path;

   VAR_3 = 0;
   if (FUNC_13(VAR_0, VAR_11))
    VAR_3 = -1;
   break;
  case 129:




   VAR_5->path = ((void*)0);
   VAR_6->path = VAR_11->ren1->pair->two->path;
   VAR_7->path = VAR_11->ren2->pair->two->path;







   VAR_3 = FUNC_14(VAR_0, VAR_11);
   break;
  default:
   VAR_2->processed = 0;
   break;
  }
  if (VAR_13 < VAR_3)
   VAR_3 = VAR_13;
 } else if (VAR_8 && (!VAR_9 || !VAR_10)) {

  if ((!VAR_9 && !VAR_10) ||
      (!VAR_10 && FUNC_4(VAR_0, VAR_5, VAR_6, VAR_4, VAR_1)) ||
      (!VAR_9 && FUNC_4(VAR_0, VAR_5, VAR_7, VAR_4, VAR_1))) {


   if (VAR_9)
    FUNC_17(VAR_0, 2, FUNC_2("Removing %s"), VAR_1);

   FUNC_18(VAR_0, 1, VAR_1, !VAR_9);
  } else {

   VAR_3 = 0;
   if (FUNC_9(VAR_0, VAR_1, VAR_5, VAR_6, VAR_7))
    VAR_3 = -1;
  }
 } else if ((!VAR_8 && VAR_9 && !VAR_10) ||
     (!VAR_8 && !VAR_9 && VAR_10)) {



  const char *VAR_14;
  const char *VAR_15;
  const char *VAR_16;
  const struct diff_filespec *VAR_17;

  if (VAR_9) {
   VAR_14 = VAR_0->branch1;
   VAR_15 = VAR_0->branch2;
   VAR_17 = VAR_6;
   VAR_16 = FUNC_2("file/directory");
  } else {
   VAR_14 = VAR_0->branch2;
   VAR_15 = VAR_0->branch1;
   VAR_17 = VAR_7;
   VAR_16 = FUNC_2("directory/file");
  }
  if (FUNC_5(VAR_0->repo->index, VAR_1,
          !VAR_0->priv->call_depth && !FUNC_1(VAR_6->mode),
          0)) {
   char *VAR_18 = FUNC_20(VAR_0, VAR_1, VAR_14);
   VAR_3 = 0;
   FUNC_17(VAR_0, 1, FUNC_2("CONFLICT (%s): There is a directory with name %s in %s. "
          "Adding %s as %s"),
          VAR_16, VAR_1, VAR_15, VAR_1, VAR_18);
   if (FUNC_21(VAR_0, 0, VAR_17, VAR_18))
    VAR_3 = -1;
   else if (VAR_0->priv->call_depth)
    FUNC_19(VAR_0->repo->index, VAR_1);
   FUNC_6(VAR_18);
  } else {
   FUNC_17(VAR_0, 2, FUNC_2("Adding %s"), VAR_1);

   if (FUNC_22(VAR_0, VAR_17, VAR_1, 1, !VAR_9))
    VAR_3 = -1;
  }
 } else if (VAR_9 && VAR_10) {
  if (!VAR_8) {

   FUNC_17(VAR_0, 1,
          FUNC_2("CONFLICT (add/add): Merge conflict in %s"),
          VAR_1);
   VAR_3 = FUNC_8(VAR_0,
           VAR_1, ((void*)0), ((void*)0),
           VAR_0->branch1,
           VAR_0->branch2,
           VAR_6, VAR_7);
  } else {

   struct merge_file_info VAR_19;
   int VAR_20 = 0;
   VAR_3 = FUNC_7(&VAR_19, VAR_0, VAR_1,
          VAR_20,
          VAR_5, VAR_6, VAR_7, ((void*)0));
  }
 } else if (!VAR_8 && !VAR_9 && !VAR_10) {




  FUNC_18(VAR_0, 1, VAR_1, !VAR_6->mode);
 } else
  FUNC_0("fatal merge failure, shouldn't happen.");

 return VAR_3;
}
