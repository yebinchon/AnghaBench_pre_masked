
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_context {int regs; } ;


 int FUNC_0 (struct hdmi_context*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static inline void FUNC_3(struct hdmi_context *VAR_0,
     u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_1 = FUNC_0(VAR_0, VAR_1);
 VAR_4 = FUNC_1(VAR_0->regs + VAR_1);
 VAR_2 = (VAR_2 & VAR_3) | (VAR_4 & ~VAR_3);
 FUNC_2(VAR_2, VAR_0->regs + VAR_1);
}
