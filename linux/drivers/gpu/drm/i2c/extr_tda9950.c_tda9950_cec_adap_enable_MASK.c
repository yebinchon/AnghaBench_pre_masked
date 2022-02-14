
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9950_priv {int dummy; } ;
struct cec_adapter {struct tda9950_priv* priv; } ;


 int FUNC_0 (struct tda9950_priv*) ;
 int FUNC_1 (struct tda9950_priv*) ;

__attribute__((used)) static int FUNC_2(struct cec_adapter *VAR_0, bool VAR_1)
{
 struct tda9950_priv *VAR_2 = VAR_0->priv;

 if (!VAR_1) {
  FUNC_1(VAR_2);
  return 0;
 } else {
  return FUNC_0(VAR_2);
 }
}
