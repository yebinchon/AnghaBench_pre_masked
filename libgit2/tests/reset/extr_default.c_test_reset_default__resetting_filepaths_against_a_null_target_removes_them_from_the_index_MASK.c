
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** strings; int count; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
 char *VAR_2[] = { "staged_changes", "staged_new_file" };

 FUNC_3("status");

 VAR_0.strings = VAR_2;
 VAR_0.count = 2;

 FUNC_0(&VAR_0, 1, ((void*)0));

 FUNC_1(FUNC_2(VAR_1, ((void*)0), &VAR_0));

 FUNC_0(&VAR_0, 0, ((void*)0));
}
