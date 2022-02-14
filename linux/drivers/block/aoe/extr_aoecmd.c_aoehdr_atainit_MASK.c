
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aoetgt {int addr; TYPE_1__* ifp; } ;
struct aoedev {int aoeminor; int aoemajor; } ;
struct aoe_hdr {int tag; int cmd; int minor; int major; int verfl; int type; int dst; int src; } ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_3__ {TYPE_2__* nd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct aoedev*) ;

__attribute__((used)) static u32
FUNC_5(struct aoedev *VAR_3, struct aoetgt *VAR_4, struct aoe_hdr *VAR_5)
{
 u32 VAR_6 = FUNC_4(VAR_3);

 FUNC_3(VAR_5->src, VAR_4->ifp->nd->dev_addr, sizeof VAR_5->src);
 FUNC_3(VAR_5->dst, VAR_4->addr, sizeof VAR_5->dst);
 VAR_5->type = FUNC_0(VAR_2);
 VAR_5->verfl = VAR_1;
 VAR_5->major = FUNC_1(VAR_3->aoemajor);
 VAR_5->minor = VAR_3->aoeminor;
 VAR_5->cmd = VAR_0;
 VAR_5->tag = FUNC_2(VAR_6);

 return VAR_6;
}
