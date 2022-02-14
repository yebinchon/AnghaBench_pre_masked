
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, int VAR_2)
{
    char *VAR_3;
    long VAR_4;

    VAR_0 = 0;
    VAR_4 = FUNC_1(VAR_1, &VAR_3, 0);
    if (VAR_0 || !*VAR_1 || *VAR_3 || VAR_4 < 0 || VAR_4 > VAR_2)
 FUNC_0(1, "%s: Illegal page number", VAR_1);
    return VAR_4;
}
