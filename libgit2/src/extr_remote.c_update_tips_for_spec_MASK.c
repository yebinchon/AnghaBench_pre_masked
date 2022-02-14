
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_31__ {unsigned int length; } ;
typedef TYPE_1__ git_vector ;
struct TYPE_32__ {int oid; int name; } ;
typedef TYPE_2__ git_remote_head ;
struct TYPE_33__ {scalar_t__ (* update_tips ) (int ,int *,int *,int ) ;int payload; } ;
typedef TYPE_3__ git_remote_callbacks ;
typedef scalar_t__ git_remote_autotag_option_t ;
struct TYPE_34__ {int repo; } ;
typedef TYPE_4__ git_remote ;
struct TYPE_35__ {scalar_t__ dst; } ;
typedef TYPE_5__ git_refspec ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_odb ;
struct TYPE_36__ {int ptr; } ;
typedef TYPE_6__ git_buf ;


 TYPE_6__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int ,int ,int *,int,char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_13 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_15 (TYPE_4__*,TYPE_5__*,TYPE_1__*) ;
 scalar_t__ FUNC_16 (int **,int ) ;
 int FUNC_17 (TYPE_1__*) ;
 TYPE_2__* FUNC_18 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_19 (TYPE_1__*,int,int *) ;
 int FUNC_20 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_21 (int *,int ,int ) ;
 scalar_t__ FUNC_22 (int ,int *,int *,int ) ;

__attribute__((used)) static int FUNC_23(
  git_remote *VAR_7,
  const git_remote_callbacks *VAR_8,
  int VAR_9,
  git_remote_autotag_option_t VAR_10,
  git_refspec *VAR_11,
  git_vector *VAR_12,
  const char *VAR_13)
{
 int VAR_14 = 0, VAR_15;
 unsigned int VAR_16 = 0;
 git_buf VAR_17 = VAR_0;
 git_oid VAR_18;
 git_odb *VAR_19;
 git_remote_head *VAR_20;
 git_reference *VAR_21;
 git_refspec VAR_22;
 git_vector VAR_23;

 FUNC_0(VAR_7);

 if (FUNC_16(&VAR_19, VAR_7->repo) < 0)
  return -1;

 if (FUNC_12(&VAR_22, VAR_4, 1) < 0)
  return -1;


 if (FUNC_19(&VAR_23, 16, ((void*)0)) < 0)
  return -1;

 for (; VAR_16 < VAR_12->length; ++VAR_16) {
  VAR_20 = FUNC_18(VAR_12, VAR_16);
  VAR_15 = 0;
  FUNC_1(&VAR_17);


  if (!FUNC_9(VAR_20->name))
   continue;


  if (FUNC_13(&VAR_22, VAR_20->name)) {
   if (VAR_10 != VAR_6) {

    if (VAR_10 == VAR_5)
     VAR_15 = 1;

    FUNC_1(&VAR_17);
    if (FUNC_4(&VAR_17, VAR_20->name) < 0)
     goto on_error;
   }
  }


  if (!VAR_15 && FUNC_13(VAR_11, VAR_20->name)) {
   if (VAR_11->dst) {
    if (FUNC_14(&VAR_17, VAR_11, VAR_20->name) < 0)
     goto on_error;
   } else {




    if ((VAR_14 = FUNC_20(&VAR_23, VAR_20)) < 0)
     goto on_error;

    continue;
   }
  }


  if (FUNC_3(&VAR_17) == 0) {
   continue;
  }


  if (VAR_15 && !FUNC_5(VAR_19, &VAR_20->oid))
   continue;

  if (!VAR_15 && FUNC_20(&VAR_23, VAR_20) < 0)
   goto on_error;

  VAR_14 = FUNC_10(&VAR_18, VAR_7->repo, VAR_17.ptr);
  if (VAR_14 < 0 && VAR_14 != VAR_2)
   goto on_error;

  if (VAR_14 == VAR_2) {
   FUNC_21(&VAR_18, 0, VAR_3);

   if (VAR_15 && FUNC_20(&VAR_23, VAR_20) < 0)
    goto on_error;
  }

  if (!FUNC_6(&VAR_18, &VAR_20->oid))
   continue;


  VAR_14 = FUNC_7(&VAR_21, VAR_7->repo, VAR_17.ptr, &VAR_20->oid, !VAR_15,
    VAR_13);

  if (VAR_14 == VAR_1)
   continue;

  if (VAR_14 < 0)
   goto on_error;

  FUNC_8(VAR_21);

  if (VAR_8 && VAR_8->update_tips != ((void*)0)) {
   if (VAR_8->update_tips(VAR_17.ptr, &VAR_18, &VAR_20->oid, VAR_8->payload) < 0)
    goto on_error;
  }
 }

 if (VAR_9 &&
     (VAR_14 = FUNC_15(VAR_7, VAR_11, &VAR_23)) < 0)
  goto on_error;

 FUNC_17(&VAR_23);
 FUNC_11(&VAR_22);
 FUNC_2(&VAR_17);
 return 0;

on_error:
 FUNC_17(&VAR_23);
 FUNC_11(&VAR_22);
 FUNC_2(&VAR_17);
 return -1;

}
