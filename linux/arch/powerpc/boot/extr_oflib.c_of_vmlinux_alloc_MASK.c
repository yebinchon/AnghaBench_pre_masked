
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long,int ) ;
 int FUNC_3 (char*,unsigned long,unsigned long,unsigned long,unsigned long) ;

void *FUNC_4(unsigned long VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_1, VAR_4 = (unsigned long)VAR_0;
 unsigned long VAR_5;
 void *VAR_6;





 VAR_5 = (unsigned long) FUNC_2(VAR_3, VAR_4 - VAR_3, 0);
 FUNC_3("Trying to claim from 0x%lx to 0x%lx (0x%lx) got %lx\r\n",
        VAR_3, VAR_4, VAR_4 - VAR_3, VAR_5);

 VAR_6 = FUNC_1(VAR_2);
 if (!VAR_6)
  FUNC_0("Can't allocate memory for kernel image!\n\r");

 return VAR_6;
}
