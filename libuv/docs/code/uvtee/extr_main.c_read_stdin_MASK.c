
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct TYPE_4__ {scalar_t__ base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,scalar_t__,TYPE_1__ const,int ) ;

void FUNC_3(uv_stream_t *VAR_6, ssize_t VAR_7, const uv_buf_t *VAR_8) {
    if (VAR_7 < 0){
        if (VAR_7 == VAR_0){

            FUNC_1((uv_handle_t *)&VAR_4, ((void*)0));
            FUNC_1((uv_handle_t *)&VAR_5, ((void*)0));
            FUNC_1((uv_handle_t *)&VAR_1, ((void*)0));
        }
    } else if (VAR_7 > 0) {
        FUNC_2((uv_stream_t *)&VAR_5, VAR_7, *VAR_8, VAR_3);
        FUNC_2((uv_stream_t *)&VAR_1, VAR_7, *VAR_8, VAR_2);
    }


    if (VAR_8->base)
        FUNC_0(VAR_8->base);
}
