
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int active_keyid; } ;
struct TYPE_6__ {TYPE_1__ authinfo; int shared_keys; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct TYPE_7__ {int refcount; scalar_t__ deactivated; } ;
typedef TYPE_3__ sctp_sharedkey_t ;


 TYPE_3__* FUNC_0 (int *,int ) ;

int
FUNC_1(struct sctp_tcb *VAR_0, uint16_t VAR_1)
{
 sctp_sharedkey_t *VAR_2 = ((void*)0);


 VAR_2 = FUNC_0(&VAR_0->asoc.shared_keys, VAR_1);
 if (VAR_2 == ((void*)0)) {

  return (-1);
 }
 if ((VAR_2->deactivated) && (VAR_2->refcount > 1)) {

  return (-1);
 }


 VAR_0->asoc.authinfo.active_keyid = VAR_1;

 VAR_2->deactivated = 0;

 return (0);
}
