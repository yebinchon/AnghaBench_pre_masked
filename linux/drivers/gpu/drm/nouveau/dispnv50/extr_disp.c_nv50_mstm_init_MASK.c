
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; int mst_state; } ;
struct nv50_mstm {TYPE_1__ mgr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct nv50_mstm *VAR_0)
{
 int VAR_1;

 if (!VAR_0 || !VAR_0->mgr.mst_state)
  return;

 VAR_1 = FUNC_0(&VAR_0->mgr);
 if (VAR_1 == -1) {
  FUNC_1(&VAR_0->mgr, 0);
  FUNC_2(VAR_0->mgr.dev);
 }
}
