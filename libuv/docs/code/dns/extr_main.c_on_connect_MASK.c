
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_4__ {scalar_t__ handle; } ;
typedef TYPE_1__ uv_connect_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int ) ;

void FUNC_4(uv_connect_t *VAR_3, int VAR_4) {
    if (VAR_4 < 0) {
        FUNC_0(VAR_2, "connect failed error %s\n", FUNC_2(VAR_4));
        FUNC_1(VAR_3);
        return;
    }

    FUNC_3((uv_stream_t*) VAR_3->handle, VAR_0, VAR_1);
    FUNC_1(VAR_3);
}
