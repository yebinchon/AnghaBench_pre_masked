
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_atombios_dp_link_train_info {int aux; int encoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct amdgpu_atombios_dp_link_train_info *VAR_4, int VAR_5)
{
 int VAR_6 = 0;


 switch (VAR_5) {
 case 130:
  VAR_6 = VAR_0;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 case 128:
  VAR_6 = VAR_2;
   break;
 }
 FUNC_0(VAR_4->encoder, VAR_6, 0);


 FUNC_1(VAR_4->aux, VAR_3, VAR_5);
}
