
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct biosregs {int ax; int edx; int ecx; int ebx; int eax; } ;
struct TYPE_4__ {int perf_level; int event; int command; int signature; } ;
struct TYPE_6__ {TYPE_1__ ist_info; } ;
struct TYPE_5__ {int level; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct biosregs VAR_2, VAR_3;



 if (VAR_1.level < 6)
  return;

 FUNC_0(&VAR_2);
 VAR_2.ax = 0xe980;
 VAR_2.edx = 0x47534943;
 FUNC_1(0x15, &VAR_2, &VAR_3);

 VAR_0.ist_info.signature = VAR_3.eax;
 VAR_0.ist_info.command = VAR_3.ebx;
 VAR_0.ist_info.event = VAR_3.ecx;
 VAR_0.ist_info.perf_level = VAR_3.edx;
}
