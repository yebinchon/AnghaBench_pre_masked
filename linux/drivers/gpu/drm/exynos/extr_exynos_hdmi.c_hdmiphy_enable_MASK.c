
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_context {int powered; int pmureg; int dev; int regul_bulk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct hdmi_context*,int ,int ,int ) ;
 int FUNC_3 (struct hdmi_context*,int) ;
 int FUNC_4 (struct hdmi_context*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(struct hdmi_context *VAR_5)
{
 if (VAR_5->powered)
  return;

 FUNC_5(VAR_5->dev);

 if (FUNC_7(FUNC_0(VAR_4), VAR_5->regul_bulk))
  FUNC_1(VAR_5->dev,
      "failed to enable regulator bulk\n");

 FUNC_6(VAR_5->pmureg, VAR_2,
   VAR_3, 1);

 FUNC_3(VAR_5, 1);

 FUNC_2(VAR_5, VAR_0, 0, VAR_1);

 FUNC_4(VAR_5);

 VAR_5->powered = 1;
}
