
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 () ;

int FUNC_3(void)
{
 if (FUNC_2()) {
  VAR_1 = VAR_2;







  if (FUNC_0(VAR_1 > VAR_0))
   VAR_1 = VAR_0;





  if (VAR_1 < VAR_3)
   FUNC_1("KVM: SVE vector length for guests limited to %u bytes\n",
    VAR_1);
 }

 return 0;
}
