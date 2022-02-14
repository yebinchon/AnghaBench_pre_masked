
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cppi41_dd {unsigned int n_chans; scalar_t__ sched_mem; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int VAR_3 ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cppi41_dd *VAR_4)
{
 unsigned VAR_5;
 unsigned VAR_6;
 u32 VAR_7;

 VAR_6 = 0;
 FUNC_5(0, VAR_4->sched_mem + VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_4->n_chans; VAR_5 += 2) {

  VAR_7 = FUNC_1(VAR_5);
  VAR_7 |= FUNC_2(VAR_5) | VAR_2;

  VAR_7 |= FUNC_3(VAR_5 + 1);
  VAR_7 |= FUNC_4(VAR_5 + 1) | VAR_3;
  FUNC_5(VAR_7, VAR_4->sched_mem + FUNC_0(VAR_6));
  VAR_6++;
 }
 VAR_7 = VAR_4->n_chans * 2 - 1;
 VAR_7 |= VAR_1;
 FUNC_5(VAR_7, VAR_4->sched_mem + VAR_0);
}
