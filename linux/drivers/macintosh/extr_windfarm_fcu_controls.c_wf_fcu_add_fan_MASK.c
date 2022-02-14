
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wf_fcu_priv {int ref; int fan_list; } ;
struct TYPE_2__ {char const* name; int * ops; int type; struct wf_fcu_fan* priv; } ;
struct wf_fcu_fan {int id; int min; int max; int link; TYPE_1__ ctrl; struct wf_fcu_priv* fcu_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wf_fcu_fan*) ;
 int FUNC_1 (int *) ;
 struct wf_fcu_fan* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct wf_fcu_fan*) ;
 int FUNC_8 (struct wf_fcu_fan*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(struct wf_fcu_priv *VAR_6, const char *VAR_7,
      int VAR_8, int VAR_9)
{
 struct wf_fcu_fan *VAR_10;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return;
 VAR_10->fcu_priv = VAR_6;
 VAR_10->id = VAR_9;
 VAR_10->ctrl.name = VAR_7;
 VAR_10->ctrl.priv = VAR_10;




 if (VAR_8 == VAR_0) {
  if (!FUNC_6(VAR_7, "cpu-pump", FUNC_5("cpu-pump")))
   FUNC_7(VAR_10);
  else
   FUNC_8(VAR_10);
  VAR_10->ctrl.type = VAR_3;
  VAR_10->ctrl.ops = &VAR_5;
 } else {
  VAR_10->min = 10;
  VAR_10->max = 100;
  VAR_10->ctrl.type = VAR_2;
  VAR_10->ctrl.ops = &VAR_4;
 }

 if (FUNC_9(&VAR_10->ctrl)) {
  FUNC_4("wf_fcu: Failed to register fan %s\n", VAR_7);
  FUNC_0(VAR_10);
  return;
 }
 FUNC_3(&VAR_10->link, &VAR_6->fan_list);
 FUNC_1(&VAR_6->ref);
}
