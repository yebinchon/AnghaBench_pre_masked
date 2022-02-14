
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mb_stat_R; int spu_runcntl_RW; } ;
struct spu_state {int* spu_chnlcnt_RW; TYPE_1__ prob; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct spu_state *VAR_1)
{
 VAR_1->spu_chnlcnt_RW[9] = 1;
 VAR_1->spu_chnlcnt_RW[21] = 16;
 VAR_1->spu_chnlcnt_RW[23] = 1;
 VAR_1->spu_chnlcnt_RW[28] = 1;
 VAR_1->spu_chnlcnt_RW[30] = 1;
 VAR_1->prob.spu_runcntl_RW = VAR_0;
 VAR_1->prob.mb_stat_R = 0x000400;
}
