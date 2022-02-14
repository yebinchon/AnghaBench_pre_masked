
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int base; } ;
struct TYPE_10__ {TYPE_3__ bytes; } ;
struct TYPE_7__ {int base; } ;
struct TYPE_8__ {TYPE_1__ bytes; } ;
struct TYPE_11__ {TYPE_4__ without_ocsp_status; TYPE_2__ with_ocsp_status; } ;
typedef TYPE_5__ ptls_emit_compressed_certificate_t ;


 int FUNC_0 (int ) ;

void FUNC_1(ptls_emit_compressed_certificate_t *VAR_0)
{
    FUNC_0(VAR_0->with_ocsp_status.bytes.base);
    FUNC_0(VAR_0->without_ocsp_status.bytes.base);
}
