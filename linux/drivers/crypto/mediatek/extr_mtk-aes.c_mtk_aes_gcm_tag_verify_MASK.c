
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mtk_cryp {TYPE_2__** ring; } ;
struct mtk_aes_rec {size_t id; } ;
struct TYPE_4__ {TYPE_1__* res_prev; } ;
struct TYPE_3__ {int ct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtk_cryp*,struct mtk_aes_rec*,int ) ;

__attribute__((used)) static int FUNC_1(struct mtk_cryp *VAR_2,
      struct mtk_aes_rec *VAR_3)
{
 u32 VAR_4 = VAR_2->ring[VAR_3->id]->res_prev->ct;

 return FUNC_0(VAR_2, VAR_3, (VAR_4 & VAR_0) ?
    -VAR_1 : 0);
}
