
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ways; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,int) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_6(void *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6, VAR_7;
 unsigned long VAR_8;

 VAR_6 = (unsigned long)VAR_3 & ~(VAR_1-1);
 VAR_7 = ((unsigned long)VAR_3 + VAR_4 + VAR_1-1)
  & ~(VAR_1-1);

 FUNC_3(VAR_8);
 FUNC_1();

 for (VAR_5 = VAR_6; VAR_5 < VAR_7; VAR_5+=VAR_1) {






  FUNC_5(VAR_0, VAR_5);
 }

 FUNC_0();
 FUNC_2(VAR_8);
}
