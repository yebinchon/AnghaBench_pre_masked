
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ AT91PS_DataFlash ;


 int FUNC_0 (scalar_t__,unsigned int,unsigned long,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned int*) ;
 int VAR_0 ;

int FUNC_2(unsigned long VAR_1, unsigned long VAR_2, char *VAR_3)
{
 unsigned int VAR_4 = VAR_1;
 AT91PS_DataFlash VAR_5 = &VAR_0;

 VAR_5 = FUNC_1 (VAR_5, &VAR_4);
 if (VAR_5 == 0)
  return -1;

 return (FUNC_0(VAR_5, VAR_4, VAR_2, VAR_3));
}
