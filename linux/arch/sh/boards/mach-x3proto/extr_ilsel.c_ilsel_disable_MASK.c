
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned int,unsigned long) ;
 int FUNC_2 (unsigned int,int *) ;
 int VAR_0 ;
 unsigned long FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,unsigned int) ;

void FUNC_6(unsigned int VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;

 FUNC_5("disabling ILSEL set %d\n", VAR_1);

 VAR_2 = FUNC_3(VAR_1);

 VAR_3 = FUNC_0(VAR_2);
 VAR_3 &= ~(0xf << FUNC_4(VAR_1));
 FUNC_1(VAR_3, VAR_2);

 FUNC_2(VAR_1, &VAR_0);
}
