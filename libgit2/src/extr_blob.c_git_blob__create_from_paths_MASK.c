
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {scalar_t__ st_mode; scalar_t__ st_size; } ;
typedef int st ;
typedef scalar_t__ mode_t ;
typedef int git_repository ;
typedef int git_oid ;
typedef scalar_t__ git_off_t ;
typedef int git_odb ;
typedef int git_filter_list ;
struct TYPE_5__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,char const*) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *,char const*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char const*,struct stat*) ;
 scalar_t__ FUNC_10 (int *,char*) ;
 int FUNC_11 (int **,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct stat*,struct stat*,int) ;
 int FUNC_14 (int *,scalar_t__*,int *,char const*,int *) ;
 int FUNC_15 (int *,int *,char const*,scalar_t__) ;
 int FUNC_16 (int *,int *,char const*,size_t) ;

int FUNC_17(
 git_oid *VAR_6,
 struct stat *VAR_7,
 git_repository *VAR_8,
 const char *VAR_9,
 const char *VAR_10,
 mode_t VAR_11,
 bool VAR_12)
{
 int VAR_13;
 struct stat VAR_14;
 git_odb *VAR_15 = ((void*)0);
 git_off_t VAR_16;
 mode_t VAR_17;
 git_buf VAR_18 = VAR_0;

 FUNC_2(VAR_10 || !VAR_12);

 if (!VAR_9) {
  if (FUNC_10(VAR_8, "create blob from file") < 0)
   return VAR_1;

  if (FUNC_4(
    &VAR_18, FUNC_12(VAR_8), VAR_10) < 0)
   return -1;

  VAR_9 = VAR_18.ptr;
 }

 if ((VAR_13 = FUNC_9(VAR_9, &VAR_14)) < 0 ||
  (VAR_13 = FUNC_11(&VAR_15, VAR_8)) < 0)
  goto done;

 if (FUNC_0(VAR_14.st_mode)) {
  FUNC_5(VAR_3, "cannot create blob from '%s': it is a directory", VAR_9);
  VAR_13 = VAR_2;
  goto done;
 }

 if (VAR_7)
  FUNC_13(VAR_7, &VAR_14, sizeof(VAR_14));

 VAR_16 = VAR_14.st_size;
 VAR_17 = VAR_11 ? VAR_11 : VAR_14.st_mode;

 if (FUNC_1(VAR_17)) {
  VAR_13 = FUNC_16(VAR_6, VAR_15, VAR_9, (size_t)VAR_16);
 } else {
  git_filter_list *VAR_19 = ((void*)0);

  if (VAR_12)

   VAR_13 = FUNC_7(
    &VAR_19, VAR_8, ((void*)0), VAR_10,
    VAR_5, VAR_4);

  if (VAR_13 < 0)
                               ;
  else if (VAR_19 == ((void*)0))


   VAR_13 = FUNC_15(VAR_6, VAR_15, VAR_9, VAR_16);
  else {

   VAR_13 = FUNC_14(VAR_6, &VAR_16, VAR_15, VAR_9, VAR_19);

   FUNC_6(VAR_19);
  }
 }

done:
 FUNC_8(VAR_15);
 FUNC_3(&VAR_18);

 return VAR_13;
}
