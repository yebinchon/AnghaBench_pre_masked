
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int (*) (void*,TYPE_1__*),void*) ;
 int FUNC_4 (int ,struct stat*) ;
 int * FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, git_buf *VAR_1)
{
 int VAR_2 = 0;
 git_buf *VAR_3 = VAR_0;
 struct stat VAR_4;

 if ((VAR_2 = FUNC_4(VAR_1->ptr, &VAR_4)) < 0)
  return VAR_2;

 if (FUNC_0(VAR_4.st_mode))
  return FUNC_3(VAR_1, 0, FUNC_6, VAR_0);


 if (FUNC_5(FUNC_1(VAR_1), "_git2_") != ((void*)0))
  return FUNC_2(VAR_3, FUNC_1(VAR_1));

 return 0;
}
