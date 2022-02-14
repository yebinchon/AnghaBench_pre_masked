
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;

 FUNC_2(&VAR_3, VAR_6);

 if (VAR_5) {
  FUNC_1(VAR_4, 0);
  *VAR_0 = (VAR_5 & ~VAR_2) | VAR_1;
 } else {
  FUNC_1(VAR_4, 1);
  FUNC_0(VAR_4);
  *VAR_0 = 0;
 }

 FUNC_3(&VAR_3, VAR_6);
}
