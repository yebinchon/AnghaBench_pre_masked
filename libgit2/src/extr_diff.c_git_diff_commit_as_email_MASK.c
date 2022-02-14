
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_repository ;
typedef int git_diff_options ;
struct TYPE_4__ {size_t patch_no; size_t total_patches; int author; int body; int summary; int id; int flags; } ;
typedef TYPE_1__ git_diff_format_email_options ;
typedef int git_diff ;
typedef int git_commit ;
typedef int git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,int const*) ;
 int FUNC_6 (int *,int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;

int FUNC_8(
 git_buf *VAR_1,
 git_repository *VAR_2,
 git_commit *VAR_3,
 size_t VAR_4,
 size_t VAR_5,
 uint32_t VAR_6,
 const git_diff_options *VAR_7)
{
 git_diff *VAR_8 = ((void*)0);
 git_diff_format_email_options VAR_9 =
  VAR_0;
 int VAR_10;

 FUNC_0 (VAR_1 && VAR_2 && VAR_3);

 VAR_9.flags = VAR_6;
 VAR_9.patch_no = VAR_4;
 VAR_9.total_patches = VAR_5;
 VAR_9.id = FUNC_3(VAR_3);
 VAR_9.summary = FUNC_4(VAR_3);
 VAR_9.body = FUNC_2(VAR_3);
 VAR_9.author = FUNC_1(VAR_3);

 if ((VAR_10 = FUNC_5(&VAR_8, VAR_2, VAR_3, VAR_7)) < 0)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_1, VAR_8, &VAR_9);

 FUNC_7(VAR_8);
 return VAR_10;
}
