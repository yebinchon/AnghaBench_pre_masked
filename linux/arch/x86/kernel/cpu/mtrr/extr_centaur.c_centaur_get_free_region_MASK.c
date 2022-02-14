
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mtrr_type ;
struct TYPE_2__ {int (* get ) (int,unsigned long*,unsigned long*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,unsigned long*,unsigned long*,int *) ;

__attribute__((used)) static int
FUNC_1(unsigned long VAR_4, unsigned long VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8;
 mtrr_type VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = VAR_3;
 if (VAR_6 >= 0 && VAR_6 < VAR_11)
  return VAR_6;

 for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10) {
  if (VAR_1 & (1 << VAR_10))
   continue;
  VAR_2->get(VAR_10, &VAR_7, &VAR_8, &VAR_9);
  if (VAR_8 == 0)
   return VAR_10;
 }

 return -VAR_0;
}
