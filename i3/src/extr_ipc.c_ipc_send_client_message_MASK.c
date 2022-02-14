
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ buffer_size; scalar_t__ buffer; } ;
typedef TYPE_1__ ipc_client ;
struct TYPE_6__ {size_t size; int const type; int magic; } ;
typedef TYPE_2__ i3_ipc_header_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,void const*,size_t const) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(ipc_client *VAR_0, size_t VAR_1, const uint32_t VAR_2, const uint8_t *VAR_3) {
    const i3_ipc_header_t VAR_4 = {
        .magic = {'i', '3', '-', 'i', 'p', 'c'},
        .size = VAR_1,
        .type = VAR_2};
    const size_t VAR_5 = sizeof(i3_ipc_header_t);
    const size_t VAR_6 = VAR_5 + VAR_1;

    const bool VAR_7 = (VAR_0->buffer_size == 0);
    VAR_0->buffer = FUNC_2(VAR_0->buffer, VAR_0->buffer_size + VAR_6);
    FUNC_1(VAR_0->buffer + VAR_0->buffer_size, ((void *)&VAR_4), VAR_5);
    FUNC_1(VAR_0->buffer + VAR_0->buffer_size + VAR_5, VAR_3, VAR_1);
    VAR_0->buffer_size += VAR_6;

    if (VAR_7) {
        FUNC_0(VAR_0);
    }
}
