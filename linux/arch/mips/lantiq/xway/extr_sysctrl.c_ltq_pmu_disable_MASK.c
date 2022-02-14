
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(unsigned int VAR_3)
{
 int VAR_4 = 1000000;

 FUNC_3(&VAR_2);
 FUNC_1(FUNC_0(VAR_0) | VAR_3, VAR_0);
 do {} while (--VAR_4 && (!(FUNC_0(VAR_1) & VAR_3)));
 FUNC_4(&VAR_2);

 if (!VAR_4)
  FUNC_2("deactivating PMU module failed!");
}
