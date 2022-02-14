
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(driver_t *VAR_3, device_t VAR_4)
{
 int VAR_5;


 if (VAR_2 != VAR_0 ||
     FUNC_1(VAR_1) != 0x6)
  return;


 VAR_5 = 0;
 FUNC_2("hw.attach_intel_csr_pci", &VAR_5);
 if (!VAR_5)
  return;


 if (FUNC_4() == 0)
  return;


 if (FUNC_0(VAR_4, 20, "qpi", -1) == ((void*)0))
  FUNC_3("Failed to add qpi bus");
}
