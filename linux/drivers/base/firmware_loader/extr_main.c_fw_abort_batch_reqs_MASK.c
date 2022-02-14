
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_priv {int dummy; } ;
struct firmware {struct fw_priv* priv; } ;


 int FUNC_0 (struct fw_priv*) ;
 int FUNC_1 (struct fw_priv*) ;

__attribute__((used)) static void FUNC_2(struct firmware *VAR_0)
{
 struct fw_priv *VAR_1;


 if (!VAR_0 || !VAR_0->priv)
  return;

 VAR_1 = VAR_0->priv;
 if (!FUNC_1(VAR_1))
  FUNC_0(VAR_1);
}
