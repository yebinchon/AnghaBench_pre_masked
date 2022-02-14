
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {int wbox_wq; } ;
struct spu {struct spu_context* ctx; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct spu *VAR_0)
{
 struct spu_context *VAR_1 = VAR_0->ctx;

 if (VAR_1)
  FUNC_0(&VAR_1->wbox_wq);
}
