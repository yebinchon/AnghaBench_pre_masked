
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; scalar_t__ base; } ;
typedef TYPE_1__ ptls_iovec_t ;


 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;

__attribute__((used)) static int FUNC_1(ptls_iovec_t VAR_0, const char *VAR_1)
{
    return FUNC_0((const char *)VAR_0.base, VAR_1, VAR_0.len) == 0 && VAR_1[VAR_0.len] == '\0';
}
