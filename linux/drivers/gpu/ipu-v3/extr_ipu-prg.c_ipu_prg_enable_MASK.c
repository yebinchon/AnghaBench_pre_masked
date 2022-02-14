
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {struct ipu_prg* prg_priv; } ;
struct ipu_prg {int dev; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct ipu_soc *VAR_0)
{
 struct ipu_prg *VAR_1 = VAR_0->prg_priv;

 if (!VAR_1)
  return 0;

 return FUNC_0(VAR_1->dev);
}
