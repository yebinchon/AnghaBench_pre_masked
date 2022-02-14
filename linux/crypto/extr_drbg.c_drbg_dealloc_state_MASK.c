
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbg_state {int fips_primed; int * prev; int * core; int * d_ops; scalar_t__ reseed_ctr; int * scratchpadbuf; int * C; int * Cbuf; int * V; int * Vbuf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct drbg_state *VAR_1)
{
 if (!VAR_1)
  return;
 FUNC_1(VAR_1->Vbuf);
 VAR_1->Vbuf = ((void*)0);
 VAR_1->V = ((void*)0);
 FUNC_1(VAR_1->Cbuf);
 VAR_1->Cbuf = ((void*)0);
 VAR_1->C = ((void*)0);
 FUNC_1(VAR_1->scratchpadbuf);
 VAR_1->scratchpadbuf = ((void*)0);
 VAR_1->reseed_ctr = 0;
 VAR_1->d_ops = ((void*)0);
 VAR_1->core = ((void*)0);
 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_1->prev);
  VAR_1->prev = ((void*)0);
  VAR_1->fips_primed = 0;
 }
}
