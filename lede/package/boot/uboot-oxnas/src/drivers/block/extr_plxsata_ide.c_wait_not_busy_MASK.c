
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long** VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(int VAR_4, unsigned long VAR_5)
{
 int VAR_6 = 1;
 unsigned long VAR_7 = (VAR_5 * 1000) / 50;
 do {

  if (!((*(VAR_3[VAR_4] + VAR_2)
   >> VAR_1) & (1UL << VAR_0))) {

   VAR_6 = 0;
   break;
  }


  FUNC_0(50000);
 } while (--VAR_7);

 return VAR_6;
}
