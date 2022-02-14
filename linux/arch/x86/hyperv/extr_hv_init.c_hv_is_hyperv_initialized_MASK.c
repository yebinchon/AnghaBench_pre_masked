
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union hv_x64_msr_hypercall_contents {int enable; scalar_t__ as_uint64; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;

bool FUNC_1(void)
{
 union hv_x64_msr_hypercall_contents VAR_3;





 if (VAR_2 != VAR_1)
  return 0;





 VAR_3.as_uint64 = 0;
 FUNC_0(VAR_0, VAR_3.as_uint64);

 return VAR_3.enable;
}
