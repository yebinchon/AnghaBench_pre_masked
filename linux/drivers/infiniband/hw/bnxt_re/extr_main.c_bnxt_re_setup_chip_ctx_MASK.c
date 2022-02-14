
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* cctx; } ;
struct TYPE_4__ {TYPE_2__* res; } ;
struct TYPE_6__ {int chip_num; } ;
struct bnxt_re_dev {TYPE_2__ qplib_res; TYPE_1__ rcfw; TYPE_3__ chip_ctx; struct bnxt_en_dev* en_dev; } ;
struct bnxt_en_dev {int net; } ;
struct bnxt {int chip_num; } ;


 struct bnxt* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct bnxt_re_dev *VAR_0)
{
 struct bnxt_en_dev *VAR_1;
 struct bnxt *VAR_2;

 VAR_1 = VAR_0->en_dev;
 VAR_2 = FUNC_0(VAR_1->net);

 VAR_0->chip_ctx.chip_num = VAR_2->chip_num;


 VAR_0->qplib_res.cctx = &VAR_0->chip_ctx;
 VAR_0->rcfw.res = &VAR_0->qplib_res;

 return 0;
}
