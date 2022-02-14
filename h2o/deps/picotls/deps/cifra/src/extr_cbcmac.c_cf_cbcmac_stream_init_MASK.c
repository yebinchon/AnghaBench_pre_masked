
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int cf_prp ;
struct TYPE_5__ {void* prpctx; int const* prp; } ;
typedef TYPE_1__ cf_cbcmac_stream ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(cf_cbcmac_stream *VAR_0, const cf_prp *VAR_1, void *VAR_2)
{
  FUNC_1(VAR_0, 0, sizeof *VAR_0);
  VAR_0->prp = VAR_1;
  VAR_0->prpctx = VAR_2;
  FUNC_0(VAR_0);
}
