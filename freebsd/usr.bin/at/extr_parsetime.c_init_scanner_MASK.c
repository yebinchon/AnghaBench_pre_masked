
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_6, char **VAR_7)
{
    VAR_5 = VAR_7;
    VAR_4 = VAR_6;
    VAR_1 = 1;
    VAR_2 = 1;
    while (VAR_6-- > 0)
 VAR_2 += FUNC_2(*VAR_7++);

    if ((VAR_3 = FUNC_1(VAR_2)) == ((void*)0))
 FUNC_0(VAR_0, "virtual memory exhausted");
}
