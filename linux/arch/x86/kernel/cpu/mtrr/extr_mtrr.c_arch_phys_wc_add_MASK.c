
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long,int ,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,void*,void*) ;

int FUNC_4(unsigned long VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 if (FUNC_2() || !FUNC_1())
  return 0;

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1, 1);
 if (VAR_4 < 0) {
  FUNC_3("Failed to add WC MTRR for [%p-%p]; performance may suffer.",
   (void *)VAR_2, (void *)(VAR_2 + VAR_3 - 1));
  return VAR_4;
 }
 return VAR_4 + VAR_0;
}
