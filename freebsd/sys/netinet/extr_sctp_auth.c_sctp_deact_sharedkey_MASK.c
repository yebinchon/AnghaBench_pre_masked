
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ active_keyid; } ;
struct TYPE_6__ {int shared_keys; TYPE_1__ authinfo; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct TYPE_7__ {int refcount; int deactivated; } ;
typedef TYPE_3__ sctp_sharedkey_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,struct sctp_tcb*,scalar_t__,int ,int ) ;

int
FUNC_2(struct sctp_tcb *VAR_2, uint16_t VAR_3)
{
 sctp_sharedkey_t *VAR_4;

 if (VAR_2 == ((void*)0))
  return (-1);


 if (VAR_3 == VAR_2->asoc.authinfo.active_keyid)
  return (-1);


 VAR_4 = FUNC_0(&VAR_2->asoc.shared_keys, VAR_3);
 if (VAR_4 == ((void*)0))
  return (-1);


 if (VAR_4->refcount == 1) {

  FUNC_1(VAR_0, VAR_2, VAR_3, 0,
      VAR_1);
 }


 VAR_4->deactivated = 1;

 return (0);
}
