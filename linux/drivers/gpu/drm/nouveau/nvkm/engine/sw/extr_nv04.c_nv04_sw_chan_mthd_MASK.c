
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_sw_chan {int dummy; } ;
struct nv04_sw_chan {int ref; } ;


 int FUNC_0 (int *,int) ;
 struct nv04_sw_chan* FUNC_1 (struct nvkm_sw_chan*) ;

__attribute__((used)) static bool
FUNC_2(struct nvkm_sw_chan *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nv04_sw_chan *VAR_4 = FUNC_1(VAR_0);

 switch (VAR_2) {
 case 0x0150:
  FUNC_0(&VAR_4->ref, VAR_3);
  return 1;
 default:
  break;
 }

 return 0;
}
