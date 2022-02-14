
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;



 int VAR_0 ;

const char *FUNC_0(enum usnic_vnic_res_type VAR_1)
{




 static const char * const VAR_2[] = {
      128};



 if (VAR_1 >= VAR_0)
  return "unknown";

 return VAR_2[VAR_1];

}
