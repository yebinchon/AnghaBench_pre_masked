
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptls_t ;
typedef int ptls_handshake_properties_t ;
struct TYPE_6__ {size_t off; int * base; } ;
typedef TYPE_1__ ptls_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,int *,size_t*,int *) ;
 int * FUNC_5 (int ,int) ;

__attribute__((used)) static ptls_t *FUNC_6(ptls_buffer_t *VAR_4, ptls_handshake_properties_t *VAR_5)
{
    ptls_t *VAR_6 = FUNC_5(VAR_2, 0), *VAR_7 = FUNC_5(VAR_3, 1);
    ptls_buffer_t VAR_8;
    size_t VAR_9;
    int VAR_10;

    FUNC_2(&VAR_8, "", 0);
    FUNC_2(VAR_4, "", 0);

    VAR_10 = FUNC_4(VAR_6, &VAR_8, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(VAR_10 == VAR_0);

    VAR_9 = VAR_8.off;
    VAR_10 = FUNC_4(VAR_7, VAR_4, VAR_8.base, &VAR_9, VAR_5);
    FUNC_0(VAR_10 == VAR_1);

    FUNC_1(&VAR_8);
    FUNC_3(VAR_7);

    return VAR_6;
}
