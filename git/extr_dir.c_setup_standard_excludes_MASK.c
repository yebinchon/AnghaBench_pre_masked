
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dir_struct {char* exclude_per_dir; int ss_info_exclude; scalar_t__ untracked; int ss_excludes_file; } ;
struct TYPE_2__ {scalar_t__ have_repository; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int ) ;
 int FUNC_1 (struct dir_struct*,char const*,int *) ;
 char const* VAR_1 ;
 char* FUNC_2 () ;
 TYPE_1__* VAR_2 ;
 char* FUNC_3 (char*) ;

void FUNC_4(struct dir_struct *VAR_3)
{
 VAR_3->exclude_per_dir = ".gitignore";


 if (!VAR_1)
  VAR_1 = FUNC_3("ignore");
 if (VAR_1 && !FUNC_0(VAR_1, VAR_0, 0))
  FUNC_1(VAR_3, VAR_1,
      VAR_3->untracked ? &VAR_3->ss_excludes_file : ((void*)0));


 if (VAR_2->have_repository) {
  const char *VAR_4 = FUNC_2();
  if (!FUNC_0(VAR_4, VAR_0, 0))
   FUNC_1(VAR_3, VAR_4,
       VAR_3->untracked ? &VAR_3->ss_info_exclude : ((void*)0));
 }
}
