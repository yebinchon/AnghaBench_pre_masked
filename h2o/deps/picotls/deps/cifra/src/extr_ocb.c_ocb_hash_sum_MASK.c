
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int prpctx; TYPE_1__* prp; } ;
typedef TYPE_2__ ocb ;
typedef int cf_gf128 ;
struct TYPE_4__ {int (* encrypt ) (int ,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int const,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *,int const*,int *,int) ;

__attribute__((used)) static void FUNC_5(ocb *VAR_1, const uint8_t *VAR_2,
                         cf_gf128 VAR_3, const cf_gf128 VAR_4)
{
  uint8_t VAR_5[VAR_0];
  FUNC_2(VAR_4, VAR_5);

  uint8_t VAR_6[VAR_0];
  FUNC_4(VAR_6, VAR_2, VAR_5, sizeof VAR_6);
  VAR_1->prp->encrypt(VAR_1->prpctx, VAR_6, VAR_6);

  cf_gf128 VAR_7;
  FUNC_1(VAR_6, VAR_7);
  FUNC_0(VAR_3, VAR_7, VAR_3);
}
