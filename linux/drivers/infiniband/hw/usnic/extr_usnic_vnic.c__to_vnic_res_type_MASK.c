
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum vnic_res_type { ____Placeholder_vnic_res_type } vnic_res_type ;
typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;


 int VAR_0 ;

 int VAR_1 ;

__attribute__((used)) static enum vnic_res_type FUNC_0(enum usnic_vnic_res_type VAR_2)
{




 static enum vnic_res_type VAR_3[] = {
      128};



 if (VAR_2 >= VAR_1)
  return VAR_0;

 return VAR_3[VAR_2];
}
