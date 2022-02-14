
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conf; } ;
struct cpuinfo_mips {TYPE_1__ guest; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct cpuinfo_mips *VAR_1)
{
 unsigned int VAR_2;

 FUNC_1(VAR_2, VAR_2, VAR_0);

 if (VAR_2 & VAR_0)
  VAR_1->guest.conf |= FUNC_0(3);
 return VAR_2 & VAR_0;
}
