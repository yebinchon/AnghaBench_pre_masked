
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conf; int options_dyn; int options; } ;
struct cpuinfo_mips {TYPE_1__ guest; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct cpuinfo_mips *VAR_7)
{
 unsigned int VAR_8, VAR_9;

 FUNC_1(VAR_8, VAR_8, VAR_9,
        VAR_3 | VAR_1 | VAR_2 |
        VAR_0);

 if (VAR_8 & VAR_0)
  VAR_7->guest.options |= VAR_4;
 if (VAR_9 & VAR_0)
  VAR_7->guest.options_dyn |= VAR_4;

 if (VAR_8 & VAR_2)
  VAR_7->guest.options |= VAR_6;
 if (VAR_9 & VAR_2)
  VAR_7->guest.options_dyn |= VAR_6;

 if (VAR_8 & VAR_1)
  VAR_7->guest.options |= VAR_5;
 if (VAR_9 & VAR_1)
  VAR_7->guest.options_dyn |= VAR_5;

 if (VAR_8 & VAR_3)
  VAR_7->guest.conf |= FUNC_0(2);
 return VAR_8 & VAR_3;
}
