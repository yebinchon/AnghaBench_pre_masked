
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef int (* git_repository_create_cb ) (int **,char const*,int ,int ) ;
typedef int git_repository ;
typedef int git_remote ;
struct TYPE_11__ {int member_0; } ;
typedef TYPE_1__ git_error_state ;
struct TYPE_12__ {int (* repository_cb ) (int **,char const*,int ,int ) ;scalar_t__ local; int checkout_branch; int checkout_opts; int fetch_opts; int repository_cb_payload; int bare; } ;
typedef TYPE_2__ git_clone_options ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *,int *,int ,int) ;
 int FUNC_4 (int **,int *,char const*,TYPE_2__*) ;
 int FUNC_5 (int **,char const*,int ,int ) ;
 int FUNC_6 (char const*,scalar_t__) ;
 int FUNC_7 (int ,char*,char const*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char const*,int *,int ) ;
 scalar_t__ FUNC_11 (char const*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*,TYPE_2__ const*,int) ;

__attribute__((used)) static int FUNC_16(
 git_repository **VAR_7,
 const char *VAR_8,
 const char *VAR_9,
 const git_clone_options *VAR_10,
 int VAR_11)
{
 int VAR_12 = 0;
 git_repository *VAR_13 = ((void*)0);
 git_remote *VAR_14;
 git_clone_options VAR_15 = VAR_1;
 uint32_t VAR_16 = VAR_5;
 git_repository_create_cb VAR_17;

 FUNC_1(VAR_7 && VAR_8 && VAR_9);

 if (VAR_10)
  FUNC_15(&VAR_15, VAR_10, sizeof(git_clone_options));

 FUNC_0(&VAR_15, VAR_2, "git_clone_options");


 if (FUNC_11(VAR_9) && !VAR_11 && !FUNC_12(VAR_9)) {
  FUNC_7(VAR_4,
   "'%s' exists and is not an empty directory", VAR_9);
  return VAR_3;
 }


 if (FUNC_11(VAR_9))
  VAR_16 |= VAR_6;

 if (VAR_15.repository_cb)
  VAR_17 = VAR_15.repository_cb;
 else
  VAR_17 = FUNC_5;

 if ((VAR_12 = VAR_17(&VAR_13, VAR_9, VAR_15.bare, VAR_15.repository_cb_payload)) < 0)
  return VAR_12;

 if (!(VAR_12 = FUNC_4(&VAR_14, VAR_13, VAR_8, &VAR_15))) {
  int VAR_18 = FUNC_6(VAR_8, VAR_15.local);
  int VAR_19 = VAR_15.local != VAR_0;

  if (VAR_18 == 1)
   VAR_12 = FUNC_3(
    VAR_13, VAR_14, &VAR_15.fetch_opts, &VAR_15.checkout_opts,
    VAR_15.checkout_branch, VAR_19);
  else if (VAR_18 == 0)
   VAR_12 = FUNC_2(
    VAR_13, VAR_14, &VAR_15.fetch_opts, &VAR_15.checkout_opts,
    VAR_15.checkout_branch);
  else
   VAR_12 = -1;

  FUNC_13(VAR_14);
 }

 if (VAR_12 != 0) {
  git_error_state VAR_20 = {0};
  FUNC_8(&VAR_20, VAR_12);

  FUNC_14(VAR_13);
  VAR_13 = ((void*)0);

  (void)FUNC_10(VAR_9, ((void*)0), VAR_16);

  FUNC_9(&VAR_20);
 }

 *VAR_7 = VAR_13;
 return VAR_12;
}
