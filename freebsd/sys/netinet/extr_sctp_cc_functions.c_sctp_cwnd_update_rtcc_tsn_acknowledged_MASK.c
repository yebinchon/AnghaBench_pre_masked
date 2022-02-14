
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_tmit_chunk {scalar_t__ send_size; } ;
struct TYPE_3__ {int bw_bytes; } ;
struct TYPE_4__ {TYPE_1__ rtcc; } ;
struct sctp_nets {TYPE_2__ cc_mod; } ;



__attribute__((used)) static
void
FUNC_0(struct sctp_nets *VAR_0,
    struct sctp_tmit_chunk *VAR_1)
{
 VAR_0->cc_mod.rtcc.bw_bytes += VAR_1->send_size;
}
