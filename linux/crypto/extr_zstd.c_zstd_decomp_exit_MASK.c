
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zstd_ctx {int * dctx; int * dwksp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct zstd_ctx *VAR_0)
{
 FUNC_0(VAR_0->dwksp);
 VAR_0->dwksp = ((void*)0);
 VAR_0->dctx = ((void*)0);
}
