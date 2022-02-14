
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfr_walktree {int pfrw_flags; } ;
struct pfr_kcounters {int ** pfrkc_bytes; int ** pfrkc_packets; int pfrkc_tzero; } ;
struct pfr_kentry {struct pfr_kcounters pfrke_counters; } ;
struct TYPE_2__ {int pfra_fback; } ;
struct pfr_astats {void*** pfras_bytes; void*** pfras_packets; TYPE_1__ pfras_a; int pfras_tzero; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void***,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct pfr_kentry const*) ;

__attribute__((used)) static void
FUNC_3(struct pfr_astats *VAR_4, const struct pfr_kentry *VAR_5,
    const struct pfr_walktree *VAR_6)
{
 int VAR_7, VAR_8;
 const struct pfr_kcounters *VAR_9 = &VAR_5->pfrke_counters;

 FUNC_2(&VAR_4->pfras_a, VAR_5);
 VAR_4->pfras_tzero = VAR_9->pfrkc_tzero;

 if (! (VAR_6->pfrw_flags & VAR_3)) {
  FUNC_0(VAR_4->pfras_packets, sizeof(VAR_4->pfras_packets));
  FUNC_0(VAR_4->pfras_bytes, sizeof(VAR_4->pfras_bytes));
  VAR_4->pfras_a.pfra_fback = VAR_1;
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7 ++) {
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8 ++) {
   VAR_4->pfras_packets[VAR_7][VAR_8] =
       FUNC_1(VAR_9->pfrkc_packets[VAR_7][VAR_8]);
   VAR_4->pfras_bytes[VAR_7][VAR_8] =
       FUNC_1(VAR_9->pfrkc_bytes[VAR_7][VAR_8]);
  }
 }
}
