
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct rmid_read {int evtid; int val; scalar_t__ first; TYPE_1__* d; } ;
struct mbm_state {int prev_bw_msr; int prev_msr; int chunks; } ;
struct TYPE_2__ {struct mbm_state* mbm_local; struct mbm_state* mbm_total; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct mbm_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(u32 VAR_3, struct rmid_read *VAR_4)
{
 struct mbm_state *VAR_5;
 u64 VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_4->evtid);
 if (VAR_7 & (VAR_1 | VAR_2)) {
  VAR_4->val = VAR_7;
  return -VAR_0;
 }
 switch (VAR_4->evtid) {
 case 128:
  VAR_4->val += VAR_7;
  return 0;
 case 129:
  VAR_5 = &VAR_4->d->mbm_total[VAR_3];
  break;
 case 130:
  VAR_5 = &VAR_4->d->mbm_local[VAR_3];
  break;
 default:




  return -VAR_0;
 }

 if (VAR_4->first) {
  FUNC_2(VAR_5, 0, sizeof(struct mbm_state));
  VAR_5->prev_bw_msr = VAR_5->prev_msr = VAR_7;
  return 0;
 }

 VAR_6 = FUNC_1(VAR_5->prev_msr, VAR_7);
 VAR_5->chunks += VAR_6;
 VAR_5->prev_msr = VAR_7;

 VAR_4->val += VAR_5->chunks;
 return 0;
}
