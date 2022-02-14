
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_ic_priv {int irt_use_count; int ipu; } ;
struct ipu_ic {struct ipu_ic_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ipu_ic *VAR_1)
{
 struct ipu_ic_priv *VAR_2 = VAR_1->priv;

 if (!VAR_2->irt_use_count)
  FUNC_0(VAR_2->ipu, VAR_0);

 VAR_2->irt_use_count++;
}
