
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_pci_ctl_info {int name; int op_state; void* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void**,int,unsigned int) ;
 int FUNC_1 (int,char*) ;
 struct edac_pci_ctl_info* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,scalar_t__,char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

struct edac_pci_ctl_info *FUNC_5(unsigned int VAR_2,
      const char *VAR_3)
{
 struct edac_pci_ctl_info *VAR_4;
 void *VAR_5 = ((void*)0), *VAR_6;
 unsigned int VAR_7;

 FUNC_1(1, "\n");

 VAR_4 = FUNC_0(&VAR_5, sizeof(*VAR_4), 1);
 VAR_6 = FUNC_0(&VAR_5, 1, VAR_2);
 VAR_7 = ((unsigned long)VAR_6) + VAR_2;


 VAR_4 = FUNC_2(VAR_7, VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);


 VAR_6 = VAR_2 ? ((char *)VAR_4) + ((unsigned long)VAR_6) : ((void*)0);

 VAR_4->pvt_info = VAR_6;
 VAR_4->op_state = VAR_1;

 FUNC_3(VAR_4->name, FUNC_4(VAR_3) + 1, "%s", VAR_3);

 return VAR_4;
}
