
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct biosregs {int ah; int flags; int bx; int cx; int al; int eflags; int ax; int di; int hsi; int si; int dx; int ebx; } ;
struct TYPE_3__ {int cseg_16; int flags; int version; int dseg_len; int cseg_16_len; int cseg_len; int dseg; int offset; int cseg; } ;
struct TYPE_4__ {TYPE_1__ apm_bios_info; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

int FUNC_2(void)
{
 struct biosregs VAR_2, VAR_3;


 FUNC_0(&VAR_2);
 VAR_2.ah = 0x53;
 FUNC_1(0x15, &VAR_2, &VAR_3);

 if (VAR_3.flags & VAR_0)
  return -1;

 if (VAR_3.bx != 0x504d)
  return -1;

 if (!(VAR_3.cx & 0x02))
  return -1;


 VAR_2.al = 0x04;
 FUNC_1(0x15, &VAR_2, ((void*)0));


 VAR_2.al = 0x03;
 FUNC_1(0x15, &VAR_2, &VAR_3);

 VAR_1.apm_bios_info.cseg = VAR_3.ax;
 VAR_1.apm_bios_info.offset = VAR_3.ebx;
 VAR_1.apm_bios_info.cseg_16 = VAR_3.cx;
 VAR_1.apm_bios_info.dseg = VAR_3.dx;
 VAR_1.apm_bios_info.cseg_len = VAR_3.si;
 VAR_1.apm_bios_info.cseg_16_len = VAR_3.hsi;
 VAR_1.apm_bios_info.dseg_len = VAR_3.di;

 if (VAR_3.flags & VAR_0)
  return -1;




 VAR_2.al = 0x00;
 FUNC_1(0x15, &VAR_2, &VAR_3);

 if ((VAR_3.eflags & VAR_0) || VAR_3.bx != 0x504d) {

  VAR_2.al = 0x04;
  FUNC_1(0x15, &VAR_2, ((void*)0));
  return -1;
 }

 VAR_1.apm_bios_info.version = VAR_3.ax;
 VAR_1.apm_bios_info.flags = VAR_3.cx;
 return 0;
}
