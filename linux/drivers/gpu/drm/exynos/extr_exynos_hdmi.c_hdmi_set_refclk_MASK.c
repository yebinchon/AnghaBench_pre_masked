
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_context {int sysreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hdmi_context *VAR_2, bool VAR_3)
{
 if (!VAR_2->sysreg)
  return;

 FUNC_0(VAR_2->sysreg, VAR_0,
      VAR_1, VAR_3 ? ~0 : 0);
}
