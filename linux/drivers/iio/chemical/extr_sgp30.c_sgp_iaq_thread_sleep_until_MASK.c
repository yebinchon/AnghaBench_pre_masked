
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgp_data {scalar_t__ iaq_init_start_jiffies; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (long const,long const) ;

__attribute__((used)) static void FUNC_3(const struct sgp_data *VAR_1,
           unsigned long VAR_2)
{
 const long VAR_3 = 50000;

 while (!FUNC_1(VAR_0, VAR_2)) {
  FUNC_2(VAR_3, VAR_3 + 10000);
  if (FUNC_0() || VAR_1->iaq_init_start_jiffies == 0)
   return;
 }
}
