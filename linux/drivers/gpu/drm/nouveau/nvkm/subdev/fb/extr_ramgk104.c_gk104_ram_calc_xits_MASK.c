
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nvkm_subdev {TYPE_2__* device; } ;
struct nvkm_ram_data {int freq; } ;
struct TYPE_10__ {int refclk; } ;
struct TYPE_8__ {int max_freq; } ;
struct TYPE_13__ {TYPE_1__ vco1; } ;
struct gk104_ramfuc {int r_mr; TYPE_3__ mempll; TYPE_7__ refpll; } ;
struct TYPE_12__ {int* mr; int freq; int type; TYPE_4__* fb; } ;
struct gk104_ram {int mode; int from; int pnuts; TYPE_5__ base; int P1; int M1; int fN1; int N1; int P2; int M2; int N2; struct gk104_ramfuc fuc; } ;
struct TYPE_11__ {struct nvkm_subdev subdev; } ;
struct TYPE_9__ {int crystal; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int,int ,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_2 (struct gk104_ram*,int) ;
 int FUNC_3 (struct gk104_ram*,int) ;
 int FUNC_4 (struct nvkm_subdev*,TYPE_7__*,int,int *,int *,int *,int *) ;
 int* VAR_2 ;
 int FUNC_5 (struct nvkm_subdev*,char*,int,int) ;
 int FUNC_6 (struct nvkm_subdev*,char*) ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (struct gk104_ramfuc*,int) ;
 int FUNC_10 (struct gk104_ramfuc*,TYPE_4__*) ;
 int FUNC_11 (struct gk104_ramfuc*,int) ;

__attribute__((used)) static int
FUNC_12(struct gk104_ram *VAR_3, struct nvkm_ram_data *VAR_4)
{
 struct gk104_ramfuc *VAR_5 = &VAR_3->fuc;
 struct nvkm_subdev *VAR_6 = &VAR_3->base.fb->subdev;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_10(VAR_5, VAR_3->base.fb);
 if (VAR_9)
  return VAR_9;

 VAR_3->mode = (VAR_4->freq > VAR_5->refpll.vco1.max_freq) ? 2 : 1;
 VAR_3->from = FUNC_11(VAR_5, 0x1373f4) & 0x0000000f;
 VAR_7 = VAR_4->freq;
 if (VAR_3->mode == 2) {
  VAR_9 = FUNC_1(VAR_4->freq, VAR_6->device->crystal,
    &VAR_3->N1, &VAR_3->fN1, &VAR_3->M1, &VAR_3->P1,
    &VAR_3->N2, &VAR_3->M2, &VAR_3->P2);
  VAR_5->mempll.refclk = VAR_9;
  if (VAR_9 <= 0) {
   FUNC_6(VAR_6, "unable to calc plls\n");
   return -VAR_0;
  }
  FUNC_5(VAR_6, "successfully calced PLLs for clock %i kHz"
    " (refclock: %i kHz)\n", VAR_4->freq, VAR_9);
 } else {

  VAR_9 = FUNC_4(VAR_6, &VAR_5->refpll, VAR_7, &VAR_3->N1,
         &VAR_3->fN1, &VAR_3->M1, &VAR_3->P1);
  VAR_5->mempll.refclk = VAR_9;
  if (VAR_9 <= 0) {
   FUNC_6(VAR_6, "unable to calc refpll\n");
   return -VAR_0;
  }
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->r_mr); VAR_8++) {
  if (FUNC_9(VAR_5, VAR_2[VAR_8]))
   VAR_3->base.mr[VAR_8] = FUNC_11(VAR_5, VAR_2[VAR_8]);
 }
 VAR_3->base.freq = VAR_4->freq;

 switch (VAR_3->base.type) {
 case 129:
  VAR_9 = FUNC_8(&VAR_3->base);
  if (VAR_9 == 0)
   VAR_9 = FUNC_3(VAR_3, VAR_4->freq);
  break;
 case 128:
  VAR_9 = FUNC_7(&VAR_3->base, VAR_3->pnuts != 0);
  if (VAR_9 == 0)
   VAR_9 = FUNC_2(VAR_3, VAR_4->freq);
  break;
 default:
  VAR_9 = -VAR_1;
  break;
 }

 return VAR_9;
}
