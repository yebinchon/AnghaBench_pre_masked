
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ min_in; } ;
struct mp {TYPE_1__ seq; } ;
struct TYPE_4__ {scalar_t__ seq; } ;
struct datalink {TYPE_2__ mp; } ;


 int FUNC_0 (struct mp*,int *,int *) ;

void
FUNC_1(struct mp *VAR_0, struct datalink *VAR_1)
{
  if (VAR_0->seq.min_in == VAR_1->mp.seq)

    FUNC_0(VAR_0, ((void*)0), ((void*)0));
}
