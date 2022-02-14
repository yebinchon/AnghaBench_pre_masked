
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_nvsw {int chan; } ;
struct nv04_sw_chan {int ref; } ;
struct nv04_nvsw_get_ref_v0 {int ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nv04_sw_chan* FUNC_1 (int ) ;
 int FUNC_2 (int,void**,int *,struct nv04_nvsw_get_ref_v0,int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_nvsw *VAR_1, void *VAR_2, u32 VAR_3)
{
 struct nv04_sw_chan *VAR_4 = FUNC_1(VAR_1->chan);
 union {
  struct nv04_nvsw_get_ref_v0 v0;
 } *VAR_5 = VAR_2;
 int VAR_6 = -VAR_0;

 if (!(VAR_6 = FUNC_2(VAR_6, &VAR_2, &VAR_3, VAR_5->v0, 0, 0, 0))) {
  VAR_5->v0.ref = FUNC_0(&VAR_4->ref);
 }

 return VAR_6;
}
