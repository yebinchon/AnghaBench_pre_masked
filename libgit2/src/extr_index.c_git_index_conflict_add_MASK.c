
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int path; int mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned short) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,unsigned short) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__**,int *,TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__**,int,int,int,int) ;
 int FUNC_8 (int ) ;

int FUNC_9(git_index *VAR_2,
 const git_index_entry *VAR_3,
 const git_index_entry *VAR_4,
 const git_index_entry *VAR_5)
{
 git_index_entry *VAR_6[3] = { 0 };
 unsigned short VAR_7;
 int VAR_8 = 0;

 FUNC_1 (VAR_2);

 if ((VAR_3 &&
   (VAR_8 = FUNC_5(&VAR_6[0], VAR_2, VAR_3)) < 0) ||
  (VAR_4 &&
   (VAR_8 = FUNC_5(&VAR_6[1], VAR_2, VAR_4)) < 0) ||
  (VAR_5 &&
   (VAR_8 = FUNC_5(&VAR_6[2], VAR_2, VAR_5)) < 0))
  goto on_error;


 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if (VAR_6[VAR_7] && !FUNC_8(VAR_6[VAR_7]->mode)) {
   FUNC_3(VAR_1, "invalid filemode for stage %d entry",
    VAR_7 + 1);
   VAR_8 = -1;
   goto on_error;
  }
 }


 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if (VAR_6[VAR_7] == ((void*)0))
   continue;

  if ((VAR_8 = FUNC_4(VAR_2, VAR_6[VAR_7]->path, 0)) != 0) {
   if (VAR_8 != VAR_0)
    goto on_error;

   FUNC_2();
   VAR_8 = 0;
  }
 }


 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if (VAR_6[VAR_7] == ((void*)0))
   continue;


  FUNC_0(VAR_6[VAR_7], VAR_7 + 1);

  if ((VAR_8 = FUNC_7(VAR_2, &VAR_6[VAR_7], 1, 1, 1, 0)) < 0)
   goto on_error;

  VAR_6[VAR_7] = ((void*)0);
 }

 return 0;

on_error:
 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if (VAR_6[VAR_7] != ((void*)0))
   FUNC_6(VAR_6[VAR_7]);
 }

 return VAR_8;
}
