
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tlbsize; } ;


 unsigned long FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 unsigned long FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(int VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_1() & FUNC_0(&VAR_0);
 FUNC_4(0);
 while (VAR_1 < VAR_0.tlbsize) {
  FUNC_5(VAR_1 << 8);
  FUNC_3((VAR_1 | 0x80000) << 12);
  VAR_1++;
  FUNC_2();
 }
 FUNC_3(VAR_2);
}
