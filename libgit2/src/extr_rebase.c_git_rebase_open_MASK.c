
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_rebase_options ;
struct TYPE_16__ {int type; int head_detached; int orig_head_name; int onto_id; int orig_head_id; int state_path; int * repo; } ;
typedef TYPE_1__ git_rebase ;
struct TYPE_17__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 size_t FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,size_t) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__**,int const*) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int*,int *,int *) ;
 scalar_t__ FUNC_18 (int ,int ) ;

int FUNC_19(
 git_rebase **VAR_9,
 git_repository *VAR_10,
 const git_rebase_options *VAR_11)
{
 git_rebase *VAR_12;
 git_buf VAR_13 = VAR_0, VAR_14 = VAR_0,
  VAR_15 = VAR_0, VAR_16 = VAR_0;
 size_t VAR_17;
 int VAR_18;

 FUNC_1(VAR_10);

 if ((VAR_18 = FUNC_15(VAR_11)) < 0)
  return VAR_18;

 if (FUNC_14(&VAR_12, VAR_11) < 0)
  return -1;

 VAR_12->repo = VAR_10;

 if ((VAR_18 = FUNC_17(&VAR_12->type, &VAR_12->state_path, VAR_10)) < 0)
  goto done;

 if (VAR_12->type == VAR_3) {
  FUNC_9(VAR_2, "there is no rebase in progress");
  VAR_18 = VAR_1;
  goto done;
 }

 if ((VAR_18 = FUNC_6(&VAR_13, VAR_12->state_path)) < 0)
  goto done;

 VAR_17 = FUNC_5(&VAR_13);

 if ((VAR_18 = FUNC_4(&VAR_13, VAR_13.ptr, VAR_5)) < 0 ||
  (VAR_18 = FUNC_10(&VAR_14, VAR_13.ptr)) < 0)
  goto done;

 FUNC_7(&VAR_14);

 if (FUNC_18(VAR_7, VAR_14.ptr) == 0)
  VAR_12->head_detached = 1;

 FUNC_8(&VAR_13, VAR_17);

 if ((VAR_18 = FUNC_4(&VAR_13, VAR_13.ptr, VAR_8)) < 0)
  goto done;

 if (!FUNC_12(VAR_13.ptr)) {

  FUNC_8(&VAR_13, VAR_17);

  if ((VAR_18 = FUNC_4(&VAR_13, VAR_13.ptr, VAR_4)) < 0)
   goto done;
 }

 if ((VAR_18 = FUNC_10(&VAR_15, VAR_13.ptr)) < 0)
  goto done;

 FUNC_7(&VAR_15);

 if ((VAR_18 = FUNC_11(&VAR_12->orig_head_id, VAR_15.ptr)) < 0)
  goto done;

 FUNC_8(&VAR_13, VAR_17);

 if ((VAR_18 = FUNC_4(&VAR_13, VAR_13.ptr, VAR_6)) < 0 ||
  (VAR_18 = FUNC_10(&VAR_16, VAR_13.ptr)) < 0)
  goto done;

 FUNC_7(&VAR_16);

 if ((VAR_18 = FUNC_11(&VAR_12->onto_id, VAR_16.ptr)) < 0)
  goto done;

 if (!VAR_12->head_detached)
  VAR_12->orig_head_name = FUNC_2(&VAR_14);

 switch (VAR_12->type) {
 case 129:
  FUNC_9(VAR_2, "interactive rebase is not supported");
  VAR_18 = -1;
  break;
 case 128:
  VAR_18 = FUNC_16(VAR_12);
  break;
 case 130:
  FUNC_9(VAR_2, "patch application rebase is not supported");
  VAR_18 = -1;
  break;
 default:
  FUNC_0();
 }

done:
 if (VAR_18 == 0)
  *VAR_9 = VAR_12;
 else
  FUNC_13(VAR_12);

 FUNC_3(&VAR_13);
 FUNC_3(&VAR_14);
 FUNC_3(&VAR_15);
 FUNC_3(&VAR_16);
 return VAR_18;
}
