
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

void FUNC_2(void)
{
 if (!VAR_0) {
  VAR_0 = FUNC_0("iommu", ((void*)0));
  FUNC_1("\n");
  FUNC_1("*************************************************************\n");
  FUNC_1("**     NOTICE NOTICE NOTICE NOTICE NOTICE NOTICE NOTICE    **\n");
  FUNC_1("**                                                         **\n");
  FUNC_1("**  IOMMU DebugFS SUPPORT HAS BEEN ENABLED IN THIS KERNEL  **\n");
  FUNC_1("**                                                         **\n");
  FUNC_1("** This means that this kernel is built to expose internal **\n");
  FUNC_1("** IOMMU data structures, which may compromise security on **\n");
  FUNC_1("** your system.                                            **\n");
  FUNC_1("**                                                         **\n");
  FUNC_1("** If you see this message and you are not debugging the   **\n");
  FUNC_1("** kernel, report this immediately to your vendor!         **\n");
  FUNC_1("**                                                         **\n");
  FUNC_1("**     NOTICE NOTICE NOTICE NOTICE NOTICE NOTICE NOTICE    **\n");
  FUNC_1("*************************************************************\n");
 }
}
