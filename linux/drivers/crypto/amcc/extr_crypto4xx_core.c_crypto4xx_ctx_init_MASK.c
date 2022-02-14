
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto4xx_ctx {scalar_t__ sa_len; int * sa_out; int * sa_in; int dev; } ;
struct crypto4xx_alg {int dev; } ;



__attribute__((used)) static void FUNC_0(struct crypto4xx_alg *VAR_0,
          struct crypto4xx_ctx *VAR_1)
{
 VAR_1->dev = VAR_0->dev;
 VAR_1->sa_in = ((void*)0);
 VAR_1->sa_out = ((void*)0);
 VAR_1->sa_len = 0;
}
