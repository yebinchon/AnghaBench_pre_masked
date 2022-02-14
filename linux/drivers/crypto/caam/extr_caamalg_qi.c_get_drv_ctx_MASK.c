
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct caam_drv_ctx {int op_type; } ;
struct caam_ctx {int lock; struct caam_drv_ctx** drv_ctx; int qidev; int * sh_desc_dec; int * sh_desc_enc; } ;
typedef enum optype { ____Placeholder_optype } optype ;


 int VAR_0 ;
 int FUNC_0 (struct caam_drv_ctx*) ;
 struct caam_drv_ctx* FUNC_1 (int ,int*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct caam_drv_ctx *FUNC_6(struct caam_ctx *VAR_1,
     enum optype VAR_2)
{





 struct caam_drv_ctx *VAR_3 = VAR_1->drv_ctx[VAR_2];
 u32 *VAR_4;

 if (FUNC_5(!VAR_3)) {
  FUNC_3(&VAR_1->lock);


  VAR_3 = VAR_1->drv_ctx[VAR_2];
  if (!VAR_3) {
   int VAR_5;

   if (VAR_2 == VAR_0)
    VAR_4 = VAR_1->sh_desc_enc;
   else
    VAR_4 = VAR_1->sh_desc_dec;

   VAR_5 = FUNC_2();
   VAR_3 = FUNC_1(VAR_1->qidev, &VAR_5, VAR_4);
   if (!FUNC_0(VAR_3))
    VAR_3->op_type = VAR_2;

   VAR_1->drv_ctx[VAR_2] = VAR_3;
  }

  FUNC_4(&VAR_1->lock);
 }

 return VAR_3;
}
