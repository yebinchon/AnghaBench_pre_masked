
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct combine_diff_state {long flags; unsigned long nmask; int lno; int num_parent; int n; struct sline* sline; } ;
typedef struct combine_diff_state xpparam_t ;
typedef int xpp ;
typedef int xecfg ;
typedef struct combine_diff_state xdemitconf_t ;
struct userdiff_driver {int dummy; } ;
struct TYPE_6__ {scalar_t__ len; int * lost_tail; scalar_t__ lost_head; } ;
struct sline {unsigned int* p_lno; unsigned long flag; struct lline* lost; TYPE_1__ plost; int lenlost; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct lline {unsigned long parent_map; struct lline* next; } ;
typedef int state ;
struct TYPE_7__ {unsigned long size; int ptr; } ;
typedef TYPE_2__ mmfile_t ;


 struct lline* FUNC_0 (struct lline*,int *,scalar_t__,scalar_t__,int,long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct repository*,struct object_id const*,unsigned int,unsigned long*,struct userdiff_driver*,char const*) ;
 int FUNC_4 (struct combine_diff_state*,int ,int) ;
 int FUNC_5 (struct object_id const*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_2__*,int ,int ,struct combine_diff_state*,struct combine_diff_state*,struct combine_diff_state*) ;

__attribute__((used)) static void FUNC_7(struct repository *VAR_2,
    const struct object_id *VAR_3, unsigned int VAR_4,
    mmfile_t *VAR_5,
    struct sline *VAR_6, unsigned int VAR_7, int VAR_8,
    int VAR_9, int VAR_10,
    struct userdiff_driver *VAR_11,
    const char *VAR_12, long VAR_13)
{
 unsigned int VAR_14, VAR_15;
 unsigned long VAR_16 = (1UL << VAR_8);
 xpparam_t VAR_17;
 xdemitconf_t VAR_18;
 mmfile_t VAR_19;
 struct combine_diff_state VAR_20;
 unsigned long VAR_21;

 if (VAR_10)
  return;

 VAR_19.ptr = FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_21, VAR_11, VAR_12);
 VAR_19.size = VAR_21;
 FUNC_4(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.flags = VAR_13;
 FUNC_4(&VAR_18, 0, sizeof(VAR_18));
 FUNC_4(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.nmask = VAR_16;
 VAR_20.sline = VAR_6;
 VAR_20.lno = 1;
 VAR_20.num_parent = VAR_9;
 VAR_20.n = VAR_8;

 if (FUNC_6(&VAR_19, VAR_5, VAR_0,
     VAR_1, &VAR_20, &VAR_17, &VAR_18))
  FUNC_1("unable to generate combined diff for %s",
      FUNC_5(VAR_3));
 FUNC_2(VAR_19.ptr);
 for (VAR_15 = 0, VAR_14 = 1; VAR_15 <= VAR_7; VAR_15++) {
  struct lline *VAR_22;
  VAR_6[VAR_15].p_lno[VAR_8] = VAR_14;


  if (VAR_6[VAR_15].plost.lost_head) {
   struct sline *VAR_23 = &VAR_6[VAR_15];
   VAR_23->lost = FUNC_0(VAR_23->lost, &VAR_23->lenlost,
        VAR_23->plost.lost_head,
        VAR_23->plost.len, VAR_8, VAR_13);
   VAR_23->plost.lost_head = VAR_23->plost.lost_tail = ((void*)0);
   VAR_23->plost.len = 0;
  }


  VAR_22 = VAR_6[VAR_15].lost;
  while (VAR_22) {
   if (VAR_22->parent_map & VAR_16)
    VAR_14++;
   VAR_22 = VAR_22->next;
  }
  if (VAR_15 < VAR_7 && !(VAR_6[VAR_15].flag & VAR_16))
   VAR_14++;
 }
 VAR_6[VAR_15].p_lno[VAR_8] = VAR_14;
}
