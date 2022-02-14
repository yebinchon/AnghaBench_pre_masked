
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef int nasid_t ;
struct TYPE_2__ {scalar_t__ iwcr_dir_con; void* wcr_reg_value; } ;
typedef TYPE_1__ hubii_wcr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_3(nasid_t VAR_4)
{
 u64 VAR_5;
 hubii_wcr_t VAR_6;
 unsigned VAR_7;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 FUNC_1(VAR_4, VAR_2, 0);

 VAR_6.wcr_reg_value = FUNC_0(VAR_4, VAR_3);

 if (VAR_6.iwcr_dir_con) {



  FUNC_2(VAR_4, 0, 3);
 } else {



  FUNC_2(VAR_4, 0, 1);
 }





 for (VAR_7 = VAR_1; VAR_7 <= VAR_0; VAR_7++)
  FUNC_2(VAR_4, VAR_7, 3);

 FUNC_1(VAR_4, VAR_2, VAR_5);
}
