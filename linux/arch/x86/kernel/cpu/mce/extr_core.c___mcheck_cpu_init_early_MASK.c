
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpuinfo_x86 {scalar_t__ x86_vendor; } ;
struct TYPE_4__ {int overflow_recov; int succor; int smca; } ;
struct TYPE_3__ {int misc; int addr; int status; int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct cpuinfo_x86*,int ) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_1(struct cpuinfo_x86 *VAR_11)
{
 if (VAR_11->x86_vendor == VAR_3 || VAR_11->x86_vendor == VAR_4) {
  VAR_5.overflow_recov = !!FUNC_0(VAR_11, VAR_0);
  VAR_5.succor = !!FUNC_0(VAR_11, VAR_2);
  VAR_5.smca = !!FUNC_0(VAR_11, VAR_1);

  if (VAR_5.smca) {
   VAR_6.ctl = VAR_8;
   VAR_6.status = VAR_10;
   VAR_6.addr = VAR_7;
   VAR_6.misc = VAR_9;
  }
 }
}
