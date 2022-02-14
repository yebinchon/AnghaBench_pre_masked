
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_diff ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;
 int FUNC_6 (char const*) ;

void FUNC_7(void)
{
 const char VAR_2[] =
     "diff --git a/obj1 b/obj2\n"
     "index 1234567..7654321 10644\n"
     "--- a/obj1\n"
     "+++ b/obj2\n"
     "@@ -1 +1 @@\n"
     "-a\n"
     "+\n";
 git_buf VAR_3 = VAR_0;
 git_diff *VAR_4;

 FUNC_1(FUNC_4(&VAR_4, VAR_2, FUNC_6(VAR_2)));
 FUNC_1(FUNC_5(&VAR_3, VAR_4, VAR_1));
 FUNC_0(VAR_2, VAR_3.ptr);

 FUNC_3(VAR_4);
 FUNC_2(&VAR_3);
}
