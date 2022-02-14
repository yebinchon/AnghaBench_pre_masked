
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct st_ptls_record_t {size_t member_2; void const* member_3; int member_1; int member_0; } ;
struct TYPE_8__ {int member_4; int member_3; int member_2; int * member_1; int * member_0; } ;
struct st_ptls_raw_message_emitter_t {size_t* member_2; int super; int member_1; TYPE_1__ member_0; } ;
struct TYPE_9__ {int enc; } ;
struct TYPE_10__ {TYPE_2__ traffic_protection; } ;
typedef TYPE_3__ ptls_t ;
typedef int ptls_handshake_properties_t ;
typedef int ptls_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,int *,struct st_ptls_record_t*,int *) ;
 size_t FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *,int *,int *) ;

int FUNC_3(ptls_t *VAR_6, ptls_buffer_t *VAR_7, size_t VAR_8[5], size_t VAR_9, const void *VAR_10,
                        size_t VAR_11, ptls_handshake_properties_t *VAR_12)
{
    struct st_ptls_raw_message_emitter_t VAR_13 = {
        {VAR_7, &VAR_6->traffic_protection.enc, 0, VAR_3, VAR_4}, VAR_2, VAR_8};
    struct st_ptls_record_t VAR_14 = {VAR_1, 0, VAR_11, VAR_10};

    if (VAR_10 == ((void*)0))
        return FUNC_2(VAR_6, &VAR_13.super, VAR_12, ((void*)0));

    if (FUNC_1(VAR_6) != VAR_9)
        return VAR_0;

    return FUNC_0(VAR_6, VAR_5, &VAR_13.super, &VAR_14, VAR_12);
}
