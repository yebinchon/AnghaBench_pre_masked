
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wf_sensor_ops {int dummy; } ;
struct wf_ad7417_priv {int ref; TYPE_1__* sensors; int cpu; } ;
struct TYPE_2__ {struct wf_sensor_ops const* ops; struct wf_ad7417_priv* priv; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct wf_ad7417_priv *VAR_1,
     int VAR_2, const char *VAR_3,
     const struct wf_sensor_ops *VAR_4)
{
 VAR_1->sensors[VAR_2].name = FUNC_0(VAR_0, "%s-%d", VAR_3, VAR_1->cpu);
 VAR_1->sensors[VAR_2].priv = VAR_1;
 VAR_1->sensors[VAR_2].ops = VAR_4;
 if (!FUNC_2(&VAR_1->sensors[VAR_2]))
  FUNC_1(&VAR_1->ref);
}
