
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_2__* VAR_5 ;
 unsigned int VAR_6 ;

unsigned int FUNC_0(void)
{
 unsigned int VAR_7 = VAR_6;

 if (VAR_5->thread.flags & VAR_1) {
  VAR_7 &= ~VAR_2;
  VAR_7 |= VAR_3;
 }

 if (VAR_5->thread.flags & VAR_0)
  VAR_7 &= ~VAR_4;

 return VAR_7;
}
