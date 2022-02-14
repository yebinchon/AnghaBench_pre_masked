
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fregs_state {int cwd; int swd; int twd; int fos; } ;



__attribute__((used)) static inline void FUNC_0(struct fregs_state *VAR_0)
{
 VAR_0->cwd = 0xffff037fu;
 VAR_0->swd = 0xffff0000u;
 VAR_0->twd = 0xffffffffu;
 VAR_0->fos = 0xffff0000u;
}
