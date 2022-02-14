
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pd_uinfo {int state; int async_req; } ;
struct crypto4xx_device {int dummy; } ;
struct crypto4xx_ctx {int dummy; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {TYPE_1__ base; int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ahash_request* FUNC_0 (int ) ;
 int FUNC_1 (struct ahash_request*,int ) ;
 int FUNC_2 (int ,struct pd_uinfo*,struct crypto4xx_ctx*) ;
 int FUNC_3 (struct crypto4xx_device*,struct pd_uinfo*) ;
 struct crypto4xx_ctx* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct crypto4xx_device *VAR_2,
    struct pd_uinfo *VAR_3)
{
 struct crypto4xx_ctx *VAR_4;
 struct ahash_request *VAR_5;

 VAR_5 = FUNC_0(VAR_3->async_req);
 VAR_4 = FUNC_4(VAR_5->base.tfm);

 FUNC_2(VAR_5->result, VAR_3,
         FUNC_4(VAR_5->base.tfm));
 FUNC_3(VAR_2, VAR_3);

 if (VAR_3->state & VAR_1)
  FUNC_1(VAR_5, -VAR_0);
 FUNC_1(VAR_5, 0);
}
