
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct caam_drv_private {int era; } ;
struct TYPE_8__ {int algtype; } ;
struct TYPE_7__ {int algtype; } ;
struct caam_ctx {int ** drv_ctx; int lock; struct device* qidev; TYPE_2__ adata; TYPE_1__ cdata; TYPE_3__* jrdev; int key_dma; int dir; int key; } ;
struct caam_alg_entry {int class1_alg_type; int class2_alg_type; } ;
struct TYPE_9__ {struct device* parent; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct device*,char*) ;
 struct caam_drv_private* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int ,int,int ) ;
 scalar_t__ FUNC_7 (struct device*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct caam_ctx *VAR_7, struct caam_alg_entry *VAR_8,
       bool VAR_9)
{
 struct caam_drv_private *VAR_10;
 struct device *VAR_11;





 VAR_7->jrdev = FUNC_2();
 if (FUNC_0(VAR_7->jrdev)) {
  FUNC_8("Job Ring Device allocation for transform failed\n");
  return FUNC_1(VAR_7->jrdev);
 }

 VAR_11 = VAR_7->jrdev->parent;
 VAR_10 = FUNC_5(VAR_11);
 if (VAR_10->era >= 6 && VAR_9)
  VAR_7->dir = VAR_1;
 else
  VAR_7->dir = VAR_2;

 VAR_7->key_dma = FUNC_6(VAR_11, VAR_7->key, sizeof(VAR_7->key),
          VAR_7->dir);
 if (FUNC_7(VAR_11, VAR_7->key_dma)) {
  FUNC_4(VAR_11, "unable to map key\n");
  FUNC_3(VAR_7->jrdev);
  return -VAR_4;
 }


 VAR_7->cdata.algtype = VAR_5 | VAR_8->class1_alg_type;
 VAR_7->adata.algtype = VAR_6 | VAR_8->class2_alg_type;

 VAR_7->qidev = VAR_11;

 FUNC_9(&VAR_7->lock);
 VAR_7->drv_ctx[VAR_3] = ((void*)0);
 VAR_7->drv_ctx[VAR_0] = ((void*)0);

 return 0;
}
