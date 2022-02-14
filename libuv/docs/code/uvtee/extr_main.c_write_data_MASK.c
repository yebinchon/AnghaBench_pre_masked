
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int base; } ;
struct TYPE_6__ {TYPE_4__ buf; } ;
typedef TYPE_1__ write_req_t ;
typedef int uv_write_t ;
typedef int uv_write_cb ;
typedef int uv_stream_t ;
struct TYPE_7__ {int base; } ;
typedef TYPE_2__ uv_buf_t ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ,size_t) ;
 TYPE_4__ FUNC_2 (char*,size_t) ;
 int FUNC_3 (int *,int *,TYPE_4__*,int,int ) ;

void FUNC_4(uv_stream_t *VAR_0, size_t VAR_1, uv_buf_t VAR_2, uv_write_cb VAR_3) {
    write_req_t *VAR_4 = (write_req_t*) FUNC_0(sizeof(write_req_t));
    VAR_4->buf = FUNC_2((char*) FUNC_0(VAR_1), VAR_1);
    FUNC_1(VAR_4->buf.base, VAR_2.base, VAR_1);
    FUNC_3((uv_write_t*) VAR_4, (uv_stream_t*)VAR_0, &VAR_4->buf, 1, VAR_3);
}
