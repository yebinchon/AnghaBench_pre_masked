
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivch_priv {int dummy; } ;
struct intel_dvo_device {struct ivch_priv* dev_priv; } ;


 int FUNC_0 (struct ivch_priv*) ;

__attribute__((used)) static void FUNC_1(struct intel_dvo_device *VAR_0)
{
 struct ivch_priv *VAR_1 = VAR_0->dev_priv;

 if (VAR_1) {
  FUNC_0(VAR_1);
  VAR_0->dev_priv = ((void*)0);
 }
}
