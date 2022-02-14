
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int handle; } ;
struct TYPE_5__ {TYPE_1__ sync; } ;
struct nv50_core {TYPE_2__ chan; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (TYPE_2__*,int) ;

void
FUNC_4(struct nv50_core *VAR_0)
{
 u32 *VAR_1;
 if ((VAR_1 = FUNC_3(&VAR_0->chan, 2))) {
  FUNC_2(VAR_1, 0x0088, 1);
  FUNC_0(VAR_1, VAR_0->chan.sync.handle);
  FUNC_1(VAR_1, &VAR_0->chan);
 }
}
