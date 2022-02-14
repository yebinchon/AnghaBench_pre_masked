
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int wd_oid; int path; int repo; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_repository ;
struct TYPE_9__ {char const* ptr; } ;
typedef TYPE_2__ git_buf ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char const*,int ) ;
 int FUNC_3 (TYPE_2__*,char) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int *,int *,int ) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 int FUNC_9 (int **,char const*,unsigned int,char const*) ;
 char* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(
 git_repository **VAR_9, git_submodule *VAR_10, bool VAR_11)
{
 int VAR_12;
 git_buf VAR_13 = VAR_1;
 unsigned int VAR_14 = VAR_5;
 const char *VAR_15;

 FUNC_0(VAR_10 && VAR_9);

 if (FUNC_8(
   VAR_10->repo, "open submodule repository") < 0)
  return VAR_2;

 VAR_15 = FUNC_10(VAR_10->repo);

 if (FUNC_2(&VAR_13, VAR_15, VAR_10->path) < 0 ||
  FUNC_2(&VAR_13, VAR_13.ptr, VAR_0) < 0)
  return -1;

 VAR_10->flags = VAR_10->flags &
  ~(VAR_6 |
    VAR_7 |
    VAR_8);

 if (VAR_11)
  VAR_14 |= VAR_4;

 VAR_12 = FUNC_9(VAR_9, VAR_13.ptr, VAR_14, VAR_15);


 if (!VAR_12) {
  VAR_10->flags |= VAR_6 |
   VAR_8;

  if (!FUNC_7(&VAR_10->wd_oid, *VAR_9, VAR_3))
   VAR_10->flags |= VAR_7;
  else
   FUNC_4();
 } else if (FUNC_5(VAR_13.ptr)) {
  VAR_10->flags |= VAR_8 |
   VAR_6;
 } else {
  FUNC_3(&VAR_13, '/');

  if (FUNC_6(VAR_13.ptr))
   VAR_10->flags |= VAR_8;
 }

 FUNC_1(&VAR_13);

 return VAR_12;
}
