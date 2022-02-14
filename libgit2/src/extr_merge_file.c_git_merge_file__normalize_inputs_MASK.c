
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* path; int mode; } ;
typedef TYPE_1__ git_merge_file_input ;


 int FUNC_0 (TYPE_1__*,TYPE_1__ const*,int) ;

__attribute__((used)) static git_merge_file_input *FUNC_1(
 git_merge_file_input *VAR_0,
 const git_merge_file_input *VAR_1)
{
 FUNC_0(VAR_0, VAR_1, sizeof(git_merge_file_input));

 if (!VAR_0->path)
  VAR_0->path = "file.txt";

 if (!VAR_0->mode)
  VAR_0->mode = 0100644;

 return VAR_0;
}
