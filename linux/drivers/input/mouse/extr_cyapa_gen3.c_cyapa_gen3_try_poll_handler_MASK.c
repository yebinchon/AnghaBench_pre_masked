
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa_reg_data {int device_status; int finger_btn; } ;
struct cyapa {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cyapa*,struct cyapa_reg_data*) ;
 int FUNC_1 (struct cyapa*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct cyapa *VAR_6)
{
 struct cyapa_reg_data VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_0, (u8 *)&VAR_7);
 if (VAR_8 != sizeof(VAR_7))
  return -VAR_2;

 if ((VAR_7.device_status & VAR_5) != VAR_5 ||
     (VAR_7.device_status & VAR_4) != VAR_1 ||
     (VAR_7.finger_btn & VAR_3) != VAR_3)
  return -VAR_2;

 return FUNC_0(VAR_6, &VAR_7);

}
