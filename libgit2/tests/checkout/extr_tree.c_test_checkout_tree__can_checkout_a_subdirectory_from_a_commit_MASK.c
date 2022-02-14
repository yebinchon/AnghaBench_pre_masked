
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** strings; int count; } ;
struct TYPE_5__ {TYPE_1__ paths; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,char*) ;

void FUNC_6(void)
{
 char *VAR_3[] = { "ab/de/" };

 VAR_1.paths.strings = VAR_3;
 VAR_1.paths.count = 1;

 FUNC_1(FUNC_5(&VAR_0, VAR_2, "subtrees"));

 FUNC_0(0, FUNC_3("./testrepo/ab/"));

 FUNC_1(FUNC_2(VAR_2, VAR_0, &VAR_1));

 FUNC_0(1, FUNC_4("./testrepo/ab/de/2.txt"));
 FUNC_0(1, FUNC_4("./testrepo/ab/de/fgh/1.txt"));
}
