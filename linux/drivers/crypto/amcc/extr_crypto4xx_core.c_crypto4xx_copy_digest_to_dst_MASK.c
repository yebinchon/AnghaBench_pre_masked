
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pd_uinfo {TYPE_3__* sr_va; } ;
struct TYPE_4__ {scalar_t__ hash_alg; } ;
struct TYPE_5__ {TYPE_1__ bf; } ;
struct dynamic_sa_ctl {TYPE_2__ sa_command_0; } ;
struct crypto4xx_ctx {scalar_t__ sa_in; } ;
struct TYPE_6__ {int save_digest; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_2,
     struct pd_uinfo *VAR_3,
     struct crypto4xx_ctx *VAR_4)
{
 struct dynamic_sa_ctl *VAR_5 = (struct dynamic_sa_ctl *) VAR_4->sa_in;

 if (VAR_5->sa_command_0.bf.hash_alg == VAR_0) {
  FUNC_0(VAR_2, VAR_3->sr_va->save_digest,
         VAR_1);
 }
}
