
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int noid ;
typedef int git_oid ;
struct TYPE_21__ {unsigned int mode; int flags; int flags_extended; scalar_t__ file_size; scalar_t__ ino; scalar_t__ uid; scalar_t__ gid; int path; int id; int ctime; int mtime; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
struct TYPE_22__ {int diffcaps; int base; } ;
typedef TYPE_2__ git_diff_generated ;
typedef int git_delta_t ;
struct TYPE_23__ {TYPE_8__* new_iter; TYPE_1__* nitem; TYPE_1__* oitem; } ;
typedef TYPE_3__ diff_in_progress ;
struct TYPE_24__ {scalar_t__ type; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int VAR_19 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_6 (TYPE_2__*,int ,TYPE_1__ const*,unsigned int,TYPE_1__ const*,unsigned int,int *,char const*) ;
 int FUNC_7 (char const**,TYPE_2__*,TYPE_1__ const*) ;
 int FUNC_8 (int *,int *,TYPE_1__ const*,unsigned int,int const*) ;
 scalar_t__ FUNC_9 (TYPE_1__ const*) ;
 scalar_t__ FUNC_10 (TYPE_1__ const*,int *) ;
 int FUNC_11 (int *,int *) ;
 int * FUNC_12 (TYPE_8__*) ;
 scalar_t__ FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_16 (int *,int ,int) ;
 scalar_t__ FUNC_17 (int ,int ) ;

__attribute__((used)) static int FUNC_18(
 git_diff_generated *VAR_20,
 diff_in_progress *VAR_21)
{
 git_oid VAR_22;
 git_delta_t VAR_23 = VAR_3;
 const git_index_entry *VAR_24 = VAR_21->oitem;
 const git_index_entry *VAR_25 = VAR_21->nitem;
 unsigned int VAR_26 = VAR_24->mode;
 unsigned int VAR_27 = VAR_25->mode;
 bool VAR_28 = (VAR_21->new_iter->type == VAR_18);
 bool VAR_29 = 0;
 const char *VAR_30;
 int VAR_31 = 0;

 if (!FUNC_7(&VAR_30, VAR_20, VAR_24))
  return 0;

 FUNC_16(&VAR_22, 0, sizeof(VAR_22));


 if (FUNC_3(VAR_26) && FUNC_4(VAR_27) && VAR_28 &&
  !(VAR_20->diffcaps & VAR_7))
  VAR_27 = VAR_26;


 if (!(VAR_20->diffcaps & VAR_9) &&
  (VAR_27 & VAR_19) != (VAR_26 & VAR_19) &&
  VAR_28)
  VAR_27 = (VAR_27 & ~VAR_19) | (VAR_26 & VAR_19);


 if (FUNC_9(VAR_24) ||
   FUNC_9(VAR_25)) {
  VAR_23 = VAR_1;


 } else if ((VAR_24->flags & VAR_17) != 0) {
  VAR_23 = VAR_5;


 } else if ((VAR_24->flags_extended & VAR_16) != 0) {
  VAR_23 = VAR_5;


 } else if (FUNC_1(VAR_26) != FUNC_1(VAR_27)) {
  if (FUNC_0(VAR_20, VAR_13)) {
   VAR_23 = VAR_4;
  }

  else if (VAR_27 == VAR_15) {
   if (!(VAR_31 = FUNC_5(VAR_20, VAR_2, VAR_24, ((void*)0))))
    VAR_31 = FUNC_5(VAR_20, VAR_6, ((void*)0), VAR_25);
   return VAR_31;
  }

  else {
   if (!(VAR_31 = FUNC_5(VAR_20, VAR_2, VAR_24, ((void*)0))))
    VAR_31 = FUNC_5(VAR_20, VAR_0, ((void*)0), VAR_25);
   return VAR_31;
  }


 } else if (FUNC_13(&VAR_24->id, &VAR_25->id) &&
    VAR_26 == VAR_27 &&
    !FUNC_14(&VAR_24->id)) {
  VAR_23 = VAR_5;




 } else if (FUNC_14(&VAR_25->id) && VAR_28) {
  bool VAR_32 =
   ((VAR_20->diffcaps & VAR_8) != 0);
  git_index *VAR_33 = FUNC_12(VAR_21->new_iter);

  VAR_23 = VAR_5;

  if (FUNC_2(VAR_27)) {
   if ((VAR_31 = FUNC_15(&VAR_23, &VAR_22, VAR_20, VAR_21)) < 0)
    return VAR_31;
  }




  else if (VAR_26 != VAR_27 || VAR_24->file_size != VAR_25->file_size) {
   VAR_23 = VAR_3;
   VAR_29 =
    (VAR_24->file_size <= 0 && VAR_25->file_size > 0);
  }
  else if (!FUNC_11(&VAR_24->mtime, &VAR_25->mtime) ||
   (VAR_32 && !FUNC_11(&VAR_24->ctime, &VAR_25->ctime)) ||
   VAR_24->ino != VAR_25->ino ||
   VAR_24->uid != VAR_25->uid ||
   VAR_24->gid != VAR_25->gid ||
   FUNC_10(VAR_25, VAR_33))
  {
   VAR_23 = VAR_3;
   VAR_29 = 1;
  }


 } else if (FUNC_2(VAR_27) &&
    FUNC_0(VAR_20, VAR_11)) {
  VAR_23 = VAR_5;
 }




 if (VAR_29 && FUNC_14(&VAR_25->id)) {
  const git_oid *VAR_34 =
   FUNC_0(VAR_20, VAR_14) && VAR_26 == VAR_27 ?
   &VAR_24->id : ((void*)0);

  if ((VAR_31 = FUNC_8(
    &VAR_22, &VAR_20->base, VAR_25, VAR_27, VAR_34)) < 0)
   return VAR_31;





  if (VAR_26 == VAR_27 && !FUNC_2(VAR_26) &&
   FUNC_13(&VAR_24->id, &VAR_22))
   VAR_23 = VAR_5;
 }





 if (FUNC_0(VAR_20, VAR_10) &&
  FUNC_0(VAR_20, VAR_12) &&
  FUNC_17(VAR_24->path, VAR_25->path) != 0) {

  if (!(VAR_31 = FUNC_5(VAR_20, VAR_2, VAR_24, ((void*)0))))
   VAR_31 = FUNC_5(VAR_20, VAR_0, ((void*)0), VAR_25);

  return VAR_31;
 }

 return FUNC_6(
  VAR_20, VAR_23, VAR_24, VAR_26, VAR_25, VAR_27,
  FUNC_14(&VAR_22) ? ((void*)0) : &VAR_22, VAR_30);
}
