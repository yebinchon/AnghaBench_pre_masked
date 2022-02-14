
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd_clock {unsigned int div_num; TYPE_1__* div_table; } ;
struct TYPE_2__ {unsigned int div; } ;


 unsigned long FUNC_0 (unsigned long,unsigned int) ;
 unsigned long VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(struct sd_clock *VAR_1,
       unsigned long VAR_2,
       unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6 = VAR_0;
 unsigned int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_1->div_num; VAR_7++) {
  VAR_4 = FUNC_0(VAR_3,
           VAR_1->div_table[VAR_7].div);
  VAR_5 = VAR_4 > VAR_2 ? VAR_4 - VAR_2 : VAR_2 - VAR_4;
  if (VAR_5 < VAR_6) {
   VAR_8 = VAR_1->div_table[VAR_7].div;
   VAR_6 = VAR_5;
  }
 }

 return VAR_8;
}
