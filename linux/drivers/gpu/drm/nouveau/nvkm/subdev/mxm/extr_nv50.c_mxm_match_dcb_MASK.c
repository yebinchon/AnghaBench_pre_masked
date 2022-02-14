
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct nvkm_mxm {TYPE_2__ subdev; } ;
struct nvkm_bios {int dummy; } ;
struct TYPE_6__ {int outp_type; int conn_type; int dig_conn; } ;
struct context {int* outp; TYPE_3__ desc; } ;
struct TYPE_4__ {struct nvkm_bios* bios; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_bios*,int ) ;
 scalar_t__ FUNC_1 (struct nvkm_mxm*,int,int ,struct context*) ;
 int FUNC_2 (struct nvkm_mxm*,int*,TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_3(struct nvkm_mxm *VAR_1, u8 *VAR_2, void *VAR_3)
{
 struct nvkm_bios *VAR_4 = VAR_1->subdev.device->bios;
 struct context *VAR_5 = VAR_3;
 u64 VAR_6 = *(u64 *)VAR_2;

 FUNC_2(VAR_1, VAR_2, &VAR_5->desc);


 if ((VAR_5->outp[0] & 0x0000000f) != VAR_5->desc.outp_type)
  return 1;





 if ((VAR_6 & 0x00000000000000f0) >= 0x20) {

  u8 VAR_7 = FUNC_0(VAR_4, VAR_5->desc.dig_conn);
  if ((VAR_5->outp[0] & 0x0f000000) != (VAR_7 & 0x0f) << 24)
   return 1;


  VAR_7 = (VAR_7 & 0x30) >> 4;
  if ((VAR_7 & ((VAR_5->outp[1] & 0x00000030) >> 4)) != VAR_7)
   return 1;
 }






 VAR_2[0] &= ~0xf0;
 if (VAR_5->desc.outp_type == 6 && VAR_5->desc.conn_type == 6 &&
     FUNC_1(VAR_1, 0x01, VAR_0, VAR_5)) {
  VAR_2[0] |= 0x20;
 } else {
  VAR_2[0] |= 0xf0;
 }

 return 0;
}
