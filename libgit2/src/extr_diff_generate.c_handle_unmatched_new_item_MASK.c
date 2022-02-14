
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef scalar_t__ git_iterator_status_t ;
struct TYPE_31__ {scalar_t__ mode; int path; } ;
typedef TYPE_3__ git_index_entry ;
struct TYPE_29__ {int deltas; } ;
struct TYPE_32__ {TYPE_1__ base; } ;
typedef TYPE_4__ git_diff_generated ;
struct TYPE_30__ {scalar_t__ mode; } ;
struct TYPE_33__ {TYPE_2__ old_file; scalar_t__ status; } ;
typedef TYPE_5__ git_diff_delta ;
typedef scalar_t__ git_delta_t ;
typedef int git_buf ;
struct TYPE_34__ {TYPE_8__* new_iter; TYPE_3__* nitem; int repo; int oitem; } ;
typedef TYPE_6__ diff_in_progress ;
struct TYPE_35__ {scalar_t__ type; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int *,TYPE_3__ const*) ;
 TYPE_5__* FUNC_3 (TYPE_4__*,TYPE_3__ const*) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_3__ const*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_3__ const*) ;
 scalar_t__ FUNC_8 (TYPE_8__*) ;
 scalar_t__ FUNC_9 (TYPE_8__*) ;
 scalar_t__ FUNC_10 (int **,TYPE_8__*) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_3__**,TYPE_8__*) ;
 int FUNC_15 (TYPE_3__**,TYPE_8__*) ;
 int FUNC_16 (TYPE_3__**,scalar_t__*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_17(
 git_diff_generated *VAR_21, diff_in_progress *VAR_22)
{
 int VAR_23 = 0;
 const git_index_entry *VAR_24 = VAR_22->nitem;
 git_delta_t VAR_25 = VAR_6;
 bool VAR_26;


 VAR_26 = FUNC_4(VAR_21, VAR_22->oitem, VAR_24);


 if (FUNC_7(VAR_24))
  VAR_25 = VAR_2;


 else if (FUNC_8(VAR_22->new_iter))
  VAR_25 = VAR_3;

 if (VAR_24->mode == VAR_15) {
  bool VAR_27 = VAR_26;


  VAR_27 = VAR_26 ||
   (VAR_25 == VAR_6 &&
    FUNC_1(VAR_21, VAR_12)) ||
   (VAR_25 == VAR_3 &&
    FUNC_1(VAR_21, VAR_11));


  if (VAR_27 && !VAR_26) {
   git_buf *VAR_28 = ((void*)0);
   if (FUNC_10(&VAR_28, VAR_22->new_iter) < 0)
    return -1;
   if (VAR_28 && FUNC_11(VAR_28, VAR_0)) {

    VAR_27 = 0;
   }
  }




  if (!VAR_27 &&
   VAR_25 == VAR_6 &&
   FUNC_0(VAR_21, VAR_7))
  {
   git_diff_delta *VAR_29;
   git_iterator_status_t VAR_30;


   if ((VAR_23 = FUNC_2(VAR_21, VAR_25, ((void*)0), VAR_24)) != 0)
    return VAR_23;


   VAR_29 = FUNC_3(VAR_21, VAR_24);
   if (!VAR_29)
    return FUNC_14(&VAR_22->nitem, VAR_22->new_iter);


   if ((VAR_23 = FUNC_16(
     &VAR_22->nitem, &VAR_30, VAR_22->new_iter)) < 0)
    return VAR_23;


   if (VAR_30 == VAR_18) {
    FUNC_13(&VAR_21->base.deltas);
    FUNC_5(VAR_29);
   }


   if (VAR_30 == VAR_19 ||
    VAR_30 == VAR_17) {
    VAR_29->status = VAR_3;


    if (FUNC_0(VAR_21, VAR_8)) {
     FUNC_13(&VAR_21->base.deltas);
     FUNC_5(VAR_29);
    }
   }

   return 0;
  }


  if (VAR_27) {
   VAR_23 = FUNC_15(&VAR_22->nitem, VAR_22->new_iter);


   if (VAR_23 == VAR_13) {
    FUNC_6();
    VAR_23 = FUNC_14(&VAR_22->nitem, VAR_22->new_iter);
   }

   return VAR_23;
  }
 }

 else if (VAR_25 == VAR_3 &&
  FUNC_0(VAR_21, VAR_11) &&
  FUNC_9(VAR_22->new_iter))

  return FUNC_14(&VAR_22->nitem, VAR_22->new_iter);

 else if (VAR_22->new_iter->type != VAR_20) {
  if (VAR_25 != VAR_2)
   VAR_25 = VAR_1;
 }

 else if (VAR_24->mode == VAR_14) {

  if (FUNC_12(((void*)0), VAR_22->repo, VAR_24->path) != 0) {
   FUNC_6();
   VAR_25 = VAR_3;


   if (VAR_26) {
    VAR_23 = FUNC_15(&VAR_22->nitem, VAR_22->new_iter);
    if (VAR_23 != VAR_13)
     return VAR_23;

    FUNC_6();
    return FUNC_14(&VAR_22->nitem, VAR_22->new_iter);
   }
  }
 }

 else if (VAR_24->mode == VAR_16) {
  if (FUNC_1(VAR_21, VAR_10))
   VAR_25 = VAR_6;
  else
   VAR_25 = VAR_5;
 }


 if ((VAR_23 = FUNC_2(VAR_21, VAR_25, ((void*)0), VAR_24)) != 0)
  return VAR_23;




 if (VAR_25 != VAR_3 &&
  FUNC_1(VAR_21, VAR_9) &&
  VAR_26)
 {

  git_diff_delta *VAR_31 = FUNC_3(VAR_21, VAR_24);
  if (VAR_31) {
   VAR_31->status = VAR_4;
   VAR_31->old_file.mode = VAR_15;
  }
 }

 return FUNC_14(&VAR_22->nitem, VAR_22->new_iter);
}
