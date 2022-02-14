
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ x86_vendor; int cpuid_level; scalar_t__ x86_model; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 unsigned int VAR_7 ;
 int FUNC_1 (int ) ;

unsigned long FUNC_2(void)
{
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12;

 if (VAR_6.x86_vendor != VAR_5)
  return 0;

 if (VAR_6.cpuid_level < 0x15)
  return 0;

 VAR_8 = VAR_9 = VAR_10 = VAR_11 = 0;


 FUNC_0(0x15, &VAR_8, &VAR_9, &VAR_10, &VAR_11);

 if (VAR_9 == 0 || VAR_8 == 0)
  return 0;

 VAR_12 = VAR_10 / 1000;






 if (VAR_12 == 0 &&
   VAR_6.x86_model == VAR_2)
  VAR_12 = 25000;






 if (VAR_12 != 0)
  FUNC_1(VAR_3);






 if (VAR_12 == 0 && VAR_6.cpuid_level >= 0x16) {
  unsigned int VAR_13, VAR_14, VAR_15, VAR_16;

  FUNC_0(0x16, &VAR_13, &VAR_14, &VAR_15, &VAR_16);
  VAR_12 = VAR_13 * 1000 *
   VAR_8 / VAR_9;
 }

 if (VAR_12 == 0)
  return 0;





 if (VAR_6.x86_model == VAR_1)
  FUNC_1(VAR_4);
 return VAR_12 * VAR_9 / VAR_8;
}
