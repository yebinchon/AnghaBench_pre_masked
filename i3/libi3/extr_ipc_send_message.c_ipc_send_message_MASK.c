
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int const size; int const type; int magic; } ;
typedef TYPE_1__ i3_ipc_header_t ;


 int FUNC_0 (int,void const*,int const) ;

int FUNC_1(int VAR_0, const uint32_t VAR_1,
                     const uint32_t VAR_2, const uint8_t *VAR_3) {
    const i3_ipc_header_t VAR_4 = {

        .magic = {'i', '3', '-', 'i', 'p', 'c'},
        .size = VAR_1,
        .type = VAR_2};

    if (FUNC_0(VAR_0, ((void *)&VAR_4), sizeof(i3_ipc_header_t)) == -1)
        return -1;

    if (FUNC_0(VAR_0, VAR_3, VAR_1) == -1)
        return -1;

    return 0;
}
