
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sahara_ctx {scalar_t__ keylen; int fallback; } ;
struct TYPE_2__ {int flags; } ;
struct ablkcipher_request {int info; int nbytes; int dst; int src; TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct sahara_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ablkcipher_request*,int ) ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct ablkcipher_request *VAR_3)
{
 struct sahara_ctx *VAR_4 = FUNC_1(
  FUNC_2(VAR_3));
 int VAR_5;

 if (FUNC_9(VAR_4->keylen != VAR_0)) {
  FUNC_0(VAR_2, VAR_4->fallback);

  FUNC_7(VAR_2, VAR_4->fallback);
  FUNC_5(VAR_2, VAR_3->base.flags,
           ((void*)0), ((void*)0));
  FUNC_6(VAR_2, VAR_3->src, VAR_3->dst,
        VAR_3->nbytes, VAR_3->info);
  VAR_5 = FUNC_3(VAR_2);
  FUNC_8(VAR_2);
  return VAR_5;
 }

 return FUNC_4(VAR_3, VAR_1);
}
