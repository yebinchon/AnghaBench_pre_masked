
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* gitpath; char* commonpath; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,int *,int *) ;
 int * FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int *,char const*,int *) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *,char const*,char const*) ;

__attribute__((used)) static int FUNC_10(
 git_reference **VAR_2,
 refdb_fs_backend *VAR_3,
 const char *VAR_4)
{
 git_buf VAR_5 = VAR_0;
 int VAR_6 = 0;
 const char *VAR_7;

 if (VAR_2)
  *VAR_2 = ((void*)0);

 if (FUNC_6(VAR_4))
  VAR_7 = VAR_3->gitpath;
 else
  VAR_7 = VAR_3->commonpath;

 if ((VAR_6 = FUNC_9(&VAR_5, VAR_7, VAR_4)) < 0)
                                        ;
 else if (FUNC_0(FUNC_1(&VAR_5), VAR_1) == 0) {
  const char *VAR_8;

  FUNC_3(&VAR_5);

  if (!(VAR_8 = FUNC_8(&VAR_5)))
   VAR_6 = -1;
  else if (VAR_2 != ((void*)0))
   *VAR_2 = FUNC_5(VAR_4, VAR_8);
 } else {
  git_oid VAR_9;

  if (!(VAR_6 = FUNC_7(&VAR_9, VAR_4, &VAR_5)) &&
   VAR_2 != ((void*)0))
   *VAR_2 = FUNC_4(VAR_4, &VAR_9, ((void*)0));
 }

 FUNC_2(&VAR_5);
 return VAR_6;
}
