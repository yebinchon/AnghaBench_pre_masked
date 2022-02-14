
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int regs; } ;
struct sun4i_backend {TYPE_1__ engine; } ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;

void FUNC_3(struct sun4i_backend *VAR_1,
    int VAR_2, bool VAR_3)
{
 u32 VAR_4;

 FUNC_0("%sabling layer %d\n", VAR_3 ? "En" : "Dis",
    VAR_2);

 if (VAR_3)
  VAR_4 = FUNC_1(VAR_2);
 else
  VAR_4 = 0;

 FUNC_2(VAR_1->engine.regs, VAR_0,
      FUNC_1(VAR_2), VAR_4);
}
