
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cgs_device {int dummy; } ;
typedef enum cgs_ind_reg { ____Placeholder_cgs_ind_reg } cgs_ind_reg ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int,char*) ;

__attribute__((used)) static uint32_t FUNC_9(struct cgs_device *VAR_1,
          enum cgs_ind_reg VAR_2,
          unsigned VAR_3)
{
 VAR_0;
 switch (VAR_2) {
 case 131:
  return FUNC_3(VAR_3);
 case 130:
  return FUNC_4(VAR_3);
 case 129:
  return FUNC_6(VAR_3);
 case 128:
  return FUNC_7(VAR_3);
 case 132:
  return FUNC_1(VAR_3);
 case 135:
  return FUNC_2(VAR_3);
 case 134:
  return FUNC_5(VAR_3);
 case 133:
  FUNC_0("audio endpt register access not implemented.\n");
  return 0;
 }
 FUNC_8(1, "Invalid indirect register space");
 return 0;
}
