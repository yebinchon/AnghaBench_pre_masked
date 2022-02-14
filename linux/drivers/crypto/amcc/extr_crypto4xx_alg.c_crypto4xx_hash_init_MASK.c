
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int digest_len; int load_hash_state; } ;
struct TYPE_6__ {TYPE_2__ bf; } ;
struct dynamic_sa_ctl {TYPE_3__ sa_command_0; } ;
struct crypto4xx_ctx {struct dynamic_sa_ctl* sa_in; } ;
struct TYPE_4__ {int tfm; } ;
struct ahash_request {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct crypto4xx_ctx* FUNC_2 (int ) ;

int FUNC_3(struct ahash_request *VAR_1)
{
 struct crypto4xx_ctx *VAR_2 = FUNC_2(VAR_1->base.tfm);
 int VAR_3;
 struct dynamic_sa_ctl *VAR_4;

 VAR_4 = VAR_2->sa_in;
 VAR_3 = FUNC_1(
   FUNC_0(VAR_1->base.tfm));
 VAR_4->sa_command_0.bf.digest_len = VAR_3 >> 2;
 VAR_4->sa_command_0.bf.load_hash_state = VAR_0;

 return 0;
}
