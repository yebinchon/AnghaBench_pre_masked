
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_grctx {int ctxvals_pos; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_grctx*,int ,int ,int ) ;
 int FUNC_1 (struct nvkm_grctx*,int) ;
 int FUNC_2 (struct nvkm_grctx*,int ) ;
 int FUNC_3 (struct nvkm_grctx*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_grctx *VAR_3)
{
 int VAR_4 = FUNC_4(VAR_3->device) ? 0x0084 : 0x0684;

 FUNC_3 (VAR_3, 0x300000);
 FUNC_1 (VAR_3, VAR_4 - 4);
 FUNC_0 (VAR_3, VAR_1, VAR_0, VAR_2);
 FUNC_1 (VAR_3, VAR_4);
 FUNC_2(VAR_3, VAR_2);
 FUNC_3 (VAR_3, 0x800001);

 VAR_3->ctxvals_pos += VAR_4;
}
