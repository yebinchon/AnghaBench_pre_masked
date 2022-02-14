
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ancestor; char* ours; char* theirs; } ;
typedef TYPE_1__ git_index_name_entry ;
typedef int git_buf ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(git_buf *VAR_0, git_index_name_entry *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->ancestor == ((void*)0))
  VAR_2 = FUNC_0(VAR_0, "\0", 1);
 else
  VAR_2 = FUNC_0(VAR_0, VAR_1->ancestor, FUNC_1(VAR_1->ancestor) + 1);

 if (VAR_2 != 0)
  goto on_error;

 if (VAR_1->ours == ((void*)0))
  VAR_2 = FUNC_0(VAR_0, "\0", 1);
 else
  VAR_2 = FUNC_0(VAR_0, VAR_1->ours, FUNC_1(VAR_1->ours) + 1);

 if (VAR_2 != 0)
  goto on_error;

 if (VAR_1->theirs == ((void*)0))
  VAR_2 = FUNC_0(VAR_0, "\0", 1);
 else
  VAR_2 = FUNC_0(VAR_0, VAR_1->theirs, FUNC_1(VAR_1->theirs) + 1);

on_error:
 return VAR_2;
}
