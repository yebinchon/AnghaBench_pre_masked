
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int VAR_1 ;

void
FUNC_4(const char *VAR_2)
{
    if (VAR_0)
        FUNC_1(VAR_0);
    VAR_0 = FUNC_3(VAR_2);
    if (!VAR_0)
        FUNC_0(1, "strdup failed");

    FUNC_2("\n\nTest %d: %s\n", VAR_1++, VAR_2);
}
