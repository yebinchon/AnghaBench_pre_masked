
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,size_t,int ) ;

__attribute__((used)) static char FUNC_2(const char *VAR_5, size_t VAR_6)
{
    if (FUNC_1(VAR_5, VAR_6, FUNC_0("on"))) {
        return VAR_2;
    }
    if (FUNC_1(VAR_5, VAR_6, FUNC_0("off"))) {
        return VAR_1;
    }
    if (FUNC_1(VAR_5, VAR_6, FUNC_0("gzip"))) {
        return VAR_4;
    }
    if (FUNC_1(VAR_5, VAR_6, FUNC_0("br"))) {
        return VAR_3;
    }
    return VAR_0;
}
