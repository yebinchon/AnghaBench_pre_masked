
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_aes_reqctx {int mode; } ;
struct mtk_aes_rec {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct mtk_aes_rec *VAR_1,
        const struct mtk_aes_reqctx *VAR_2)
{

 VAR_1->flags = (VAR_1->flags & VAR_0) | VAR_2->mode;
}
