
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int lba_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static lba_t
FUNC_2(u_int VAR_2, lba_t VAR_3)
{

 if (VAR_2 == VAR_1 || VAR_2 == VAR_0) {
  VAR_3 += FUNC_0();
  VAR_3 += (VAR_2 == VAR_1) ? 2 : 1;
 }
 return (FUNC_1(VAR_3));
}
