
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ index; int repo; } ;
typedef TYPE_1__ workdir_reader ;
struct stat {int st_mode; } ;
typedef int git_reader ;
typedef int git_oid ;
struct TYPE_11__ {scalar_t__ mode; int id; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_filter_list ;
typedef scalar_t__ git_filemode_t ;
struct TYPE_12__ {int size; int ptr; } ;
typedef TYPE_3__ git_buf ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,char const*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_3__*,int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,char const*,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (scalar_t__,char const*,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_13(
 git_buf *VAR_9,
 git_oid *VAR_10,
 git_filemode_t *VAR_11,
 git_reader *VAR_12,
 const char *VAR_13)
{
 workdir_reader *VAR_14 = (workdir_reader *)VAR_12;
 git_buf VAR_15 = VAR_1;
 struct stat VAR_16;
 git_filemode_t VAR_17;
 git_filter_list *VAR_18 = ((void*)0);
 const git_index_entry *VAR_19;
 git_oid VAR_20;
 int VAR_21;

 if ((VAR_21 = FUNC_1(&VAR_15,
  FUNC_11(VAR_14->repo), VAR_13)) < 0)
  goto done;

 if ((VAR_21 = FUNC_12(VAR_15.ptr, &VAR_16)) < 0) {
  if (VAR_21 == -1 && VAR_8 == VAR_0)
   VAR_21 = VAR_2;

  FUNC_2(VAR_3, "could not stat '%s'", VAR_15.ptr);
  goto done;
 }

 VAR_17 = FUNC_6(VAR_16.st_mode);






 if ((VAR_21 = FUNC_5(&VAR_18, VAR_14->repo, ((void*)0), VAR_13,
  VAR_5, VAR_4)) < 0)
  goto done;

 if ((VAR_21 = FUNC_3(VAR_9,
     VAR_18, VAR_14->repo, VAR_15.ptr)) < 0)
  goto done;

 if (VAR_10 || VAR_14->index) {
  if ((VAR_21 = FUNC_8(&VAR_20, VAR_9->ptr, VAR_9->size, VAR_6)) < 0)
   goto done;
 }

 if (VAR_14->index) {
  if (!(VAR_19 = FUNC_7(VAR_14->index, VAR_13, 0)) ||
      VAR_17 != VAR_19->mode ||
      !FUNC_10(&VAR_20, &VAR_19->id)) {
   VAR_21 = VAR_7;
   goto done;
  }
 }

 if (VAR_10)
  FUNC_9(VAR_10, &VAR_20);

 if (VAR_11)
  *VAR_11 = VAR_17;

done:
 FUNC_4(VAR_18);
 FUNC_0(&VAR_15);
 return VAR_21;
}
