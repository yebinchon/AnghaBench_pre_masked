
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_grctx {int ctxvals_pos; int ctxvals_base; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_grctx*,int) ;
 int FUNC_1 (struct nvkm_grctx*,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct nvkm_grctx *VAR_1, int VAR_2)
{
 VAR_1->ctxvals_pos = VAR_2;
 VAR_1->ctxvals_base = VAR_1->ctxvals_pos;

 FUNC_0(VAR_1, VAR_1->ctxvals_pos);
 FUNC_1(VAR_1, VAR_0);
}
