
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_bios {int dummy; } ;
struct nvbios_vpstate_header {int version; int hlen; int boost_id; int tdp_id; scalar_t__ offset; void* base_id; void* ecount; void* scount; void* slen; void* elen; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*) ;

int
FUNC_2(struct nvkm_bios *VAR_2, struct nvbios_vpstate_header *VAR_3)
{
 if (!VAR_3)
  return -VAR_0;

 VAR_3->offset = FUNC_1(VAR_2);
 if (!VAR_3->offset)
  return -VAR_1;

 VAR_3->version = FUNC_0(VAR_2, VAR_3->offset);
 switch (VAR_3->version) {
 case 0x10:
  VAR_3->hlen = FUNC_0(VAR_2, VAR_3->offset + 0x1);
  VAR_3->elen = FUNC_0(VAR_2, VAR_3->offset + 0x2);
  VAR_3->slen = FUNC_0(VAR_2, VAR_3->offset + 0x3);
  VAR_3->scount = FUNC_0(VAR_2, VAR_3->offset + 0x4);
  VAR_3->ecount = FUNC_0(VAR_2, VAR_3->offset + 0x5);

  VAR_3->base_id = FUNC_0(VAR_2, VAR_3->offset + 0x0f);
  if (VAR_3->hlen > 0x10)
   VAR_3->boost_id = FUNC_0(VAR_2, VAR_3->offset + 0x10);
  else
   VAR_3->boost_id = 0xff;
  if (VAR_3->hlen > 0x11)
   VAR_3->tdp_id = FUNC_0(VAR_2, VAR_3->offset + 0x11);
  else
   VAR_3->tdp_id = 0xff;
  return 0;
 default:
  return -VAR_0;
 }
}
