
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int flags; char* fetchspec; int * name; int repository; } ;
typedef TYPE_1__ git_remote_create_options ;
struct TYPE_21__ {int download_tags; int refs; int refspecs; int active_refspecs; struct TYPE_21__* name; struct TYPE_21__* url; int repo; } ;
typedef TYPE_2__ git_remote ;
typedef int git_config ;
struct TYPE_22__ {int * ptr; } ;
typedef TYPE_3__ git_buf ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__ const*,int ,char*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_2__*,char const*,int) ;
 TYPE_2__* FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,char const*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (int,int) ;
 void* FUNC_11 (int *) ;
 char* FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int ,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int *) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int **,int ) ;
 int FUNC_19 (int **,int ) ;
 int FUNC_20 (int *,int,int *) ;
 int FUNC_21 (TYPE_2__*,int *,int *) ;
 int FUNC_22 (int ,int *,char const*,int) ;

int FUNC_23(git_remote **VAR_9, const char *VAR_10, const git_remote_create_options *VAR_11)
{
 git_remote *VAR_12 = ((void*)0);
 git_config *VAR_13 = ((void*)0), *VAR_14;
 git_buf VAR_15 = VAR_1;
 git_buf VAR_16 = VAR_1;
 git_buf VAR_17 = VAR_1;
 const git_remote_create_options VAR_18 = VAR_3;
 int VAR_19 = -1;

 FUNC_4(VAR_9 && VAR_10);

 if (!VAR_11) {
  VAR_11 = &VAR_18;
 }

 FUNC_1(VAR_11, VAR_4, "git_remote_create_options");

 if (VAR_11->name != ((void*)0)) {
  if ((VAR_19 = FUNC_9(VAR_11->name)) < 0)
   return VAR_19;

  if (VAR_11->repository &&
      (VAR_19 = FUNC_8(VAR_11->repository, VAR_11->name)) < 0)
   return VAR_19;
 }

 if (VAR_11->repository) {
  if ((VAR_19 = FUNC_19(&VAR_13, VAR_11->repository)) < 0)
   goto on_error;
 }

 VAR_12 = FUNC_10(1, sizeof(git_remote));
 FUNC_0(VAR_12);

 VAR_12->repo = VAR_11->repository;

 if ((VAR_19 = FUNC_20(&VAR_12->refs, 8, ((void*)0))) < 0 ||
  (VAR_19 = FUNC_5(&VAR_15, VAR_10)) < 0)
  goto on_error;

 if (VAR_11->repository && !(VAR_11->flags & VAR_6)) {
  VAR_12->url = FUNC_3(VAR_13, VAR_15.ptr, VAR_2);
 } else {
  VAR_12->url = FUNC_11(VAR_15.ptr);
 }
 FUNC_0(VAR_12->url);

 if (VAR_11->name != ((void*)0)) {
  VAR_12->name = FUNC_11(VAR_11->name);
  FUNC_0(VAR_12->name);

  if (VAR_11->repository &&
      ((VAR_19 = FUNC_14(&VAR_16, VAR_0, VAR_11->name)) < 0 ||
      (VAR_19 = FUNC_18(&VAR_14, VAR_11->repository)) < 0 ||
      (VAR_19 = FUNC_16(VAR_14, VAR_16.ptr, VAR_15.ptr)) < 0))
   goto on_error;
 }

 if (VAR_11->fetchspec != ((void*)0) ||
     (VAR_11->name && !(VAR_11->flags & VAR_5))) {
  const char *VAR_20 = ((void*)0);
  if (VAR_11->fetchspec) {
   VAR_20 = VAR_11->fetchspec;
  } else {
   if ((VAR_19 = FUNC_6(&VAR_17, VAR_11->name)) < 0)
    goto on_error;

   VAR_20 = FUNC_12(&VAR_17);
  }

  if ((VAR_19 = FUNC_2(VAR_12, VAR_20, 1)) < 0)
   goto on_error;


  if (VAR_11->repository && VAR_11->name &&
      ((VAR_19 = FUNC_22(VAR_11->repository, VAR_11->name, VAR_20, 1)) < 0 ||
      (VAR_19 = FUNC_21(VAR_12, VAR_13, VAR_11->name)) < 0))
   goto on_error;


  if ((VAR_19 = FUNC_7(&VAR_12->active_refspecs, &VAR_12->refspecs, &VAR_12->refs)) < 0)
   goto on_error;
 }


 if (!VAR_11->name)
  VAR_12->download_tags = VAR_8;
 else
  VAR_12->download_tags = VAR_7;


 FUNC_13(&VAR_16);

 *VAR_9 = VAR_12;
 VAR_19 = 0;

on_error:
 if (VAR_19)
  FUNC_17(VAR_12);

 FUNC_15(VAR_13);
 FUNC_13(&VAR_17);
 FUNC_13(&VAR_15);
 FUNC_13(&VAR_16);
 return VAR_19;
}
