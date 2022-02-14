
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_attr_file_source ;
struct TYPE_2__ {int files; int attr_session; int repo; int * workdir; int * index; int flags; } ;
typedef TYPE_1__ attr_walk_up_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,char const*,int ,int) ;
 int FUNC_2 (int *,char const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, const char *VAR_3)
{
 attr_walk_up_info *VAR_4 = (attr_walk_up_info *)VAR_2;
 git_attr_file_source VAR_5[VAR_1];
 int VAR_6 = 0, VAR_7, VAR_8;
 bool VAR_9;

 VAR_7 = FUNC_0(
  VAR_4->flags, VAR_4->workdir != ((void*)0), VAR_4->index != ((void*)0), VAR_5);
 VAR_9 = VAR_4->workdir ? !FUNC_2(VAR_4->workdir, VAR_3) : 0;

 for (VAR_8 = 0; !VAR_6 && VAR_8 < VAR_7; ++VAR_8)
  VAR_6 = FUNC_1(VAR_4->repo, VAR_4->attr_session, VAR_4->files,
           VAR_5[VAR_8], VAR_3, VAR_0, VAR_9);

 return VAR_6;
}
