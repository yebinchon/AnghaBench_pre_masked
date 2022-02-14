
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_queue {TYPE_1__* fs; } ;
struct dn_fs {int* par; int index; int n_flows; int cur; int first_flow; int next_flow; int y; int base_y; int next_y; } ;
struct cfg_s {int flows; int flowsets; char const* fs_config; int wsum; int max_y; TYPE_1__* fs; } ;
struct TYPE_2__ {struct dn_fs fs; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,...) ;
 struct dn_queue* FUNC_2 (struct cfg_s*,int) ;
 int FUNC_3 (char*,char**,char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static void
FUNC_6(struct cfg_s *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 int VAR_8, VAR_9;
 struct dn_fs *VAR_10 = ((void*)0);
 int VAR_11 = (VAR_1 == ((void*)0));

 FUNC_1(3, "--- pass %d flows %d flowsets %d", VAR_11, VAR_0->flows, VAR_0->flowsets);
 if (VAR_1 != ((void*)0)) {
  if (VAR_0->fs_config)
   FUNC_0("warning, overwriting fs %s with %s",
    VAR_0->fs_config, VAR_1);
  VAR_0->fs_config = VAR_1;
 }
 VAR_2 = VAR_0->fs_config ? FUNC_4(VAR_0->fs_config) : ((void*)0);
 if (VAR_2 == ((void*)0)) {
  if (VAR_11 == 0)
   FUNC_0("no fsconfig");
  return;
 }
 for (VAR_4 = VAR_2; (VAR_3 = FUNC_5(&VAR_4, ","));) {
  char *VAR_12 = ((void*)0);
  int VAR_13, VAR_14, VAR_15, VAR_16;
  int VAR_17, VAR_18, VAR_19, VAR_20;
  int VAR_21;

  VAR_13 = FUNC_3(FUNC_5(&VAR_3, ":"), &VAR_12, "weight");
  if (VAR_13 <= 0)
   VAR_13 = 1;
  VAR_14 = VAR_12 ? FUNC_3(VAR_12+1, &VAR_12, "weight_max") : VAR_13;
  VAR_15 = VAR_12 ? FUNC_3(VAR_12+1, &VAR_12, "w_steps") : (VAR_14 == VAR_13 ?1:2);
  VAR_17 = FUNC_3(FUNC_5(&VAR_3, ":"), &VAR_12, "len");
  if (VAR_17 <= 0)
   VAR_17 = 1000;
  VAR_18 = VAR_12 ? FUNC_3(VAR_12+1, &VAR_12, "len_max") : VAR_17;
  VAR_19 = VAR_12 ? FUNC_3(VAR_12+1, &VAR_12, "l_steps") : (VAR_18 == VAR_17 ? 1 : 2);
  VAR_21 = FUNC_3(FUNC_5(&VAR_3, ":"), ((void*)0), "flows");
  if (VAR_21 == 0)
   VAR_21 = 1;
  FUNC_1(4, "weight %d..%d (%d) len %d..%d (%d) flows %d",
   VAR_13, VAR_14, VAR_15, VAR_17, VAR_18, VAR_19, VAR_21);
  if (VAR_13 == 0 || VAR_14 < VAR_13 || VAR_17 == 0 || VAR_18 < VAR_17 ||
    VAR_21 == 0) {
   FUNC_1(4,"wrong parameters %s", VAR_2);
   return;
  }
  VAR_5 += VAR_21 * VAR_15 * VAR_19;
  for (VAR_8 = 0; VAR_8 < VAR_15; VAR_8++) {
   VAR_16 = VAR_13 + ((VAR_14 - VAR_13)* VAR_8)/(VAR_15 == 1 ? 1 : (VAR_15-1));
   for (VAR_9 = 0; VAR_9 < VAR_19; VAR_9++, VAR_6++) {
    struct dn_fs *VAR_22 = &VAR_0->fs[VAR_6].fs;
    int VAR_23;

    VAR_20 = VAR_17 + ((VAR_18 - VAR_17)* VAR_9)/(VAR_19 == 1 ? 1 : (VAR_19-1));
    VAR_23 = (VAR_16*2048)/VAR_20;
    FUNC_1(3, "----- fs %4d weight %4d lmax %4d X %4d flows %d",
     VAR_6, VAR_16, VAR_20, VAR_23, VAR_21);
    if (VAR_11 == 0)
     continue;
    if (VAR_0->fs == ((void*)0) || VAR_0->flowsets <= VAR_6) {
     FUNC_0("error in number of flowsets");
     return;
    }
    VAR_7 += VAR_16 * VAR_21;
    VAR_22->par[0] = VAR_16;
    VAR_22->par[1] = VAR_20;
    VAR_22->index = VAR_6;
    VAR_22->n_flows = VAR_21;
    VAR_22->cur = VAR_22->first_flow = VAR_10==((void*)0) ? 0 : VAR_10->next_flow;
    VAR_22->next_flow = VAR_22->first_flow + VAR_22->n_flows;
    VAR_22->y = VAR_23 * VAR_21;
    VAR_22->base_y = (VAR_10 == ((void*)0)) ? 0 : VAR_10->next_y;
    VAR_22->next_y = VAR_22->base_y + VAR_22->y;
    VAR_10 = VAR_22;
   }
  }
 }
 VAR_0->flows = VAR_5;
 VAR_0->flowsets = VAR_6;
 VAR_0->wsum = VAR_7;
 if (VAR_11 == 0)
  return;


 FUNC_1(1,"%d flows on %d flowsets", VAR_0->flows, VAR_0->flowsets);




 for (VAR_8=0; VAR_8 < VAR_0->flowsets; VAR_8++) {
  struct dn_fs *VAR_24 = &VAR_0->fs[VAR_8].fs;
  FUNC_1(1, "fs %3d w %5d l %4d flow %5d .. %5d y %6d .. %6d",
   VAR_8, VAR_24->par[0], VAR_24->par[1],
   VAR_24->first_flow, VAR_24->next_flow,
   VAR_24->base_y, VAR_24->next_y);
  for (VAR_9 = VAR_24->first_flow; VAR_9 < VAR_24->next_flow; VAR_9++) {
   struct dn_queue *VAR_25 = FUNC_2(VAR_0, VAR_9);
   VAR_25->fs = &VAR_0->fs[VAR_8];
  }
 }
}
