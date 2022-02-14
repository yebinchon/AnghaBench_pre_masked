
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* base; } ;
struct TYPE_5__ {TYPE_1__ buf; } ;
typedef TYPE_2__ write_req_t ;
typedef int uv_write_t ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(uv_write_t *VAR_0) {
    write_req_t *VAR_1 = (write_req_t*) VAR_0;
    FUNC_0(VAR_1->buf.base);
    FUNC_0(VAR_1);
}
