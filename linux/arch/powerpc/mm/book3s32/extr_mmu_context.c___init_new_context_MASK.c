
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,int,unsigned long) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long,int ) ;

unsigned long FUNC_2(void)
{
 unsigned long VAR_3 = VAR_2;

 while (FUNC_1(VAR_3, VAR_1)) {
  VAR_3 = FUNC_0(VAR_1, VAR_0+1, VAR_3);
  if (VAR_3 > VAR_0)
   VAR_3 = 0;
 }
 VAR_2 = (VAR_3 + 1) & VAR_0;

 return VAR_3;
}
