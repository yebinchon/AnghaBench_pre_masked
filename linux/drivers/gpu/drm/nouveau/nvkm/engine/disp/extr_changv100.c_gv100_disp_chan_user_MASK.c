
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int user; } ;
struct nv50_disp_chan {TYPE_1__ chid; } ;



u64
FUNC_0(struct nv50_disp_chan *VAR_0, u64 *VAR_1)
{
 *VAR_1 = 0x1000;
 return 0x690000 + ((VAR_0->chid.user - 1) * 0x1000);
}
