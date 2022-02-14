
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (char*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, int VAR_1, unsigned int *VAR_2,
          unsigned int *VAR_3, unsigned int *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6, VAR_7;


 VAR_5 = FUNC_1(VAR_0, "PCI:%x:%x:%x.%x", VAR_2, VAR_3, &VAR_6, &VAR_7);
 if (VAR_5 != 4)
  return 0;

 *VAR_4 = FUNC_0(VAR_6, VAR_7);

 return 1;
}
