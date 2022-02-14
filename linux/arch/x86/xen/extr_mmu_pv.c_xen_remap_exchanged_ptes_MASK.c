
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multicall_space {int mc; } ;


 int FUNC_0 (int ,unsigned long,int ,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct multicall_space FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_5, int VAR_6,
         unsigned long *VAR_7,
         unsigned long VAR_8)
{
 unsigned VAR_9, VAR_10;
 unsigned long VAR_11;

 FUNC_5();

 VAR_10 = 1u << VAR_6;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++, VAR_5 += VAR_1) {
  struct multicall_space VAR_12;
  unsigned VAR_13;

  VAR_12 = FUNC_1(0);
  if (VAR_7)
   VAR_11 = VAR_7[VAR_9];
  else
   VAR_11 = VAR_8 + VAR_9;

  if (VAR_9 < (VAR_10 - 1))
   VAR_13 = 0;
  else {
   if (VAR_6 == 0)
    VAR_13 = VAR_3 | VAR_2;
   else
    VAR_13 = VAR_4 | VAR_2;
  }

  FUNC_0(VAR_12.mc, VAR_5,
    FUNC_2(VAR_11, VAR_0), VAR_13);

  FUNC_3(FUNC_4(VAR_5), VAR_11);
 }

 FUNC_6(0);
}
