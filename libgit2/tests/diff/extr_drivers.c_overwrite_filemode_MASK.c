
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int * ptr; } ;
typedef TYPE_1__ git_buf ;


 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 char* FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, git_buf *VAR_1)
{
 size_t VAR_2;
 char *VAR_3;

 VAR_3 = FUNC_2(VAR_0, "100644");
 if (!VAR_3)
  return;

 VAR_2 = ((const char *)VAR_3) - VAR_0;
 if (VAR_1->size < VAR_2 + 6)
  return;

 if (FUNC_0(&VAR_1->ptr[VAR_2], "100644", 6) != 0)
  FUNC_1(&VAR_1->ptr[VAR_2], "100644", 6);
}
