
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mst_state; } ;
struct nv50_mstm {TYPE_1__ mgr; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(struct nv50_mstm *VAR_0)
{
 if (VAR_0 && VAR_0->mgr.mst_state)
  FUNC_0(&VAR_0->mgr);
}
