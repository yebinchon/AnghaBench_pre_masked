
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int end; int start; } ;
typedef TYPE_1__ git_regmatch ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int,TYPE_1__*) ;
 int VAR_0 ;

void FUNC_4(void)
{
 git_regmatch VAR_1[3];

 FUNC_1(FUNC_2(&VAR_0, "(a*)(b*)", 0));
 FUNC_1(FUNC_3(&VAR_0, "ab", 3, VAR_1));
 FUNC_0(VAR_1[0].start, 0);
 FUNC_0(VAR_1[0].end, 2);
 FUNC_0(VAR_1[1].start, 0);
 FUNC_0(VAR_1[1].end, 1);
 FUNC_0(VAR_1[2].start, 1);
 FUNC_0(VAR_1[2].end, 2);
}
