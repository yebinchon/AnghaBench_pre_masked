
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct merge_options {char const* branch1; int recursive_variant; } ;
struct TYPE_4__ {int mode; int oid; } ;
struct merge_file_info {int merge; int clean; TYPE_1__ blob; } ;
struct diff_filespec {int mode; int oid; int path; } ;
struct TYPE_5__ {int ptr; int size; } ;
typedef TYPE_2__ mmbuffer_t ;


 int FUNC_0 (char*) ;



 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (struct merge_options*,int ,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct merge_options*,TYPE_2__*,struct diff_filespec const*,struct diff_filespec const*,struct diff_filespec const*,char const*,char const*,int const) ;
 int FUNC_8 (struct merge_options*,int *,int ,int *,int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct merge_options*,int,int ,char const*) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_13(struct merge_options *VAR_2,
       const struct diff_filespec *VAR_3,
       const struct diff_filespec *VAR_4,
       const struct diff_filespec *VAR_5,
       const char *VAR_6,
       const char *VAR_7,
       const char *VAR_8,
       const int VAR_9,
       struct merge_file_info *VAR_10)
{
 if (VAR_2->branch1 != VAR_7) {





  return FUNC_13(VAR_2, VAR_3, VAR_5, VAR_4,
            VAR_6,
            VAR_8, VAR_7,
            VAR_9, VAR_10);
 }

 VAR_10->merge = 0;
 VAR_10->clean = 1;

 if ((VAR_0 & VAR_4->mode) != (VAR_0 & VAR_5->mode)) {
  VAR_10->clean = 0;
  if (FUNC_3(VAR_4->mode)) {
   VAR_10->blob.mode = VAR_4->mode;
   FUNC_10(&VAR_10->blob.oid, &VAR_4->oid);
  } else {
   VAR_10->blob.mode = VAR_5->mode;
   FUNC_10(&VAR_10->blob.oid, &VAR_5->oid);
  }
 } else {
  if (!FUNC_9(&VAR_4->oid, &VAR_3->oid) && !FUNC_9(&VAR_5->oid, &VAR_3->oid))
   VAR_10->merge = 1;




  if (VAR_4->mode == VAR_5->mode || VAR_4->mode == VAR_3->mode)
   VAR_10->blob.mode = VAR_5->mode;
  else {
   VAR_10->blob.mode = VAR_4->mode;
   if (VAR_5->mode != VAR_3->mode) {
    VAR_10->clean = 0;
    VAR_10->merge = 1;
   }
  }

  if (FUNC_9(&VAR_4->oid, &VAR_5->oid) || FUNC_9(&VAR_4->oid, &VAR_3->oid))
   FUNC_10(&VAR_10->blob.oid, &VAR_5->oid);
  else if (FUNC_9(&VAR_5->oid, &VAR_3->oid))
   FUNC_10(&VAR_10->blob.oid, &VAR_4->oid);
  else if (FUNC_3(VAR_4->mode)) {
   mmbuffer_t VAR_11;
   int VAR_12 = 0, VAR_13;

   VAR_13 = FUNC_7(VAR_2, &VAR_11, VAR_3, VAR_4, VAR_5,
        VAR_7, VAR_8,
        VAR_9);

   if ((VAR_13 < 0) || !VAR_11.ptr)
    VAR_12 = FUNC_5(VAR_2, FUNC_4("Failed to execute internal merge"));

   if (!VAR_12 &&
       FUNC_12(VAR_11.ptr, VAR_11.size,
           VAR_1, &VAR_10->blob.oid))
    VAR_12 = FUNC_5(VAR_2, FUNC_4("Unable to add %s to database"),
       VAR_4->path);

   FUNC_6(VAR_11.ptr);
   if (VAR_12)
    return VAR_12;
   VAR_10->clean = (VAR_13 == 0);
  } else if (FUNC_1(VAR_4->mode)) {
   VAR_10->clean = FUNC_8(VAR_2, &VAR_10->blob.oid,
       VAR_3->path,
       &VAR_3->oid,
       &VAR_4->oid,
       &VAR_5->oid);
  } else if (FUNC_2(VAR_4->mode)) {
   switch (VAR_2->recursive_variant) {
   case 130:
    FUNC_10(&VAR_10->blob.oid, &VAR_4->oid);
    if (!FUNC_9(&VAR_4->oid, &VAR_5->oid))
     VAR_10->clean = 0;
    break;
   case 129:
    FUNC_10(&VAR_10->blob.oid, &VAR_4->oid);
    break;
   case 128:
    FUNC_10(&VAR_10->blob.oid, &VAR_5->oid);
    break;
   }
  } else
   FUNC_0("unsupported object type in the tree");
 }

 if (VAR_10->merge)
  FUNC_11(VAR_2, 2, FUNC_4("Auto-merging %s"), VAR_6);

 return 0;
}
