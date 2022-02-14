
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_pool ;
struct TYPE_5__ {char* fullpath; char* path; } ;
typedef TYPE_1__ git_attr_file_entry ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (int *,size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;

int FUNC_5(
 git_attr_file_entry **VAR_0,
 const char *VAR_1,
 const char *VAR_2,
 git_pool *VAR_3)
{
 size_t VAR_4 = 0, VAR_5 = FUNC_4(VAR_2);
 size_t VAR_6 = sizeof(git_attr_file_entry) + VAR_5 + 1;
 git_attr_file_entry *VAR_7;

 if (VAR_1 != ((void*)0) && FUNC_1(VAR_2) < 0) {
  VAR_4 = FUNC_4(VAR_1);
  VAR_6 += VAR_4;

  if (VAR_4 && VAR_1[VAR_4 - 1] != '/')
   VAR_6++;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_6);
 FUNC_0(VAR_7);

 if (VAR_4) {
  FUNC_3(VAR_7->fullpath, VAR_1, VAR_4);

  if (VAR_1[VAR_4 - 1] != '/')
   VAR_7->fullpath[VAR_4++] = '/';
 }
 FUNC_3(&VAR_7->fullpath[VAR_4], VAR_2, VAR_5);

 VAR_7->path = &VAR_7->fullpath[VAR_4];
 *VAR_0 = VAR_7;

 return 0;
}
