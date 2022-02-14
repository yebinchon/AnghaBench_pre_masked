
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 () ;

__attribute__((used)) static unsigned long FUNC_2(void)
{
 unsigned long VAR_5;


 VAR_5 = VAR_2 + VAR_0;

 if (VAR_4->flags & VAR_1) {
  VAR_5 += FUNC_1() & (VAR_3 - 1);
  VAR_5 = FUNC_0(VAR_5);
 }

 return VAR_5;
}
