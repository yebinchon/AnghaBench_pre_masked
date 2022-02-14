
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct TYPE_4__ {int hblanke; int hblanks; int htotal; int vblanke; int vblanks; int vtotal; } ;
struct nvkm_head {TYPE_1__* func; TYPE_2__ arm; } ;
struct nv04_disp_scanoutpos_v0 {void** time; int vline; int hline; int htotal; int vtotal; int hblanke; int hblanks; int vblanke; int vblanks; int version; } ;
struct TYPE_3__ {int (* rgpos ) (struct nvkm_head*,int *,int *) ;int (* state ) (struct nvkm_head*,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct nvkm_object*,char*,int ) ;
 int FUNC_3 (int,void**,int *,struct nv04_disp_scanoutpos_v0,int ,int ,int) ;
 int FUNC_4 (struct nvkm_head*,TYPE_2__*) ;
 int FUNC_5 (struct nvkm_head*,int *,int *) ;

int
FUNC_6(struct nvkm_object *VAR_2,
     struct nvkm_head *VAR_3, void *VAR_4, u32 VAR_5)
{
 union {
  struct nv04_disp_scanoutpos_v0 v0;
 } *VAR_6 = VAR_4;
 int VAR_7 = -VAR_0;

 FUNC_2(VAR_2, "head scanoutpos size %d\n", VAR_5);
 if (!(VAR_7 = FUNC_3(VAR_7, &VAR_4, &VAR_5, VAR_6->v0, 0, 0, 0))) {
  FUNC_2(VAR_2, "head scanoutpos vers %d\n",
      VAR_6->v0.version);

  VAR_3->func->state(VAR_3, &VAR_3->arm);
  VAR_6->v0.vtotal = VAR_3->arm.vtotal;
  VAR_6->v0.vblanks = VAR_3->arm.vblanks;
  VAR_6->v0.vblanke = VAR_3->arm.vblanke;
  VAR_6->v0.htotal = VAR_3->arm.htotal;
  VAR_6->v0.hblanks = VAR_3->arm.hblanks;
  VAR_6->v0.hblanke = VAR_3->arm.hblanke;





  if (!VAR_6->v0.vtotal || !VAR_6->v0.htotal)
   return -VAR_1;

  VAR_6->v0.time[0] = FUNC_1(FUNC_0());
  VAR_3->func->rgpos(VAR_3, &VAR_6->v0.hline, &VAR_6->v0.vline);
  VAR_6->v0.time[1] = FUNC_1(FUNC_0());
 } else
  return VAR_7;

 return 0;
}
