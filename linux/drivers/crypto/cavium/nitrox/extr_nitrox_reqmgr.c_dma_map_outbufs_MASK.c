
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_crypto_request {int * dst; } ;
struct TYPE_2__ {int sgmap_cnt; int * sg; } ;
struct nitrox_softreq {TYPE_1__ out; int ndev; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nitrox_softreq*,TYPE_1__*,int) ;
 int FUNC_2 (struct device*,int *,int ,int ) ;
 int FUNC_3 (struct device*,int *,int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct nitrox_softreq *VAR_2,
      struct se_crypto_request *VAR_3)
{
 struct device *VAR_4 = FUNC_0(VAR_2->ndev);
 int VAR_5, VAR_6 = 0;

 VAR_5 = FUNC_2(VAR_4, VAR_3->dst, FUNC_4(VAR_3->dst),
      VAR_0);
 if (!VAR_5)
  return -VAR_1;

 VAR_2->out.sg = VAR_3->dst;
 VAR_2->out.sgmap_cnt = VAR_5;
 VAR_6 = FUNC_1(VAR_2, &VAR_2->out, VAR_2->out.sgmap_cnt);
 if (VAR_6)
  goto outcomp_map_err;

 return 0;

outcomp_map_err:
 FUNC_3(VAR_4, VAR_3->dst, VAR_5, VAR_0);
 VAR_2->out.sgmap_cnt = 0;
 VAR_2->out.sg = ((void*)0);
 return VAR_6;
}
