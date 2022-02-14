
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (int,unsigned long) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, unsigned long *VAR_3)
{
 unsigned long VAR_4 = -1UL;
 int VAR_5 = 0;

 if (FUNC_0(VAR_0) == 0) {
  VAR_1 = 1;
  FUNC_1();

  VAR_4 = FUNC_2(VAR_2, *VAR_3);

  FUNC_1();
  *VAR_3 = VAR_4;
  VAR_5 = 1;
 }
 VAR_1 = 0;

 return VAR_5;
}
