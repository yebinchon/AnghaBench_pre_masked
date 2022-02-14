
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct pd_uinfo {TYPE_1__* async_req; } ;
struct crypto4xx_device {struct pd_uinfo* pdr_uinfo; struct ce_pd* pdr; } ;
struct ce_pd {int dummy; } ;
struct TYPE_2__ {int tfm; } ;





 int FUNC_0 (struct crypto4xx_device*,struct pd_uinfo*,struct ce_pd*) ;
 int FUNC_1 (struct crypto4xx_device*,struct pd_uinfo*) ;
 int FUNC_2 (struct crypto4xx_device*,struct pd_uinfo*,struct ce_pd*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct crypto4xx_device *VAR_0, u32 VAR_1)
{
 struct ce_pd *VAR_2 = &VAR_0->pdr[VAR_1];
 struct pd_uinfo *VAR_3 = &VAR_0->pdr_uinfo[VAR_1];

 switch (FUNC_3(VAR_3->async_req->tfm)) {
 case 128:
  FUNC_2(VAR_0, VAR_3, VAR_2);
  break;
 case 130:
  FUNC_0(VAR_0, VAR_3, VAR_2);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_3);
  break;
 }
}
