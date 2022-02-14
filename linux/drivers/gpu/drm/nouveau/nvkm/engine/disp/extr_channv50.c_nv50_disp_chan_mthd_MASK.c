
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int debug; } ;
struct nv50_disp_mthd_list {scalar_t__ addr; } ;
struct nv50_disp_chan_mthd {int addr; char* name; int prev; TYPE_4__* data; } ;
struct TYPE_7__ {int user; } ;
struct nv50_disp_chan {int head; TYPE_3__ chid; struct nv50_disp_chan_mthd* mthd; struct nv50_disp* disp; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct TYPE_6__ {TYPE_1__ engine; } ;
struct nv50_disp {TYPE_2__ base; } ;
typedef int sname_ ;
typedef int cname_ ;
struct TYPE_8__ {int nr; char* name; struct nv50_disp_mthd_list* mthd; } ;


 int VAR_0 ;
 int FUNC_0 (struct nv50_disp*,int,int,int ,struct nv50_disp_mthd_list const*,int) ;
 int FUNC_1 (struct nvkm_subdev*,int,int ,char*,char const*,char const*) ;
 int FUNC_2 (char*,int,char*,char*,int) ;

void
FUNC_3(struct nv50_disp_chan *VAR_1, int VAR_2)
{
 struct nv50_disp *VAR_3 = VAR_1->disp;
 struct nvkm_subdev *VAR_4 = &VAR_3->base.engine.subdev;
 const struct nv50_disp_chan_mthd *VAR_5 = VAR_1->mthd;
 const struct nv50_disp_mthd_list *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_2 > VAR_4->debug)
  return;

 for (VAR_7 = 0; (VAR_6 = VAR_5->data[VAR_7].mthd) != ((void*)0); VAR_7++) {
  u32 VAR_9 = VAR_1->head * VAR_5->addr;
  for (VAR_8 = 0; VAR_8 < VAR_5->data[VAR_7].nr; VAR_8++, VAR_9 += VAR_6->addr) {
   const char *VAR_10 = VAR_5->name;
   const char *VAR_11 = "";
   char VAR_12[16], VAR_13[16];

   if (VAR_5->addr) {
    FUNC_2(VAR_12, sizeof(VAR_12), "%s %d",
      VAR_5->name, VAR_1->chid.user);
    VAR_10 = VAR_12;
   }

   if (VAR_5->data[VAR_7].nr > 1) {
    FUNC_2(VAR_13, sizeof(VAR_13), " - %s %d",
      VAR_5->data[VAR_7].name, VAR_8);
    VAR_11 = VAR_13;
   }

   FUNC_1(VAR_4, VAR_2, VAR_0, "%s%s:\n", VAR_10, VAR_11);
   FUNC_0(VAR_3, VAR_2, VAR_9, VAR_5->prev,
         VAR_6, VAR_8);
  }
 }
}
