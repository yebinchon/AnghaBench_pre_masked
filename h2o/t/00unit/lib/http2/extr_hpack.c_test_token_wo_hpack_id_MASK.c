
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int size; int entries; } ;
struct TYPE_14__ {int status; char* reason; TYPE_10__ headers; int member_0; } ;
typedef TYPE_1__ h2o_res_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_15__ {int hpack_capacity; int * member_0; } ;
typedef TYPE_2__ h2o_hpack_header_table_t ;
struct TYPE_16__ {scalar_t__ size; scalar_t__ bytes; } ;
typedef TYPE_3__ h2o_buffer_t ;
struct TYPE_13__ {int max_frame_size; } ;


 TYPE_11__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_10__*,int ,int *,int ) ;
 int FUNC_2 (TYPE_3__**,scalar_t__) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (TYPE_3__**,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_3__**,TYPE_2__*,int,int ,int,int ,int ,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_10 (int ) ;

void FUNC_11(void)
{
    h2o_mem_pool_t VAR_4;
    FUNC_8(&VAR_4);
    h2o_hpack_header_table_t VAR_5 = {((void*)0)};
    VAR_5.hpack_capacity = 4096;
    h2o_res_t VAR_6 = {0};
    h2o_buffer_t *VAR_7;
    FUNC_4(&VAR_7, &VAR_3);

    VAR_6.status = 200;
    VAR_6.reason = "OK";
    FUNC_1(&VAR_4, &VAR_6.headers, VAR_1, ((void*)0), FUNC_0("test"));

    FUNC_6(&VAR_7, &VAR_5, 1, VAR_0.max_frame_size, VAR_6.status, VAR_6.headers.entries,
                               VAR_6.headers.size, ((void*)0), VAR_2);
    FUNC_10(FUNC_9(VAR_7->bytes + 9, VAR_7->size - 9,
                 FUNC_0("\x88"
                            "\x40\x02"
                            "te"
                            "\x83"
                            "IP\x9f" )));
    FUNC_2(&VAR_7, VAR_7->size);
    FUNC_6(&VAR_7, &VAR_5, 1, VAR_0.max_frame_size, VAR_6.status, VAR_6.headers.entries,
                               VAR_6.headers.size, ((void*)0), VAR_2);
    FUNC_10(FUNC_9(VAR_7->bytes + 9, VAR_7->size - 9,
                 FUNC_0("\x88"
                            "\xbe" )));

    FUNC_3(&VAR_7);
    FUNC_5(&VAR_5);
    FUNC_7(&VAR_4);
}
