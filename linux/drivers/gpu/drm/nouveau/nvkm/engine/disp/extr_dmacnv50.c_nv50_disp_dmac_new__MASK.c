
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_oclass {struct nvkm_client* client; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_client {int dummy; } ;
struct nv50_disp_chan_mthd {int dummy; } ;
struct nv50_disp_chan_func {int dummy; } ;
struct nv50_disp_chan {int push; int memory; } ;
struct nv50_disp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;



 int FUNC_1 (int ) ;
 struct nv50_disp_chan* FUNC_2 (struct nvkm_object*) ;
 int FUNC_3 (struct nv50_disp_chan_func const*,struct nv50_disp_chan_mthd const*,struct nv50_disp*,int,int,int,struct nvkm_oclass const*,struct nvkm_object**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nvkm_client*,int ) ;

int
FUNC_8(const struct nv50_disp_chan_func *VAR_1,
      const struct nv50_disp_chan_mthd *VAR_2,
      struct nv50_disp *VAR_3, int VAR_4, int VAR_5, u64 VAR_6,
      const struct nvkm_oclass *VAR_7,
      struct nvkm_object **VAR_8)
{
 struct nvkm_client *VAR_9 = VAR_7->client;
 struct nv50_disp_chan *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_4, VAR_5, VAR_7,
      VAR_8);
 VAR_10 = FUNC_2(*VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_10->memory = FUNC_7(VAR_9, VAR_6);
 if (FUNC_0(VAR_10->memory))
  return FUNC_1(VAR_10->memory);

 if (FUNC_5(VAR_10->memory) < 0x1000)
  return -VAR_0;

 switch (FUNC_6(VAR_10->memory)) {
 case 128: VAR_10->push = 0x00000001; break;
 case 129: VAR_10->push = 0x00000002; break;
 case 130: VAR_10->push = 0x00000003; break;
 default:
  return -VAR_0;
 }

 VAR_10->push |= FUNC_4(VAR_10->memory) >> 8;
 return 0;
}
