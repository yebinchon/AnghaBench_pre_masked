
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* path; void* authority; int _port; int host; } ;
typedef TYPE_1__ h2o_url_t ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (char const*,...) ;
 char* FUNC_2 (char const*,int,int *,int *) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const char *VAR_1, h2o_url_t *VAR_2)
{
    const char *VAR_3 = FUNC_2(VAR_0, VAR_1 - VAR_0, &VAR_2->host, &VAR_2->_port);
    if (VAR_3 == ((void*)0))
        return -1;
    VAR_2->authority = FUNC_1(VAR_0, VAR_3 - VAR_0);
    if (VAR_3 == VAR_1) {
        VAR_2->path = FUNC_1(FUNC_0("/"));
    } else {
        if (*VAR_3 != '/')
            return -1;
        VAR_2->path = FUNC_1(VAR_3, VAR_1 - VAR_3);
    }
    return 0;
}
