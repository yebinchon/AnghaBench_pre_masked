
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int flags; scalar_t__ origin_url; scalar_t__ initial_head; int mode; } ;
typedef TYPE_1__ git_repository_init_options ;
typedef int git_repository ;
struct TYPE_16__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int ,char const*,int,int ) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*,char const*,TYPE_1__*) ;
 int FUNC_12 (int ,char const*,TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_2__*) ;

int FUNC_14(
 git_repository **VAR_8,
 const char *VAR_9,
 git_repository_init_options *VAR_10)
{
 git_buf VAR_11 = VAR_0, VAR_12 = VAR_0,
  VAR_13 = VAR_0, VAR_14 = VAR_0;
 const char *VAR_15;
 int VAR_16;

 FUNC_1(VAR_8 && VAR_9 && VAR_10);

 FUNC_0(VAR_10, VAR_6, "git_repository_init_options");

 if ((VAR_16 = FUNC_11(&VAR_11, &VAR_12, VAR_9, VAR_10)) < 0)
  goto out;

 VAR_15 = (VAR_10->flags & VAR_4) ? ((void*)0) : FUNC_2(&VAR_12);

 if (FUNC_13(&VAR_11, &VAR_13)) {
  if ((VAR_10->flags & VAR_5) != 0) {
   FUNC_5(VAR_2,
    "attempt to reinitialize '%s'", VAR_9);
   VAR_16 = VAR_1;
   goto out;
  }

  VAR_10->flags |= VAR_7;

  if ((VAR_16 = FUNC_9(VAR_11.ptr, VAR_15, VAR_10->flags, VAR_10->mode)) < 0)
   goto out;


 } else {
  if ((VAR_16 = FUNC_12(VAR_11.ptr, VAR_15, VAR_10)) < 0 ||
      (VAR_16 = FUNC_9(VAR_11.ptr, VAR_15, VAR_10->flags, VAR_10->mode)) < 0 ||
      (VAR_16 = FUNC_4(&VAR_14, VAR_11.ptr, VAR_3)) < 0)
   goto out;






  if ((!FUNC_6(VAR_14.ptr) || VAR_10->initial_head) &&
      (VAR_16 = FUNC_7(VAR_11.ptr, VAR_10->initial_head)) < 0)
   goto out;
 }

 if ((VAR_16 = FUNC_8(VAR_8, VAR_11.ptr)) < 0)
  goto out;

 if (VAR_10->origin_url &&
     (VAR_16 = FUNC_10(*VAR_8, VAR_10->origin_url)) < 0)
  goto out;

out:
 FUNC_3(&VAR_14);
 FUNC_3(&VAR_13);
 FUNC_3(&VAR_11);
 FUNC_3(&VAR_12);

 return VAR_16;
}
