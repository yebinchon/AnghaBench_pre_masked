
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int linesz; } ;
struct cpuinfo_mips {TYPE_1__ scache; } ;
 int FUNC_0 () ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static inline int FUNC_2(struct cpuinfo_mips *VAR_0)
{
 unsigned int VAR_1 = FUNC_1();
 unsigned int VAR_2;


 switch (FUNC_0()) {
 case 135:
 case 134:
 case 137:
 case 136:
 case 132:
 case 129:
 case 131:
 case 133:
 case 128:
 case 130:
  if (VAR_1 & (1 << 12))
   return 0;
 }

 VAR_2 = (VAR_1 >> 4) & 0x0f;
 if (0 < VAR_2 && VAR_2 <= 7)
  VAR_0->scache.linesz = 2 << VAR_2;
 else
  return 0;
 return 1;
}
