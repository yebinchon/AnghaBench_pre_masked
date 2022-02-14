
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvkm_mxm {int subdev; } ;
struct nvkm_bios {int* data; } ;
struct TYPE_2__ {int outp_type; int conn_type; int dig_conn; int ddc_port; } ;
struct context {int* outp; TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_bios*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct nvkm_bios*,int ) ;
 scalar_t__ FUNC_2 (struct nvkm_mxm*,int,int ,struct context*) ;
 int FUNC_3 (struct nvkm_mxm*) ;
 int FUNC_4 (struct nvkm_bios*,int,int*,int*) ;
 int FUNC_5 (int *,char*,int,int,int) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_bios *VAR_5, void *VAR_6, int VAR_7, u16 VAR_8)
{
 struct nvkm_mxm *VAR_9 = VAR_6;
 struct context VAR_10 = { .outp = (u32 *)(VAR_5->data + VAR_8) };
 u8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u8 *VAR_16;




 if (FUNC_2(VAR_9, 0x01, VAR_4, &VAR_10)) {
  FUNC_5(&VAR_9->subdev, "disable %d: %08x %08x\n",
      VAR_7, VAR_10.outp[0], VAR_10.outp[1]);
  VAR_10.outp[0] |= 0x0000000f;
  return 0;
 }





 VAR_12 = FUNC_0(VAR_5, VAR_10.desc.ddc_port);
 if ((VAR_10.outp[0] & 0x0000000f) != VAR_3)
  VAR_12 = (VAR_12 & 0x0f) << 4;
 else
  VAR_12 = (VAR_12 & 0xf0);

 if (VAR_12 != 0xf0) {
  VAR_10.outp[0] &= ~0x000000f0;
  VAR_10.outp[0] |= VAR_12;
 }


 switch (VAR_10.desc.outp_type) {
 case 0x00:
 case 0x01:
  break;
 default:
  VAR_13 = FUNC_1(VAR_5, VAR_10.desc.dig_conn) & 0x30;
  VAR_10.outp[1] &= ~0x00000030;
  VAR_10.outp[1] |= VAR_13;
  break;
 }
 VAR_16 = VAR_5->data;
 VAR_16 += FUNC_4(VAR_5, (VAR_10.outp[0] & 0x0000f000) >> 12, &VAR_14, &VAR_15);
 VAR_11 = VAR_16[0];
 switch (VAR_10.desc.conn_type) {
 case 0x01:
  VAR_10.outp[1] |= 0x00000004;

  break;
 case 0x02:
  VAR_11 = VAR_1;
  break;
 case 0x03:
  VAR_11 = VAR_0;
  break;
 case 0x0e:
  VAR_10.outp[1] |= 0x00010000;

 case 0x07:
  VAR_10.outp[1] |= 0x00000004;
  VAR_11 = VAR_2;
  break;
 default:
  break;
 }

 if (FUNC_3(VAR_9) >= 0x0300)
  VAR_16[0] = VAR_11;

 return 0;
}
