
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num_chunks; } ;
typedef TYPE_1__ sctp_auth_chklist_t ;



size_t
FUNC_0(const sctp_auth_chklist_t *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return (0);
 else
  return (VAR_0->num_chunks);
}
