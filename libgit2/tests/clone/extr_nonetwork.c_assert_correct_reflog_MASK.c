
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_reflog_entry ;
typedef int git_reflog ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,char const*) ;

__attribute__((used)) static void FUNC_11(const char *VAR_2)
{
 git_reflog *VAR_3;
 const git_reflog_entry *VAR_4;
 git_buf VAR_5 = VAR_0;

 FUNC_5(&VAR_5,
  "clone: from %s", FUNC_2("testrepo.git"));

 FUNC_3(FUNC_10(&VAR_3, VAR_1, VAR_2));
 FUNC_0(1, FUNC_8(VAR_3));
 VAR_4 = FUNC_6(VAR_3, 0);
 FUNC_1(VAR_5.ptr, FUNC_7(VAR_4));

 FUNC_9(VAR_3);

 FUNC_4(&VAR_5);
}
