
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int h2o_url_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_3__ {scalar_t__ len; int * base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int) ;
 TYPE_1__ FUNC_7 (int *,int ,int *,int *,int ,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    h2o_url_t VAR_1;
    h2o_mem_pool_t VAR_2;
    h2o_iovec_t VAR_3;

    FUNC_5(FUNC_0("http://realhost:81/real/"), &VAR_1);

    FUNC_3(&VAR_2);

    VAR_3 = FUNC_7(&VAR_2, FUNC_0("http://realhost:81/real/abc"), &VAR_1, &VAR_0,
                           FUNC_1(FUNC_0("vhost:8443")), FUNC_1(FUNC_0("/virtual/")));
    FUNC_6(FUNC_4(VAR_3.base, VAR_3.len, FUNC_0("https://vhost:8443/virtual/abc")));
    VAR_3 = FUNC_7(&VAR_2, FUNC_0("http://realhost:81/other/abc"), &VAR_1, &VAR_0,
                           FUNC_1(FUNC_0("vhost:8443")), FUNC_1(FUNC_0("/virtual/")));
    FUNC_6(VAR_3.base == ((void*)0));
    FUNC_6(VAR_3.len == 0);

    FUNC_2(&VAR_2);
}
