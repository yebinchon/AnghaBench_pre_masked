
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct sctp_tcb {int dummy; } ;
struct TYPE_3__ {int priority; } ;
struct TYPE_4__ {TYPE_1__ prio; } ;
struct sctp_stream_out {TYPE_2__ ss_params; } ;
struct sctp_association {int dummy; } ;


 int FUNC_0 (struct sctp_tcb*,struct sctp_association*,struct sctp_stream_out*,int *,int) ;
 int FUNC_1 (struct sctp_tcb*,struct sctp_association*,struct sctp_stream_out*,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct sctp_tcb *VAR_0, struct sctp_association *VAR_1,
    struct sctp_stream_out *VAR_2, uint16_t VAR_3)
{
 if (VAR_2 == ((void*)0)) {
  return (-1);
 }
 VAR_2->ss_params.prio.priority = VAR_3;
 FUNC_1(VAR_0, VAR_1, VAR_2, ((void*)0), 1);
 FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0), 1);
 return (1);
}
