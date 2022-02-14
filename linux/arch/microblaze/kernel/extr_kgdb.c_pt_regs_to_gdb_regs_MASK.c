
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr_s {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_2__ {unsigned long* pvr; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 TYPE_1__ VAR_8 ;

void FUNC_0(unsigned long *VAR_9, struct pt_regs *VAR_10)
{
 unsigned int VAR_11;
 unsigned long *VAR_12 = (unsigned long *)VAR_10;
 int VAR_13;


 for (VAR_11 = 0; VAR_11 < (sizeof(struct pt_regs) / 4) - 1; VAR_11++)
  VAR_9[VAR_11] = VAR_12[VAR_11];


 __asm__ __volatile__ ("mfs %0, rbtr;" : "=r"(VAR_13) : );
 VAR_9[VAR_0] = VAR_13;


 for (VAR_11 = 0; VAR_11 < sizeof(struct pvr_s)/4; VAR_11++)
  VAR_9[VAR_1 + VAR_11] = VAR_8.pvr[VAR_11];


 __asm__ __volatile__ ("mfs %0, redr;" : "=r"(VAR_13) : );
 VAR_9[VAR_2] = VAR_13;
 __asm__ __volatile__ ("mfs %0, rpid;" : "=r"(VAR_13) : );
 VAR_9[VAR_3] = VAR_13;
 __asm__ __volatile__ ("mfs %0, rzpr;" : "=r"(VAR_13) : );
 VAR_9[VAR_7] = VAR_13;
 __asm__ __volatile__ ("mfs %0, rtlbx;" : "=r"(VAR_13) : );
 VAR_9[VAR_6] = VAR_13;
 __asm__ __volatile__ ("mfs %0, rtlblo;" : "=r"(VAR_13) : );
 VAR_9[VAR_5] = VAR_13;
 __asm__ __volatile__ ("mfs %0, rtlbhi;" : "=r"(VAR_13) : );
 VAR_9[VAR_4] = VAR_13;
}
