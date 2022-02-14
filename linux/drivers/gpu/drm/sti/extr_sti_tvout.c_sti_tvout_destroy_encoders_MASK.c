
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_tvout {int * dvo; int * hda; int * hdmi; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sti_tvout *VAR_0)
{
 if (VAR_0->hdmi)
  FUNC_0(VAR_0->hdmi);
 VAR_0->hdmi = ((void*)0);

 if (VAR_0->hda)
  FUNC_0(VAR_0->hda);
 VAR_0->hda = ((void*)0);

 if (VAR_0->dvo)
  FUNC_0(VAR_0->dvo);
 VAR_0->dvo = ((void*)0);
}
