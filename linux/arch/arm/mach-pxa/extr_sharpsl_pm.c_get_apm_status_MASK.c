
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ charge_mode; TYPE_1__* machinfo; } ;
struct TYPE_3__ {int status_high_acin; int status_low_acin; int status_high_noac; int status_low_noac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int FUNC_0(int VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_4.charge_mode == VAR_3) {
  VAR_7 = VAR_4.machinfo->status_high_acin;
  VAR_6 = VAR_4.machinfo->status_low_acin;
 } else {
  VAR_7 = VAR_4.machinfo->status_high_noac;
  VAR_6 = VAR_4.machinfo->status_low_noac;
 }

 if (VAR_5 >= VAR_7)
  return VAR_1;
 if (VAR_5 >= VAR_6)
  return VAR_2;
 return VAR_0;
}
