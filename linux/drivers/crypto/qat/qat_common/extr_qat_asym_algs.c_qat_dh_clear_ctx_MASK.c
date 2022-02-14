
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qat_dh_ctx {int g2; scalar_t__ p_size; int * p; int dma_p; int * xa; int dma_xa; int * g; int dma_g; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, struct qat_dh_ctx *VAR_1)
{
 if (VAR_1->g) {
  FUNC_0(VAR_0, VAR_1->p_size, VAR_1->g, VAR_1->dma_g);
  VAR_1->g = ((void*)0);
 }
 if (VAR_1->xa) {
  FUNC_0(VAR_0, VAR_1->p_size, VAR_1->xa, VAR_1->dma_xa);
  VAR_1->xa = ((void*)0);
 }
 if (VAR_1->p) {
  FUNC_0(VAR_0, VAR_1->p_size, VAR_1->p, VAR_1->dma_p);
  VAR_1->p = ((void*)0);
 }
 VAR_1->p_size = 0;
 VAR_1->g2 = 0;
}
