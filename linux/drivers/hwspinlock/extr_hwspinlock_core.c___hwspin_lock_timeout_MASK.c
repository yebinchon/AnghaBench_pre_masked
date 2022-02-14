
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hwspinlock {TYPE_2__* bank; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* relax ) (struct hwspinlock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hwspinlock*,int,unsigned long*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (struct hwspinlock*) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(struct hwspinlock *VAR_5, unsigned int VAR_6,
     int VAR_7, unsigned long *VAR_8)
{
 int VAR_9;
 unsigned long VAR_10, VAR_11 = 0;

 VAR_10 = FUNC_1(VAR_6) + VAR_4;

 for (;;) {

  VAR_9 = FUNC_0(VAR_5, VAR_7, VAR_8);
  if (VAR_9 != -VAR_0)
   break;





  if (VAR_7 == VAR_2) {
   FUNC_4(VAR_3);
   VAR_11 += VAR_3;
   if (VAR_11 > VAR_6 * 1000)
    return -VAR_1;
  } else {
   if (FUNC_3(VAR_10))
    return -VAR_1;
  }





  if (VAR_5->bank->ops->relax)
   VAR_5->bank->ops->relax(VAR_5);
 }

 return VAR_9;
}
