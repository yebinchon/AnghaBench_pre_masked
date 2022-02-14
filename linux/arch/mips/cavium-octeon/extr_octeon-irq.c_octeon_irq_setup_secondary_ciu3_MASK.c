
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_ciu3_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 () ;
 int FUNC_2 () ;
 struct octeon_ciu3_info** VAR_3 ;
 int FUNC_3 (struct octeon_ciu3_info*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct octeon_ciu3_info *VAR_5;

 VAR_5 = VAR_3[FUNC_1()];
 FUNC_3(VAR_5);
 FUNC_2();


 FUNC_4(VAR_1 | VAR_0);
 if (VAR_4)
  FUNC_4(VAR_2);
 else
  FUNC_0(VAR_2);
}
