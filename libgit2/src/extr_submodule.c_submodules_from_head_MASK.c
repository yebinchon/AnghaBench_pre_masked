
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_strmap ;
typedef int git_iterator ;
struct TYPE_8__ {char* path; int id; int mode; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__ const**,int *) ;
 int FUNC_3 (int **,int *,int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *) ;
 int FUNC_9 (TYPE_1__**,int ,int *,char const*) ;
 int FUNC_10 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int FUNC_11(git_strmap *VAR_2, git_tree *VAR_3, git_config *VAR_4)
{
 int VAR_5;
 git_iterator *VAR_6 = ((void*)0);
 const git_index_entry *VAR_7;
 git_strmap *VAR_8;

 if ((VAR_5 = FUNC_8(&VAR_8, FUNC_7(VAR_3), VAR_4)))
  goto done;

 if ((VAR_5 = FUNC_3(&VAR_6, VAR_3, ((void*)0))) < 0)
  goto done;

 while (!(VAR_5 = FUNC_2(&VAR_7, VAR_6))) {
  git_submodule *VAR_9;

  if ((VAR_9 = FUNC_5(VAR_2, VAR_7->path)) != ((void*)0)) {
   if (FUNC_0(VAR_7->mode))
    FUNC_10(VAR_9, VAR_7->mode, &VAR_7->id);
   else
    VAR_9->flags |= VAR_1;
  } else if (FUNC_0(VAR_7->mode)) {
   const char *VAR_10;

   if ((VAR_10 = FUNC_5(VAR_8, VAR_7->path)) == ((void*)0))
    VAR_10 = VAR_7->path;

   if (!FUNC_9(&VAR_9, FUNC_7(VAR_3), VAR_2, VAR_10)) {
    FUNC_10(
     VAR_9, VAR_7->mode, &VAR_7->id);
    FUNC_6(VAR_9);
   }
  }
 }

 if (VAR_5 == VAR_0)
  VAR_5 = 0;

done:
 FUNC_4(VAR_6);
 FUNC_1(VAR_8);

 return VAR_5;
}
