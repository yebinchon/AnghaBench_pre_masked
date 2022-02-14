
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(uint64_t VAR_3, int VAR_4)
{
 char *VAR_5;





 VAR_4 += VAR_3 & VAR_0;
 VAR_3 &= ~VAR_0;
 VAR_5 = FUNC_1(VAR_3);




 VAR_2;
 while (VAR_4 > 0) {
  FUNC_0(*VAR_5);
  VAR_4 -= VAR_1;
  VAR_5 += VAR_1;
 }
}
