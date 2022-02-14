
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct voltagedomain {int (* write ) (scalar_t__,int ) ;} ;
struct omap3_vc_timings {scalar_t__ voltsetup2; scalar_t__ voltsetup1; } ;
struct TYPE_2__ {scalar_t__ voltctrl; scalar_t__ voltsetup1; scalar_t__ voltsetup2; struct omap3_vc_timings* timings; struct voltagedomain* vd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 TYPE_1__ VAR_7 ;

void FUNC_3(int VAR_8)
{
 struct voltagedomain *VAR_9 = VAR_7.vd;
 struct omap3_vc_timings *VAR_10 = VAR_7.timings;
 u32 VAR_11, VAR_12, VAR_13;

 VAR_11 = VAR_7.voltctrl;
 VAR_12 = VAR_7.voltsetup1;
 VAR_13 = VAR_7.voltsetup2;

 switch (VAR_8) {
 case 129:
  VAR_11 &= ~(VAR_1 |
         VAR_2);
  VAR_11 |= VAR_0;
  if (VAR_11 & VAR_3)
   VAR_13 = VAR_10->voltsetup2;
  else
   VAR_12 = VAR_10->voltsetup1;
  break;
 case 128:
 default:
  VAR_10++;
  VAR_11 &= ~(VAR_0 |
         VAR_2);
  VAR_11 |= VAR_1;
  VAR_12 = VAR_10->voltsetup1;
  break;
 }

 if (VAR_11 != VAR_7.voltctrl) {
  VAR_9->write(VAR_11, VAR_4);
  VAR_7.voltctrl = VAR_11;
 }
 if (VAR_12 != VAR_7.voltsetup1) {
  VAR_9->write(VAR_10->voltsetup1,
     VAR_5);
  VAR_7.voltsetup1 = VAR_12;
 }
 if (VAR_13 != VAR_7.voltsetup2) {
  VAR_9->write(VAR_10->voltsetup2,
     VAR_6);
  VAR_7.voltsetup2 = VAR_13;
 }
}
