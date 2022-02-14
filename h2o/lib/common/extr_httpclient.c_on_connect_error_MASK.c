
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* on_connect ) (TYPE_2__*,char const*,int *,int *,int *,int ,int *,int *,int *,int *) ;} ;
struct TYPE_7__ {TYPE_1__ _cb; } ;
typedef TYPE_2__ h2o_httpclient_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char const*,int *,int *,int *,int ,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_3(h2o_httpclient_t *VAR_0, const char *VAR_1)
{
    FUNC_0(VAR_1 != ((void*)0));
    VAR_0->_cb.on_connect(VAR_0, VAR_1, ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_1(VAR_0);
}
