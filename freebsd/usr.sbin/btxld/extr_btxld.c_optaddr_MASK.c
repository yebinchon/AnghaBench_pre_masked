
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,char const*) ;
 unsigned long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(const char *VAR_2)
{
    char *VAR_3;
    unsigned long VAR_4;

    VAR_1 = 0;
    VAR_4 = FUNC_1(VAR_2, &VAR_3, 0);
    if (VAR_1 || !*VAR_2 || *VAR_3 || VAR_4 > VAR_0)
 FUNC_0(1, "%s: Illegal address", VAR_2);
    return VAR_4;
}
