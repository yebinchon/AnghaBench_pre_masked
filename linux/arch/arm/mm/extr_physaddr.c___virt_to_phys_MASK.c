
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;


 int FUNC_0 (int,char*,void*,void*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

phys_addr_t FUNC_3(unsigned long VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0),
      "virt_to_phys used for non-linear address: %pK (%pS)\n",
      (void *)VAR_0, (void *)VAR_0);

 return FUNC_2(VAR_0);
}
