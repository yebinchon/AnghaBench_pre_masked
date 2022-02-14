
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * key; int refcount; } ;
typedef TYPE_1__ sctp_sharedkey_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

void
FUNC_3(sctp_sharedkey_t *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 if (FUNC_0(&VAR_1->refcount)) {
  if (VAR_1->key != ((void*)0))
   FUNC_2(VAR_1->key);
  FUNC_1(VAR_1, VAR_0);
 }
}
