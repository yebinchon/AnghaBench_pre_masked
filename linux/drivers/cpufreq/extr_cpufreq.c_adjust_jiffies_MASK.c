
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_freqs {int flags; unsigned int old; unsigned int new; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long,unsigned int,unsigned int) ;
 unsigned long VAR_2 ;
 int FUNC_1 (char*,unsigned long,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_3, struct cpufreq_freqs *VAR_4)
{

 static unsigned long VAR_5;
 static unsigned int VAR_6;

 if (VAR_4->flags & VAR_0)
  return;

 if (!VAR_6) {
  VAR_5 = VAR_2;
  VAR_6 = VAR_4->old;
  FUNC_1("saving %lu as reference value for loops_per_jiffy; freq is %u kHz\n",
    VAR_5, VAR_6);
 }
 if (VAR_3 == VAR_1 && VAR_4->old != VAR_4->new) {
  VAR_2 = FUNC_0(VAR_5, VAR_6,
        VAR_4->new);
  FUNC_1("scaling loops_per_jiffy to %lu for frequency %u kHz\n",
    VAR_2, VAR_4->new);
 }

}
