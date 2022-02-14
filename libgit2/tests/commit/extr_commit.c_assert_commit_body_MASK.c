
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct git_commit {int dummy; } ;
struct TYPE_6__ {int raw_message; } ;
typedef TYPE_1__ git_commit ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,int ) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(const char *VAR_0, const char *VAR_1)
{
 git_commit *VAR_2;

 FUNC_0(VAR_2 = FUNC_2(1, sizeof(struct git_commit)));

 VAR_2->raw_message = FUNC_3(VAR_1);
 FUNC_1(VAR_0, FUNC_5(VAR_2));

 FUNC_4(VAR_2);
}
