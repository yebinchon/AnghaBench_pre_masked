
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned long) ;

int FUNC_1(unsigned long VAR_5, int VAR_6, unsigned long VAR_7)
{
 if (!VAR_0)
  VAR_7 &= ~(VAR_3 | VAR_4);
 if (!VAR_7)
  return 0;
 VAR_5 &= VAR_1;
 return FUNC_0(VAR_5, VAR_5 + VAR_6 * VAR_2, VAR_7);
}
