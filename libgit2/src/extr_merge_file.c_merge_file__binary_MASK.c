
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int automergeable; int mode; int len; int * ptr; int * path; } ;
typedef TYPE_1__ git_merge_file_result ;
struct TYPE_10__ {scalar_t__ favor; } ;
typedef TYPE_2__ git_merge_file_options ;
struct TYPE_11__ {int mode; int size; int ptr; int path; } ;
typedef TYPE_3__ git_merge_file_input ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_4(
 git_merge_file_result *VAR_2,
 const git_merge_file_input *VAR_3,
 const git_merge_file_input *VAR_4,
 const git_merge_file_options *VAR_5)
{
 const git_merge_file_input *VAR_6 = ((void*)0);

 FUNC_3(VAR_2, 0x0, sizeof(git_merge_file_result));

 if (VAR_5 && VAR_5->favor == VAR_0)
  VAR_6 = VAR_3;
 else if (VAR_5 && VAR_5->favor == VAR_1)
  VAR_6 = VAR_4;
 else
  goto done;

 if ((VAR_2->path = FUNC_1(VAR_6->path)) == ((void*)0) ||
  (VAR_2->ptr = FUNC_0(VAR_6->size)) == ((void*)0))
  goto done;

 FUNC_2((char *)VAR_2->ptr, VAR_6->ptr, VAR_6->size);
 VAR_2->len = VAR_6->size;
 VAR_2->mode = VAR_6->mode;
 VAR_2->automergeable = 1;

done:
 return 0;
}
