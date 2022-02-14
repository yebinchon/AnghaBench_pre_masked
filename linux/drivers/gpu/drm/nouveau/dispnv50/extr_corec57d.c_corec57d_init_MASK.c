
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


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,TYPE_2__*) ;
 int FUNC_2 (int*,int,int) ;
 int* FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_4(struct nv50_core *VAR_0)
{
 const u32 VAR_1 = 8;
 u32 *VAR_2, VAR_3;
 if ((VAR_2 = FUNC_3(&VAR_0->chan, 2 + 6 * VAR_1 + 2))) {
  FUNC_2(VAR_2, 0x0208, 1);
  FUNC_0(VAR_2, VAR_0->chan.sync.handle);
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   FUNC_2(VAR_2, 0x1000 + (VAR_3 * 0x080), 3);
   FUNC_0(VAR_2, VAR_3 >> 1);
   FUNC_0(VAR_2, 0x0000000f);
   FUNC_0(VAR_2, 0x00000000);
   FUNC_2(VAR_2, 0x1010 + (VAR_3 * 0x080), 1);
   FUNC_0(VAR_2, 0x00117fff);
  }
  FUNC_2(VAR_2, 0x0200, 1);
  FUNC_0(VAR_2, 0x00000001);
  FUNC_1(VAR_2, &VAR_0->chan);
 }
}
