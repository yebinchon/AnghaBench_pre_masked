
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_context {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (struct hdmi_context*,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct hdmi_context *VAR_0, u32 VAR_1)
{
 return FUNC_1(VAR_0->regs + FUNC_0(VAR_0, VAR_1));
}
