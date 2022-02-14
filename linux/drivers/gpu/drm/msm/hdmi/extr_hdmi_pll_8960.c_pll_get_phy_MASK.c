
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_pll_8960 {int pdev; } ;
struct hdmi_phy {int dummy; } ;


 struct hdmi_phy* FUNC_0 (int ) ;

__attribute__((used)) static inline struct hdmi_phy *FUNC_1(struct hdmi_pll_8960 *VAR_0)
{
 return FUNC_0(VAR_0->pdev);
}
