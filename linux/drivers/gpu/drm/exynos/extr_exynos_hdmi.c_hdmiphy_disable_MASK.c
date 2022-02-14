
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_context {int powered; int dev; int regul_bulk; int pmureg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hdmi_context*,int ,int ,int ) ;
 int FUNC_2 (struct hdmi_context*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(struct hdmi_context *VAR_7)
{
 if (!VAR_7->powered)
  return;

 FUNC_1(VAR_7, VAR_0, 0, VAR_1);

 FUNC_1(VAR_7, VAR_2, ~0, VAR_3);

 FUNC_2(VAR_7, 0);

 FUNC_4(VAR_7->pmureg, VAR_4,
   VAR_5, 0);

 FUNC_5(FUNC_0(VAR_6), VAR_7->regul_bulk);

 FUNC_3(VAR_7->dev);

 VAR_7->powered = 0;
}
