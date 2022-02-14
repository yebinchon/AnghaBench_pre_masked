
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {int oid; int name; } ;
typedef TYPE_1__ git_remote_head ;
typedef int git_remote ;
typedef int git_refspec ;
typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__ const***,size_t*,int *) ;
 int FUNC_8 (int *,int const*) ;
 int FUNC_9 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int const*,int ,char const*) ;

__attribute__((used)) static int FUNC_12(
  git_repository *VAR_7,
  git_remote *VAR_8,
  const char *VAR_9)
{
 int VAR_10 = 0;
 size_t VAR_11;
 git_refspec *VAR_12;
 const git_remote_head *VAR_13, **VAR_14;
 const git_oid *VAR_15;
 git_buf VAR_16 = VAR_0;
 git_buf VAR_17 = VAR_0;

 if ((VAR_10 = FUNC_7(&VAR_14, &VAR_11, VAR_8)) < 0)
  return VAR_10;


 if (VAR_11 == 0 || FUNC_10(VAR_14[0]->name, VAR_4))
  return FUNC_9(
   VAR_7, "master", VAR_6, VAR_5);


 VAR_13 = VAR_14[0];
 FUNC_0(VAR_13);

 VAR_15 = &VAR_13->oid;

 VAR_10 = FUNC_6(&VAR_17, VAR_8);
 if (VAR_10 == VAR_2) {
  VAR_10 = FUNC_8(
   VAR_7, VAR_15);
  goto cleanup;
 }

 VAR_12 = FUNC_5(VAR_8, FUNC_1(&VAR_17));

 if (VAR_12 == ((void*)0)) {
  FUNC_3(VAR_3, "the remote's default branch does not fit the refspec configuration");
  VAR_10 = VAR_1;
  goto cleanup;
 }


 if ((VAR_10 = FUNC_4(
  &VAR_16,
  VAR_12,
  FUNC_1(&VAR_17))) < 0)
  goto cleanup;

 VAR_10 = FUNC_11(
  VAR_7,
  VAR_15,
  FUNC_1(&VAR_17),
  VAR_9);

cleanup:
 FUNC_2(&VAR_16);
 FUNC_2(&VAR_17);

 return VAR_10;
}
