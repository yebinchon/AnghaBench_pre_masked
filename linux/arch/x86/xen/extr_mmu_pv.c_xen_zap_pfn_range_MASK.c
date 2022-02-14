
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multicall_space {int mc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long,int ) ;
 struct multicall_space FUNC_2 (int ) ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_3, unsigned int VAR_4,
    unsigned long *VAR_5,
    unsigned long *VAR_6)
{
 int VAR_7;
 struct multicall_space VAR_8;

 FUNC_5();
 for (VAR_7 = 0; VAR_7 < (1UL<<VAR_4); VAR_7++, VAR_3 += VAR_1) {
  VAR_8 = FUNC_2(0);

  if (VAR_5)
   VAR_5[VAR_7] = FUNC_3(VAR_3);

  FUNC_0(VAR_8.mc, VAR_3, VAR_2, 0);
  FUNC_1(FUNC_4(VAR_3), VAR_0);

  if (VAR_6)
   VAR_6[VAR_7] = FUNC_4(VAR_3);
 }
 FUNC_6(0);
}
