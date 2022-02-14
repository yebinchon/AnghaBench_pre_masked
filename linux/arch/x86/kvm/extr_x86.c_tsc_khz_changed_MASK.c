
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_freqs {unsigned long new; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 () ;
 unsigned long VAR_2 ;

__attribute__((used)) static void FUNC_4(void *VAR_3)
{
 struct cpufreq_freqs *VAR_4 = VAR_3;
 unsigned long VAR_5 = 0;

 if (VAR_3)
  VAR_5 = VAR_4->new;
 else if (!FUNC_1(VAR_0))
  VAR_5 = FUNC_2(FUNC_3());
 if (!VAR_5)
  VAR_5 = VAR_2;
 FUNC_0(VAR_1, VAR_5);
}
