
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int kscratch_mask; int conf; } ;
struct cpuinfo_mips {TYPE_1__ guest; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct cpuinfo_mips *VAR_3)
{
 unsigned int VAR_4;

 FUNC_1(VAR_4, VAR_4,
    VAR_2 | VAR_0);

 VAR_3->guest.kscratch_mask = (VAR_4 & VAR_0)
    >> VAR_1;

 if (VAR_4 & VAR_2)
  VAR_3->guest.conf |= FUNC_0(5);
 return VAR_4 & VAR_2;
}
