
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sgmap_cnt; int * sg; int sgcomp; int sgcomp_len; int sgcomp_dma; } ;
struct TYPE_3__ {int sgmap_cnt; int * sg; int sgcomp; int sgcomp_len; int sgcomp_dma; } ;
struct nitrox_softreq {TYPE_2__ out; TYPE_1__ in; struct nitrox_device* ndev; } ;
struct nitrox_device {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (struct nitrox_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int *,int ,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nitrox_softreq *VAR_2)
{
 struct nitrox_device *VAR_3 = VAR_2->ndev;
 struct device *VAR_4 = FUNC_0(VAR_3);


 FUNC_1(VAR_4, VAR_2->in.sg, VAR_2->in.sgmap_cnt, VAR_0);
 FUNC_2(VAR_4, VAR_2->in.sgcomp_dma, VAR_2->in.sgcomp_len,
    VAR_1);
 FUNC_3(VAR_2->in.sgcomp);
 VAR_2->in.sg = ((void*)0);
 VAR_2->in.sgmap_cnt = 0;

 FUNC_1(VAR_4, VAR_2->out.sg, VAR_2->out.sgmap_cnt,
       VAR_0);
 FUNC_2(VAR_4, VAR_2->out.sgcomp_dma, VAR_2->out.sgcomp_len,
    VAR_1);
 FUNC_3(VAR_2->out.sgcomp);
 VAR_2->out.sg = ((void*)0);
 VAR_2->out.sgmap_cnt = 0;
}
