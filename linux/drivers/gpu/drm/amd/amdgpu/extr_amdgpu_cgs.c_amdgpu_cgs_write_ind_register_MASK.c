
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cgs_device {int dummy; } ;
typedef enum cgs_ind_reg { ____Placeholder_cgs_ind_reg } cgs_ind_reg ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 void FUNC_2 (unsigned int,int ) ;
 void FUNC_3 (unsigned int,int ) ;
 void FUNC_4 (unsigned int,int ) ;
 void FUNC_5 (unsigned int,int ) ;
 void FUNC_6 (unsigned int,int ) ;
 void FUNC_7 (unsigned int,int ) ;
 void FUNC_8 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_9(struct cgs_device *VAR_1,
       enum cgs_ind_reg VAR_2,
       unsigned VAR_3, uint32_t VAR_4)
{
 VAR_0;
 switch (VAR_2) {
 case 131:
  return FUNC_4(VAR_3, VAR_4);
 case 130:
  return FUNC_5(VAR_3, VAR_4);
 case 129:
  return FUNC_7(VAR_3, VAR_4);
 case 128:
  return FUNC_8(VAR_3, VAR_4);
 case 132:
  return FUNC_2(VAR_3, VAR_4);
 case 135:
  return FUNC_3(VAR_3, VAR_4);
 case 134:
  return FUNC_6(VAR_3, VAR_4);
 case 133:
  FUNC_0("audio endpt register access not implemented.\n");
  return;
 }
 FUNC_1(1, "Invalid indirect register space");
}
