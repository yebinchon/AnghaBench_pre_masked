
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_12__ {int size; int entries; } ;
struct TYPE_13__ {TYPE_1__ headers; int status; } ;
typedef TYPE_2__ h2o_res_t ;
struct TYPE_14__ {int length; int payload; } ;
typedef TYPE_3__ h2o_http2_frame_t ;
typedef int h2o_hpack_header_table_t ;
struct TYPE_15__ {int size; scalar_t__ bytes; } ;
typedef TYPE_4__ h2o_buffer_t ;
struct TYPE_11__ {int max_frame_size; } ;


 TYPE_10__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__**) ;
 int FUNC_1 (TYPE_4__**,int *) ;
 int FUNC_2 (TYPE_4__**,int *,int,int ,int ,int ,int ,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *,int ,int ,char const**) ;
 int FUNC_4 (int ,int ,char const*,size_t) ;
 int VAR_2 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(h2o_hpack_header_table_t *VAR_3, h2o_res_t *VAR_4, const char *VAR_5, size_t VAR_6)
{
    h2o_buffer_t *VAR_7;
    h2o_http2_frame_t VAR_8;
    const char *VAR_9;

    FUNC_1(&VAR_7, &VAR_2);
    FUNC_2(&VAR_7, VAR_3, 1, VAR_0.max_frame_size, VAR_4->status, VAR_4->headers.entries,
                               VAR_4->headers.size, ((void*)0), VAR_1);

    FUNC_5(FUNC_3(&VAR_8, (uint8_t *)VAR_7->bytes, VAR_7->size, VAR_0.max_frame_size, &VAR_9) > 0);
    FUNC_5(FUNC_4(VAR_8.payload, VAR_8.length, VAR_5, VAR_6));

    FUNC_0(&VAR_7);
}
