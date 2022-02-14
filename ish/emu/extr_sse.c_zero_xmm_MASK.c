
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union xmm_reg {scalar_t__* qw; } ;



__attribute__((used)) static inline void FUNC_0(union xmm_reg *VAR_0) {
    VAR_0->qw[0] = 0;
    VAR_0->qw[1] = 0;
}
