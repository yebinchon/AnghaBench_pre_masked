
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_13__ {TYPE_1__ context; } ;
struct TYPE_10__ {TYPE_6__ certificate_request; } ;
struct TYPE_11__ {int key_schedule; int state; TYPE_2__ client; } ;
typedef TYPE_3__ ptls_t ;
struct TYPE_12__ {int len; int * base; } ;
typedef TYPE_4__ ptls_iovec_t ;
typedef int ptls_handshake_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_6__*,int const*,int const* const) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(ptls_t *VAR_4, ptls_iovec_t VAR_5, ptls_handshake_properties_t *VAR_6)
{
    const uint8_t *VAR_7 = VAR_5.base + VAR_2, *const VAR_8 = VAR_5.base + VAR_5.len;
    int VAR_9 = 0;

    if ((VAR_9 = FUNC_0(VAR_4, &VAR_4->client.certificate_request, VAR_7, VAR_8)) != 0)
        return VAR_9;


    if (VAR_4->client.certificate_request.context.len != 0)
        return VAR_0;

    VAR_4->state = VAR_3;
    FUNC_1(VAR_4->key_schedule, VAR_5.base, VAR_5.len);

    return VAR_1;
}
