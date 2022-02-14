
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; int entries; } ;
struct TYPE_4__ {int sending; TYPE_1__ bufs; } ;
struct st_h2o_http1_finalostream_t {TYPE_2__ informational; } ;
typedef int h2o_socket_t ;


 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct st_h2o_http1_finalostream_t *VAR_1, h2o_socket_t *VAR_2)
{
    if (VAR_1->informational.sending || VAR_1->informational.bufs.size == 0)
        return;

    VAR_1->informational.sending = 1;
    FUNC_0(VAR_2, VAR_1->informational.bufs.entries, VAR_1->informational.bufs.size, VAR_0);
    VAR_1->informational.bufs.size = 0;
}
