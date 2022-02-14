
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; int * entries; } ;
struct listener_ssl_config_t {TYPE_3__ hostnames; } ;
struct TYPE_4__ {char* base; int len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,TYPE_3__*,scalar_t__) ;
 char* FUNC_2 (char*,char,int) ;

__attribute__((used)) static void FUNC_3(struct listener_ssl_config_t *VAR_0, h2o_iovec_t VAR_1)
{
    const char *VAR_2 = FUNC_2(VAR_1.base, ':', VAR_1.len);
    if (VAR_2 == ((void*)0))
        VAR_2 = VAR_1.base + VAR_1.len;

    FUNC_1(((void*)0), &VAR_0->hostnames, VAR_0->hostnames.size + 1);
    VAR_0->hostnames.entries[VAR_0->hostnames.size++] = FUNC_0(VAR_1.base, VAR_2 - VAR_1.base);
}
