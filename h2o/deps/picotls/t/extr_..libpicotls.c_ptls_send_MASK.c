
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int seq; int * aead; } ;
struct TYPE_6__ {TYPE_5__ enc; } ;
struct TYPE_7__ {int needs_key_update; TYPE_1__ traffic_protection; scalar_t__ key_update_send_request; } ;
typedef TYPE_2__ ptls_t ;
typedef int ptls_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,void const*,size_t,TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*,int *,scalar_t__) ;

int FUNC_3(ptls_t *VAR_1, ptls_buffer_t *VAR_2, const void *VAR_3, size_t VAR_4)
{
    FUNC_0(VAR_1->traffic_protection.enc.aead != ((void*)0));




    if (VAR_1->traffic_protection.enc.seq >= 16777216)
        VAR_1->needs_key_update = 1;

    if (VAR_1->needs_key_update) {
        int VAR_5;
        if ((VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_1->key_update_send_request)) != 0)
            return VAR_5;
        VAR_1->needs_key_update = 0;
        VAR_1->key_update_send_request = 0;
    }

    return FUNC_1(VAR_2, VAR_0, VAR_3, VAR_4, &VAR_1->traffic_protection.enc);
}
