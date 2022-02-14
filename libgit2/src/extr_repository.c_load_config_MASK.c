
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config ;
struct TYPE_5__ {char const* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char const*,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static int FUNC_7(
 git_config **VAR_8,
 git_repository *VAR_9,
 const char *VAR_10,
 const char *VAR_11,
 const char *VAR_12,
 const char *VAR_13)
{
 int VAR_14;
 git_buf VAR_15 = VAR_0;
 git_config *VAR_16 = ((void*)0);

 FUNC_0(VAR_8);

 if ((VAR_14 = FUNC_4(&VAR_16)) < 0)
  return VAR_14;

 if (VAR_9) {
  if ((VAR_14 = FUNC_6(&VAR_15, VAR_9, VAR_7)) == 0)
   VAR_14 = FUNC_2(VAR_16, VAR_15.ptr, VAR_2, VAR_9, 0);

  if (VAR_14 && VAR_14 != VAR_6)
   goto on_error;

  FUNC_1(&VAR_15);
 }

 if (VAR_10 != ((void*)0) &&
  (VAR_14 = FUNC_2(
   VAR_16, VAR_10, VAR_1, VAR_9, 0)) < 0 &&
  VAR_14 != VAR_6)
  goto on_error;

 if (VAR_11 != ((void*)0) &&
  (VAR_14 = FUNC_2(
   VAR_16, VAR_11, VAR_5, VAR_9, 0)) < 0 &&
  VAR_14 != VAR_6)
  goto on_error;

 if (VAR_12 != ((void*)0) &&
  (VAR_14 = FUNC_2(
   VAR_16, VAR_12, VAR_4, VAR_9, 0)) < 0 &&
  VAR_14 != VAR_6)
  goto on_error;

 if (VAR_13 != ((void*)0) &&
  (VAR_14 = FUNC_2(
   VAR_16, VAR_13, VAR_3, VAR_9, 0)) < 0 &&
  VAR_14 != VAR_6)
  goto on_error;

 FUNC_5();

 *VAR_8 = VAR_16;
 return 0;

on_error:
 FUNC_1(&VAR_15);
 FUNC_3(VAR_16);
 *VAR_8 = ((void*)0);
 return VAR_14;
}
