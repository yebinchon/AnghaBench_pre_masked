
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivch_priv {int* reg_backup; } ;
struct intel_dvo_device {struct ivch_priv* dev_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (struct intel_dvo_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct intel_dvo_device *VAR_2)
{
 struct ivch_priv *VAR_3 = VAR_2->dev_priv;
 int VAR_4;

 FUNC_1("Resetting the IVCH registers\n");

 FUNC_2(VAR_2, VAR_0, 0x0000);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  FUNC_2(VAR_2, VAR_1[VAR_4], VAR_3->reg_backup[VAR_4]);
}
