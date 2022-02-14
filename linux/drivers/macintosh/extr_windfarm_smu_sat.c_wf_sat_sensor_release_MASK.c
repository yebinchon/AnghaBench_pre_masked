
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {int dummy; } ;
struct wf_sat_sensor {struct wf_sat* sat; } ;
struct wf_sat {int ref; } ;


 int FUNC_0 (struct wf_sat_sensor*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 struct wf_sat_sensor* FUNC_2 (struct wf_sensor*) ;

__attribute__((used)) static void FUNC_3(struct wf_sensor *VAR_1)
{
 struct wf_sat_sensor *VAR_2 = FUNC_2(VAR_1);
 struct wf_sat *VAR_3 = VAR_2->sat;

 FUNC_0(VAR_2);
 FUNC_1(&VAR_3->ref, VAR_0);
}
