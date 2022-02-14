
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* hpte_removebolted ) (unsigned long,int,int) ;} ;
struct TYPE_3__ {unsigned int shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (unsigned long,int,int) ;

int FUNC_1(unsigned long VAR_4, unsigned long VAR_5,
        int VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 VAR_10 = VAR_3[VAR_6].shift;
 VAR_9 = 1 << VAR_10;

 if (!VAR_2.hpte_removebolted)
  return -VAR_0;

 for (VAR_8 = VAR_4; VAR_8 < VAR_5; VAR_8 += VAR_9) {
  VAR_11 = VAR_2.hpte_removebolted(VAR_8, VAR_6, VAR_7);
  if (VAR_11 == -VAR_1) {
   VAR_12 = -VAR_1;
   continue;
  }
  if (VAR_11 < 0)
   return VAR_11;
 }

 return VAR_12;
}
