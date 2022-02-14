
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mce_bank {scalar_t__ init; scalar_t__ ctl; } ;
struct mca_config {scalar_t__ bootlog; scalar_t__ monarch_timeout; int panic_timeout; } ;
struct cpuinfo_x86 {scalar_t__ x86_vendor; int x86; int x86_model; } ;
struct TYPE_2__ {int overflow_recov; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,unsigned long*) ;
 struct mca_config VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct mce_bank* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct cpuinfo_x86 *VAR_11)
{
 struct mce_bank *VAR_12 = FUNC_2(VAR_6);
 struct mca_config *VAR_13 = &VAR_5;

 if (VAR_11->x86_vendor == VAR_4) {
  FUNC_1("unknown CPU type - not enabling MCE support\n");
  return -VAR_0;
 }


 if (VAR_11->x86_vendor == VAR_2) {
  if (VAR_11->x86 == 15 && FUNC_3(VAR_8) > 4) {





   FUNC_0(10, (unsigned long *)&VAR_12[4].ctl);
  }
  if (VAR_11->x86 < 0x11 && VAR_13->bootlog < 0) {




   VAR_13->bootlog = 0;
  }




  if (VAR_11->x86 == 6 && FUNC_3(VAR_8) > 0)
   VAR_12[0].ctl = 0;





  if (VAR_11->x86 == 0x15 && VAR_11->x86_model <= 0xf)
   VAR_7.overflow_recov = 1;

 }

 if (VAR_11->x86_vendor == VAR_3) {
  if (VAR_11->x86 == 6 && VAR_11->x86_model < 0x1A && FUNC_3(VAR_8) > 0)
   VAR_12[0].init = 0;





  if ((VAR_11->x86 > 6 || (VAR_11->x86 == 6 && VAR_11->x86_model >= 0xe)) &&
   VAR_13->monarch_timeout < 0)
   VAR_13->monarch_timeout = VAR_1;





  if (VAR_11->x86 == 6 && VAR_11->x86_model <= 13 && VAR_13->bootlog < 0)
   VAR_13->bootlog = 0;

  if (VAR_11->x86 == 6 && VAR_11->x86_model == 45)
   VAR_9 = VAR_10;
 }
 if (VAR_13->monarch_timeout < 0)
  VAR_13->monarch_timeout = 0;
 if (VAR_13->bootlog != 0)
  VAR_13->panic_timeout = 30;

 return 0;
}
