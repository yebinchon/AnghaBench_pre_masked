
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct rmid_read {int evtid; TYPE_1__* d; } ;
struct rdt_resource {int mon_scale; } ;
struct mbm_state {int prev_bw_msr; int chunks_bw; int chunks; int delta_comp; int prev_bw; int delta_bw; } ;
struct TYPE_2__ {struct mbm_state* mbm_local; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 struct rdt_resource* VAR_3 ;

__attribute__((used)) static void FUNC_3(u32 VAR_4, struct rmid_read *VAR_5)
{
 struct rdt_resource *VAR_6 = &VAR_3[VAR_0];
 struct mbm_state *VAR_7 = &VAR_5->d->mbm_local[VAR_4];
 u64 VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_0(VAR_4, VAR_5->evtid);
 if (VAR_8 & (VAR_1 | VAR_2))
  return;

 VAR_10 = FUNC_2(VAR_7->prev_bw_msr, VAR_8);
 VAR_7->chunks_bw += VAR_10;
 VAR_7->chunks = VAR_7->chunks_bw;
 VAR_9 = (VAR_10 * VAR_6->mon_scale) >> 20;

 if (VAR_7->delta_comp)
  VAR_7->delta_bw = FUNC_1(VAR_9 - VAR_7->prev_bw);
 VAR_7->delta_comp = 0;
 VAR_7->prev_bw = VAR_9;
 VAR_7->prev_bw_msr = VAR_8;
}
