
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mid_pwr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mid_pwr*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct mid_pwr *VAR_1)
{
 unsigned int VAR_2 = 500000;
 bool VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_1);
  if (!VAR_3)
   return 0;
  FUNC_1(1);
 } while (--VAR_2);

 return -VAR_0;
}
