
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto4xx_ctx {scalar_t__ sa_len; int * sa_out; int * sa_in; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct crypto4xx_ctx *VAR_0)
{
 FUNC_0(VAR_0->sa_in);
 VAR_0->sa_in = ((void*)0);
 FUNC_0(VAR_0->sa_out);
 VAR_0->sa_out = ((void*)0);
 VAR_0->sa_len = 0;
}
