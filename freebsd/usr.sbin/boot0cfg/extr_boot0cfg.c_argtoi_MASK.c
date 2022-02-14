
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char const*,int) ;
 long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    char *VAR_5;
    long VAR_6;

    VAR_0 = 0;
    VAR_6 = FUNC_1(VAR_1, &VAR_5, 0);
    if (VAR_0 || !*VAR_1 || *VAR_5 || VAR_6 < VAR_2 || VAR_6 > VAR_3)
        FUNC_0(1, "%s: Bad argument to -%c option", VAR_1, VAR_4);
    return VAR_6;
}
