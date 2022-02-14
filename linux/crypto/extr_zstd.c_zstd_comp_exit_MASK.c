
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zstd_ctx {int * cctx; int * cwksp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct zstd_ctx *VAR_0)
{
 FUNC_0(VAR_0->cwksp);
 VAR_0->cwksp = ((void*)0);
 VAR_0->cctx = ((void*)0);
}
