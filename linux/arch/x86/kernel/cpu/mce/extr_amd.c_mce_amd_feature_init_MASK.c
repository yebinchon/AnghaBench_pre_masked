
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cpuinfo_x86 {int dummy; } ;
struct TYPE_2__ {scalar_t__ succor; scalar_t__ smca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct cpuinfo_x86*) ;
 int FUNC_1 (struct cpuinfo_x86*,unsigned int) ;
 int FUNC_2 (int,int,int,unsigned int,unsigned int,unsigned int) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (unsigned int,unsigned int,int,int,int) ;
 scalar_t__ FUNC_4 (int,int*,int*) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 unsigned int FUNC_6 () ;
 unsigned int FUNC_7 (int ) ;

void FUNC_8(struct cpuinfo_x86 *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9 = FUNC_6();
 u32 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 int VAR_13 = -1;


 for (VAR_7 = 0; VAR_7 < FUNC_7(VAR_5); ++VAR_7) {
  if (VAR_4.smca)
   FUNC_5(VAR_7, VAR_9);

  FUNC_1(VAR_6, VAR_7);

  for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
   VAR_12 = FUNC_2(VAR_12, VAR_10, VAR_11, VAR_7, VAR_8, VAR_9);
   if (!VAR_12)
    break;

   if (FUNC_4(VAR_12, &VAR_10, &VAR_11))
    break;

   if (!(VAR_11 & VAR_2))
    continue;

   if (!(VAR_11 & VAR_0) ||
        (VAR_11 & VAR_1))
    continue;

   VAR_13 = FUNC_3(VAR_7, VAR_8, VAR_12, VAR_13, VAR_11);
  }
 }

 if (VAR_4.succor)
  FUNC_0(VAR_6);
}
