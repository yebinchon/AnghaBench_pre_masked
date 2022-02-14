
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct biosregs {int ah; int ax; int al; } ;
struct TYPE_2__ {int kbd_status; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct biosregs VAR_1, VAR_2;
 FUNC_0(&VAR_1);

 VAR_1.ah = 0x02;
 FUNC_1(0x16, &VAR_1, &VAR_2);
 VAR_0.kbd_status = VAR_2.al;

 VAR_1.ax = 0x0305;
 FUNC_1(0x16, &VAR_1, ((void*)0));
}
