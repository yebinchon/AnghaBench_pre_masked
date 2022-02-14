
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_2)
{
 unsigned long VAR_3;



 VAR_3 = FUNC_0(VAR_0);
 VAR_3 |= VAR_1;
 FUNC_1(VAR_3, VAR_0);

 FUNC_3();

 FUNC_2("Failed to suspend the system\n");
 return 1;
}
