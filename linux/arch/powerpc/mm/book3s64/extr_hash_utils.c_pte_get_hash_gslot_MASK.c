
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real_pte_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ,unsigned int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,int) ;
 unsigned long VAR_3 ;

unsigned long FUNC_2(unsigned long VAR_4, unsigned long VAR_5,
  int VAR_6, real_pte_t VAR_7, unsigned int VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6);
 VAR_11 = FUNC_0(VAR_7, VAR_8);
 if (VAR_11 & VAR_2)
  VAR_9 = ~VAR_9;
 VAR_10 = (VAR_9 & VAR_3) * VAR_0;
 VAR_10 += VAR_11 & VAR_1;
 return VAR_10;
}
