
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ scrub; } ;
struct TYPE_3__ {scalar_t__ scrub; } ;
struct pf_state {TYPE_2__ dst; TYPE_1__ src; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

void
FUNC_1(struct pf_state *VAR_1)
{
 if (VAR_1->src.scrub)
  FUNC_0(VAR_0, VAR_1->src.scrub);
 if (VAR_1->dst.scrub)
  FUNC_0(VAR_0, VAR_1->dst.scrub);


}
