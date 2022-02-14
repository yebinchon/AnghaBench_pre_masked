
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_dvo_connector {struct sti_dvo* dvo; } ;
struct sti_dvo {scalar_t__ panel; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct sti_dvo_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0)
{
 struct sti_dvo_connector *VAR_1
  = FUNC_1(VAR_0);
 struct sti_dvo *VAR_2 = VAR_1->dvo;

 if (VAR_2->panel)
  return FUNC_0(VAR_2->panel);

 return 0;
}
