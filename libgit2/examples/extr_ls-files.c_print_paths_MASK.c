
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t file_count; char** files; scalar_t__ error_unmatch; } ;
typedef TYPE_1__ ls_options ;
struct TYPE_7__ {char const* path; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 size_t FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,size_t) ;
 TYPE_2__* FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (char const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(ls_options *VAR_2, git_index *VAR_3)
{
 size_t VAR_4;
 const git_index_entry *VAR_5;


 if (VAR_2->file_count == 0) {
  size_t VAR_6 = FUNC_1(VAR_3);

  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
   VAR_5 = FUNC_2(VAR_3, VAR_4);
   FUNC_4(VAR_5->path);
  }
  return 0;
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->file_count; ++VAR_4) {
  const char *VAR_7 = VAR_2->files[VAR_4];

  if ((VAR_5 = FUNC_3(VAR_3, VAR_7, VAR_0)) != ((void*)0)) {
   FUNC_4(VAR_7);
  } else if (VAR_2->error_unmatch) {
   FUNC_0(VAR_1, "error: pathspec '%s' did not match any file(s) known to git.\n", VAR_7);
   FUNC_0(VAR_1, "Did you forget to 'git add'?\n");
   return -1;
  }
 }

 return 0;
}
