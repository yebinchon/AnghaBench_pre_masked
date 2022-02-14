
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned long,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if ((VAR_4 & VAR_1) == VAR_0)
  return;

 FUNC_0("GPIO1 pins were connected to something else (%.2x), fixing\n",
  VAR_4);

 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_0;

 FUNC_2(VAR_3, VAR_2, VAR_4);
}
