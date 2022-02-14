
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {int name; struct wf_ad7417_priv* priv; } ;
struct wf_ad7417_priv {int ref; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct wf_sensor *VAR_1)
{
 struct wf_ad7417_priv *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_1->name);
 FUNC_1(&VAR_2->ref, VAR_0);
}
