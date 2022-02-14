
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct caam_rng_ctx {int * bufs; int sh_desc; int sh_desc_dma; struct device* jrdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (struct device*,int *) ;

__attribute__((used)) static inline void FUNC_3(struct caam_rng_ctx *VAR_1)
{
 struct device *VAR_2 = VAR_1->jrdev;

 if (VAR_1->sh_desc_dma)
  FUNC_1(VAR_2, VAR_1->sh_desc_dma,
     FUNC_0(VAR_1->sh_desc), VAR_0);
 FUNC_2(VAR_2, &VAR_1->bufs[0]);
 FUNC_2(VAR_2, &VAR_1->bufs[1]);
}
