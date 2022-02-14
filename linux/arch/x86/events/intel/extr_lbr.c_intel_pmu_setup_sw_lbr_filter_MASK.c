
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int reg; } ;
struct TYPE_6__ {TYPE_2__ branch_reg; } ;
struct TYPE_4__ {int branch_sample_type; } ;
struct perf_event {TYPE_3__ hw; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_33)
{
 u64 VAR_34 = VAR_33->attr.branch_sample_type;
 int VAR_35 = 0;

 if (VAR_34 & VAR_15)
  VAR_35 |= VAR_31;

 if (VAR_34 & VAR_12)
  VAR_35 |= VAR_26;



 if (VAR_34 & VAR_3)
  VAR_35 |= VAR_17;

 if (VAR_34 & VAR_4)
  VAR_35 |= VAR_18;

 if (VAR_34 & VAR_5)
  VAR_35 |= VAR_28 | VAR_24 | VAR_29;

 if (VAR_34 & VAR_9)
  VAR_35 |= VAR_21;

 if (VAR_34 & VAR_2)
  VAR_35 |= VAR_16;

 if (VAR_34 & VAR_11)
  VAR_35 |= VAR_23;

 if (VAR_34 & VAR_13)
  VAR_35 |= VAR_27;

 if (VAR_34 & VAR_8)
  VAR_35 |= VAR_25;

 if (VAR_34 & VAR_7) {
  if (!FUNC_0())
   return -VAR_1;
  if (VAR_35 & ~(VAR_31 | VAR_26))
   return -VAR_0;
  VAR_35 |= VAR_19 | VAR_21 | VAR_28 |
   VAR_20;
 }

 if (VAR_34 & VAR_10)
  VAR_35 |= VAR_22;

 if (VAR_34 & VAR_6)
  VAR_35 |= VAR_19 | VAR_32;

 if (VAR_34 & VAR_14)
  VAR_35 |= VAR_30;





 VAR_33->hw.branch_reg.reg = VAR_35;
 return 0;
}
