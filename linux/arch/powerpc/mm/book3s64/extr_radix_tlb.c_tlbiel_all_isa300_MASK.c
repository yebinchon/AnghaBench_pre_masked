
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,unsigned int,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;

 asm volatile("ptesync": : :"memory");







 if (FUNC_0(VAR_0)) {

  FUNC_1(0, VAR_4, 0, VAR_1, 0);
  for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++)
   FUNC_1(VAR_5, VAR_4, 0, VAR_2, 0);
 }


 FUNC_1(0, VAR_4, 0, VAR_1, 1);
 for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++)
  FUNC_1(VAR_5, VAR_4, 0, VAR_2, 1);

 asm volatile("ptesync": : :"memory");
}
