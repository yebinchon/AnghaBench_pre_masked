
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct stat {scalar_t__ st_size; int st_mode; } ;
typedef int git_oid ;
typedef int git_file ;
struct TYPE_8__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,size_t) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,char const*,char*) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (char const*,struct stat*) ;

int FUNC_14(
 git_buf *VAR_5, const char *VAR_6, git_oid *VAR_7, int *VAR_8)
{
 int VAR_9;
 git_file VAR_10;
 struct stat VAR_11;
 git_buf VAR_12 = VAR_0;
 git_oid VAR_13;

 FUNC_1(VAR_5 && VAR_6 && *VAR_6);

 if (VAR_8 != ((void*)0))
  *VAR_8 = 0;

 if (FUNC_13(VAR_6, &VAR_11) < 0)
  return FUNC_11(VAR_4, VAR_6, "stat");


 if (FUNC_0(VAR_11.st_mode)) {
  FUNC_5(VAR_2, "requested file is a directory");
  return VAR_1;
 }

 if (!FUNC_2(VAR_11.st_size+1)) {
  FUNC_5(VAR_3, "invalid regular file stat for '%s'", VAR_6);
  return -1;
 }

 if ((VAR_10 = FUNC_6(VAR_6)) < 0)
  return VAR_10;

 if (FUNC_7(&VAR_12, VAR_10, (size_t)VAR_11.st_size) < 0) {
  FUNC_12(VAR_10);
  return -1;
 }

 FUNC_12(VAR_10);

 if (VAR_7) {
  if ((VAR_9 = FUNC_8(&VAR_13, VAR_12.ptr, VAR_12.size)) < 0) {
   FUNC_3(&VAR_12);
   return VAR_9;
  }




  if (!FUNC_9(VAR_7, &VAR_13)) {
   FUNC_3(&VAR_12);
   if (VAR_8)
    *VAR_8 = 0;

   return 0;
  }

  FUNC_10(VAR_7, &VAR_13);
 }




 if (VAR_8 != ((void*)0))
  *VAR_8 = 1;

 FUNC_4(VAR_5, &VAR_12);
 FUNC_3(&VAR_12);

 return 0;
}
