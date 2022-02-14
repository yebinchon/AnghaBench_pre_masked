
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ assoc_keyid; scalar_t__ recv_keyid; int * recv_key; int * assoc_key; } ;
struct TYPE_3__ {TYPE_2__ authinfo; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct sctp_tcb *VAR_0, uint16_t VAR_1)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_1 == VAR_0->asoc.authinfo.assoc_keyid) {
  FUNC_0(VAR_0->asoc.authinfo.assoc_key);
  VAR_0->asoc.authinfo.assoc_key = ((void*)0);
 }
 if (VAR_1 == VAR_0->asoc.authinfo.recv_keyid) {
  FUNC_0(VAR_0->asoc.authinfo.recv_key);
  VAR_0->asoc.authinfo.recv_key = ((void*)0);
 }
}
