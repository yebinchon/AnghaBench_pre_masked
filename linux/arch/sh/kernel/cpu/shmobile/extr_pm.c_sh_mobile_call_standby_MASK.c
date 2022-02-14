
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_sleep_data {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *,unsigned long,int *) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(unsigned long VAR_4)
{
 void *VAR_5 = (void *)VAR_0;
 struct sh_sleep_data *VAR_6 = VAR_5;
 void (*VAR_7)(unsigned long, unsigned long);


 VAR_7 = (void *)(VAR_6 + 1);

 FUNC_0(&VAR_3,
       VAR_4, ((void*)0));


 if (VAR_4 & VAR_1)
  FUNC_1();


 VAR_7(VAR_4, VAR_0);

 FUNC_0(&VAR_2,
       VAR_4, ((void*)0));
}
