
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ fsync; int * repo; } ;
typedef TYPE_2__ refdb_fs_backend ;
typedef int git_signature ;
typedef int git_repository ;
struct TYPE_19__ {scalar_t__ type; int name; } ;
typedef TYPE_3__ git_reference ;
struct TYPE_17__ {int member_0; } ;
struct TYPE_20__ {TYPE_1__ member_0; } ;
typedef TYPE_4__ git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,int ,int,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_4__ const*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*,int *,int ) ;
 int FUNC_10 (TYPE_3__ const*) ;
 TYPE_4__ const* FUNC_11 (TYPE_3__ const*) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (int *,TYPE_4__*,TYPE_4__*,int const*,char const*) ;
 scalar_t__ FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(refdb_fs_backend *VAR_13, const git_reference *VAR_14, const git_oid *VAR_15, const git_oid *VAR_16, const git_signature *VAR_17, const char *VAR_18)
{
 int VAR_19, VAR_20, VAR_21;
 git_oid VAR_22 = {{0}}, VAR_23 = {{0}};
 git_buf VAR_24 = VAR_0, VAR_25 = VAR_0;
 git_repository *VAR_26 = VAR_13->repo;

 VAR_20 = VAR_14->type == VAR_6;


 if (VAR_20 &&
     FUNC_14(VAR_14->name, VAR_5) &&
     !(VAR_15 && VAR_16))
  return 0;



 if (VAR_15) {
  FUNC_7(&VAR_22, VAR_15);
 } else {
  VAR_19 = FUNC_9(&VAR_22, VAR_26, VAR_14->name);
  if (VAR_19 < 0 && VAR_19 != VAR_3)
   return VAR_19;
 }

 if (VAR_16) {
  FUNC_7(&VAR_23, VAR_16);
 } else {
  if (!VAR_20) {
   FUNC_7(&VAR_23, FUNC_11(VAR_14));
  } else {
   VAR_19 = FUNC_9(&VAR_23, VAR_26, FUNC_10(VAR_14));
   if (VAR_19 < 0 && VAR_19 != VAR_3)
    return VAR_19;

   if (VAR_19 == VAR_3)
    return 0;

   FUNC_2();
  }
 }

 if ((VAR_19 = FUNC_13(&VAR_24, &VAR_22, &VAR_23, VAR_17, VAR_18)) < 0)
  goto cleanup;

 if ((VAR_19 = FUNC_12(&VAR_25, VAR_26, VAR_14->name)) < 0)
  goto cleanup;

 if (((VAR_19 = FUNC_4(FUNC_0(&VAR_25), 0777)) < 0) &&
     (VAR_19 != VAR_2)) {
  goto cleanup;
 }




 if (FUNC_8(FUNC_0(&VAR_25))) {
  if ((VAR_19 = FUNC_5(FUNC_0(&VAR_25), ((void*)0), VAR_8)) < 0) {
   if (VAR_19 == VAR_3)
    VAR_19 = 0;
  } else if (FUNC_8(FUNC_0(&VAR_25))) {
   FUNC_3(VAR_4, "cannot create reflog at '%s', there are reflogs beneath that folder",
    VAR_14->name);
   VAR_19 = VAR_1;
  }

  if (VAR_19 != 0)
   goto cleanup;
 }

 VAR_21 = VAR_12 | VAR_10 | VAR_9;

 if (VAR_13->fsync)
  VAR_21 |= VAR_11;

 VAR_19 = FUNC_6(&VAR_24, FUNC_0(&VAR_25), VAR_21, VAR_7);

cleanup:
 FUNC_1(&VAR_24);
 FUNC_1(&VAR_25);

 return VAR_19;
}
