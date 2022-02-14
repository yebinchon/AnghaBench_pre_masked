
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct hdmi_context {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (struct hdmi_context*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct hdmi_context *VAR_0, u32 VAR_1,
          u8 *VAR_2, int VAR_3)
{
 for (VAR_1 = FUNC_0(VAR_0, VAR_1); VAR_3; --VAR_3, VAR_1 += 4)
  FUNC_1(*VAR_2++, VAR_0->regs + VAR_1);
}
