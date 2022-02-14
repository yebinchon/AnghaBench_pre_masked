
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_14__ {int nr; } ;
struct nvkm_ior {TYPE_8__* func; TYPE_5__ dp; TYPE_4__* disp; } ;
struct TYPE_15__ {int hashm; int hasht; } ;
struct TYPE_18__ {TYPE_6__ info; struct nvkm_ior* ior; } ;
struct nvkm_dp {int aux; TYPE_9__ outp; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_dpout {int dummy; } ;
struct nvbios_dpcfg {int tx_pu; int pe; int dc; int pc; } ;
struct lt_state {int* stat; int pc2stat; int* conf; int* pc2conf; struct nvkm_dp* dp; } ;
struct TYPE_16__ {int (* drive ) (struct nvkm_ior*,int,int ,int ,int ,int ) ;} ;
struct TYPE_17__ {TYPE_7__ dp; } ;
struct TYPE_11__ {TYPE_1__* device; } ;
struct TYPE_12__ {TYPE_2__ subdev; } ;
struct TYPE_13__ {TYPE_3__ engine; } ;
struct TYPE_10__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_9__*,char*,int,int,int) ;
 int FUNC_2 (struct nvkm_bios*,int ,int,int,int,int*,int*,int*,int*,struct nvbios_dpcfg*) ;
 int FUNC_3 (struct nvkm_bios*,int ,int ,int*,int*,int*,int*,struct nvbios_dpout*) ;
 int FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (struct nvkm_ior*,int,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct lt_state *VAR_3, bool VAR_4)
{
 struct nvkm_dp *VAR_5 = VAR_3->dp;
 struct nvkm_ior *VAR_6 = VAR_5->outp.ior;
 struct nvkm_bios *VAR_7 = VAR_6->disp->engine.subdev.device->bios;
 struct nvbios_dpout VAR_8;
 struct nvbios_dpcfg VAR_9;
 u8 VAR_10, VAR_11, VAR_12, VAR_13;
 u32 VAR_14;
 int VAR_15, VAR_16;

 for (VAR_16 = 0; VAR_16 < VAR_6->dp.nr; VAR_16++) {
  u8 VAR_17 = (VAR_3->stat[4 + (VAR_16 >> 1)] >> ((VAR_16 & 1) * 4)) & 0xf;
  u8 VAR_18 = (VAR_3->pc2stat >> (VAR_16 * 2)) & 0x3;
  u8 VAR_19 = (VAR_17 & 0x0c) >> 2;
  u8 VAR_20 = (VAR_17 & 0x03) >> 0;
  u8 VAR_21 = 3 - VAR_19;
  u8 VAR_22 = 3;
  u8 VAR_23 = 3;

  if (VAR_18 >= VAR_23)
   VAR_18 = VAR_23 | VAR_2;
  if (VAR_19 >= VAR_22) {
   VAR_19 = VAR_22 | VAR_0;
   VAR_20 = VAR_21 = 3 - (VAR_19 & 3);
  } else
  if (VAR_20 >= VAR_21) {
   VAR_20 = VAR_21 | VAR_0;
  }

  VAR_3->conf[VAR_16] = (VAR_19 << 3) | VAR_20;
  VAR_3->pc2conf[VAR_16 >> 1] |= VAR_18 << ((VAR_16 & 1) * 4);

  FUNC_1(&VAR_5->outp, "config lane %d %02x %02x",
      VAR_16, VAR_3->conf[VAR_16], VAR_18);

  VAR_14 = FUNC_3(VAR_7, VAR_5->outp.info.hasht,
      VAR_5->outp.info.hashm,
       &VAR_10, &VAR_11, &VAR_12, &VAR_13, &VAR_8);
  if (!VAR_14)
   continue;

  VAR_14 = FUNC_2(VAR_7, VAR_14, VAR_18 & 3, VAR_20 & 3,
       VAR_19 & 3, &VAR_10, &VAR_11, &VAR_12, &VAR_13,
       &VAR_9);
  if (!VAR_14)
   continue;

  VAR_6->func->dp.drive(VAR_6, VAR_16, VAR_9.pc, VAR_9.dc,
         VAR_9.pe, VAR_9.tx_pu);
 }

 VAR_15 = FUNC_4(VAR_5->aux, FUNC_0(0), VAR_3->conf, 4);
 if (VAR_15)
  return VAR_15;

 if (VAR_4) {
  VAR_15 = FUNC_4(VAR_5->aux, VAR_1, VAR_3->pc2conf, 2);
  if (VAR_15)
   return VAR_15;
 }

 return 0;
}
