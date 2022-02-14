
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* conn; } ;
typedef TYPE_3__ h2o_req_t ;
struct TYPE_6__ {TYPE_1__* callbacks; } ;
struct TYPE_5__ {int (* push_path ) (TYPE_3__*,char const*,size_t,int) ;} ;


 int FUNC_0 (TYPE_3__*,char const*,size_t,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const char *VAR_1, size_t VAR_2, int VAR_3)
{
    h2o_req_t *VAR_4 = VAR_0;

    if (VAR_4->conn->callbacks->push_path != ((void*)0))
        VAR_4->conn->callbacks->push_path(VAR_4, VAR_1, VAR_2, VAR_3);
}
