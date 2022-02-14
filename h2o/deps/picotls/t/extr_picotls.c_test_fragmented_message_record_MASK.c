
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_ptls_message_emitter_t {int dummy; } ;
typedef int ptls_t ;
struct TYPE_6__ {int len; int base; } ;
typedef TYPE_2__ ptls_iovec_t ;
typedef int ptls_handshake_properties_t ;
struct TYPE_7__ {size_t count; TYPE_1__* vec; } ;
struct TYPE_5__ {int is_end_of_record; int len; int buf; } ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static int FUNC_1(ptls_t *VAR_1, struct st_ptls_message_emitter_t *VAR_2, ptls_iovec_t VAR_3,
                                          int VAR_4, ptls_handshake_properties_t *VAR_5)
{
    FUNC_0(VAR_0.vec[VAR_0.count].buf, VAR_3.base, VAR_3.len);
    VAR_0.vec[VAR_0.count].len = VAR_3.len;
    VAR_0.vec[VAR_0.count].is_end_of_record = VAR_4;
    ++VAR_0.count;

    return 0;
}
