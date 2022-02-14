
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_7__ {scalar_t__ active_keyid; } ;
struct TYPE_8__ {int shared_keys; TYPE_1__ authinfo; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct TYPE_9__ {int refcount; } ;
typedef TYPE_3__ sctp_sharedkey_t ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_tcb*,scalar_t__) ;
 TYPE_3__* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;

int
FUNC_4(struct sctp_tcb *VAR_1, uint16_t VAR_2)
{
 sctp_sharedkey_t *VAR_3;

 if (VAR_1 == ((void*)0))
  return (-1);


 if (VAR_2 == VAR_1->asoc.authinfo.active_keyid)
  return (-1);


 VAR_3 = FUNC_2(&VAR_1->asoc.shared_keys, VAR_2);
 if (VAR_3 == ((void*)0))
  return (-1);


 if (VAR_3->refcount > 1)
  return (-1);


 FUNC_0(VAR_3, VAR_0);
 FUNC_3(VAR_3);


 FUNC_1(VAR_1, VAR_2);
 return (0);
}
