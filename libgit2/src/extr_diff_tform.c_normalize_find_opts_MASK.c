
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ git_hashsig_option_t ;
typedef int git_diff_similarity_metric ;
struct TYPE_11__ {int flags; scalar_t__ rename_limit; TYPE_8__* metric; void* break_rewrite_threshold; void* copy_threshold; void* rename_from_rewrite_threshold; void* rename_threshold; } ;
typedef TYPE_1__ git_diff_find_options ;
struct TYPE_12__ {int * repo; } ;
typedef TYPE_2__ git_diff ;
typedef int git_config ;
struct TYPE_13__ {void* payload; int similarity; int free_signature; int buffer_signature; int file_signature; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_1__ const*,int ,char*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (char*) ;
 TYPE_8__* FUNC_4 (int) ;
 int FUNC_5 (int*,char*) ;
 scalar_t__ FUNC_6 (int *,char*,scalar_t__) ;
 char* FUNC_7 (int *,char*,char*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_8 (int **,int *) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static int FUNC_11(
 git_diff *VAR_23,
 git_diff_find_options *VAR_24,
 const git_diff_find_options *VAR_25)
{
 git_config *VAR_26 = ((void*)0);
 git_hashsig_option_t VAR_27;

 FUNC_1(VAR_25, VAR_11, "git_diff_find_options");

 if (VAR_23->repo != ((void*)0) &&
  FUNC_8(&VAR_26, VAR_23->repo) < 0)
  return -1;

 if (VAR_25)
  FUNC_9(VAR_24, VAR_25, sizeof(*VAR_24));

 if (!VAR_25 ||
   (VAR_25->flags & VAR_4) == VAR_5)
 {
  if (VAR_26) {
   char *VAR_28 =
    FUNC_7(VAR_26, "diff.renames", "true");
   int VAR_29;

   if (!FUNC_5(&VAR_29, VAR_28) && !VAR_29)
                                                       ;
   else if (!FUNC_10(VAR_28, "copies") || !FUNC_10(VAR_28, "copy"))
    VAR_24->flags |= VAR_12 | VAR_6;
   else
    VAR_24->flags |= VAR_12;

   FUNC_3(VAR_28);
  } else {

   VAR_24->flags |= VAR_12;
  }
 }



 if (VAR_24->flags & VAR_9) {



  VAR_24->flags &= ~(VAR_14 | VAR_3);


  VAR_24->flags &= ~VAR_13;
 }

 if (VAR_24->flags & VAR_13)
  VAR_24->flags |= VAR_12;

 if (VAR_24->flags & VAR_7)
  VAR_24->flags |= VAR_6;

 if (VAR_24->flags & VAR_3)
  VAR_24->flags |= VAR_14;



 if (((VAR_24->rename_threshold) == 0 || (VAR_24->rename_threshold) > 100))
  VAR_24->rename_threshold = VAR_2;

 if (((VAR_24->rename_from_rewrite_threshold) == 0 || (VAR_24->rename_from_rewrite_threshold) > 100))
  VAR_24->rename_from_rewrite_threshold = VAR_2;

 if (((VAR_24->copy_threshold) == 0 || (VAR_24->copy_threshold) > 100))
  VAR_24->copy_threshold = VAR_2;

 if (((VAR_24->break_rewrite_threshold) == 0 || (VAR_24->break_rewrite_threshold) > 100))
  VAR_24->break_rewrite_threshold = VAR_0;



 if (!VAR_24->rename_limit) {
  if (VAR_26) {
   VAR_24->rename_limit = FUNC_6(
    VAR_26, "diff.renamelimit", VAR_1);
  }

  if (VAR_24->rename_limit <= 0)
   VAR_24->rename_limit = VAR_1;
 }


 if (!VAR_24->metric) {
  VAR_24->metric = FUNC_4(sizeof(git_diff_similarity_metric));
  FUNC_0(VAR_24->metric);

  VAR_24->metric->file_signature = VAR_21;
  VAR_24->metric->buffer_signature = VAR_20;
  VAR_24->metric->free_signature = VAR_22;
  VAR_24->metric->similarity = VAR_19;

  if (VAR_24->flags & VAR_10)
   VAR_27 = VAR_16;
  else if (VAR_24->flags & VAR_8)
   VAR_27 = VAR_17;
  else
   VAR_27 = VAR_18;
  VAR_27 |= VAR_15;
  VAR_24->metric->payload = (void *)VAR_27;
 }

 return 0;
}
