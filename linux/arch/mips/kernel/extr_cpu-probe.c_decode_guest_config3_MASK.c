
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conf; int ases_dyn; int ases; int options; int options_dyn; } ;
struct cpuinfo_mips {TYPE_1__ guest; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct cpuinfo_mips *VAR_15)
{
 unsigned int VAR_16, VAR_17;

 FUNC_1(VAR_16, VAR_16, VAR_17,
        VAR_8 | VAR_4 | VAR_7 |
        VAR_3);

 if (VAR_16 & VAR_3)
  VAR_15->guest.options |= VAR_11;
 if (VAR_17 & VAR_3)
  VAR_15->guest.options_dyn |= VAR_11;

 if (VAR_16 & VAR_5)
  VAR_15->guest.options |= VAR_12;

 if (VAR_16 & VAR_7)
  VAR_15->guest.options |= VAR_14;

 if (VAR_16 & VAR_6)
  VAR_15->guest.options |= VAR_13;

 if (VAR_16 & VAR_1)
  VAR_15->guest.options |= VAR_9;
 if (VAR_16 & VAR_2)
  VAR_15->guest.options |= VAR_10;

 if (VAR_16 & VAR_4)
  VAR_15->guest.ases |= VAR_0;
 if (VAR_17 & VAR_4)
  VAR_15->guest.ases_dyn |= VAR_0;

 if (VAR_16 & VAR_8)
  VAR_15->guest.conf |= FUNC_0(4);
 return VAR_16 & VAR_8;
}
