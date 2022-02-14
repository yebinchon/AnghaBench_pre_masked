
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nv20_gr_chan {int chid; int inst; struct nv20_gr* gr; } ;
struct nv20_gr {int ctxtab; } ;


 struct nv20_gr_chan* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;

int
FUNC_5(struct nvkm_object *VAR_0)
{
 struct nv20_gr_chan *VAR_1 = FUNC_0(VAR_0);
 struct nv20_gr *VAR_2 = VAR_1->gr;
 u32 VAR_3 = FUNC_3(VAR_1->inst);

 FUNC_2(VAR_2->ctxtab);
 FUNC_4(VAR_2->ctxtab, VAR_1->chid * 4, VAR_3 >> 4);
 FUNC_1(VAR_2->ctxtab);
 return 0;
}
