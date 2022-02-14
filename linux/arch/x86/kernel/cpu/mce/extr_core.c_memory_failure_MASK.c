
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned long) ;

int FUNC_2(unsigned long VAR_1, int VAR_2)
{

 FUNC_0(VAR_2 & VAR_0);
 FUNC_1("Uncorrected memory error in page 0x%lx ignored\n"
        "Rebuild kernel with CONFIG_MEMORY_FAILURE=y for smarter handling\n",
        VAR_1);

 return 0;
}
