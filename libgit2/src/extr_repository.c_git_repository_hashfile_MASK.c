
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
typedef scalar_t__ git_off_t ;
typedef int git_object_t ;
typedef int git_filter_list ;
typedef scalar_t__ git_file ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,char const*,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,scalar_t__,size_t,int ,int *) ;
 int FUNC_9 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (char const*) ;

int FUNC_13(
 git_oid *VAR_4,
 git_repository *VAR_5,
 const char *VAR_6,
 git_object_t VAR_7,
 const char *VAR_8)
{
 int VAR_9;
 git_filter_list *VAR_10 = ((void*)0);
 git_file VAR_11 = -1;
 git_off_t VAR_12;
 git_buf VAR_13 = VAR_0;

 FUNC_0(VAR_4 && VAR_6 && VAR_5);






 VAR_9 = FUNC_9(
  &VAR_13, VAR_6, FUNC_10(VAR_5), ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;

 if (!VAR_8)
  VAR_8 = VAR_6;


 if (FUNC_12(VAR_8) > 0) {
  VAR_9 = FUNC_5(
   &VAR_10, VAR_5, ((void*)0), VAR_8,
   VAR_3, VAR_2);
  if (VAR_9 < 0)
   return VAR_9;
 } else {
  VAR_9 = 0;
 }



 VAR_11 = FUNC_7(VAR_13.ptr);
 if (VAR_11 < 0) {
  VAR_9 = VAR_11;
  goto cleanup;
 }

 VAR_12 = FUNC_6(VAR_11);
 if (VAR_12 < 0) {
  VAR_9 = (int)VAR_12;
  goto cleanup;
 }

 if (!FUNC_1(VAR_12)) {
  FUNC_3(VAR_1, "file size overflow for 32-bit systems");
  VAR_9 = -1;
  goto cleanup;
 }

 VAR_9 = FUNC_8(VAR_4, VAR_11, (size_t)VAR_12, VAR_7, VAR_10);

cleanup:
 if (VAR_11 >= 0)
  FUNC_11(VAR_11);
 FUNC_4(VAR_10);
 FUNC_2(&VAR_13);

 return VAR_9;
}
