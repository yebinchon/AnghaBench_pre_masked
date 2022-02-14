
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unative_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4(unsigned long VAR_3, unsigned long *VAR_4,
       unsigned long *VAR_5, unsigned long *VAR_6)
{
 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 unsigned long VAR_7 = VAR_3 / (sizeof(unative_t)) / 4;

 do {
  FUNC_1(VAR_0);
  FUNC_1(VAR_1);
  FUNC_1(VAR_2);
  FUNC_3(VAR_0, VAR_1);
  FUNC_3(VAR_0, VAR_2);
  FUNC_2(VAR_0);

  VAR_0 += 4;
  VAR_1 += 4;
  VAR_2 += 4;
 } while (--VAR_7 > 0);
}
