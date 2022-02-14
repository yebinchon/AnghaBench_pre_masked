
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xwidget_part_num_t ;
typedef int widgetreg_t ;
typedef int nasid_t ;



 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(nasid_t VAR_1, int VAR_2, int VAR_3)
{
 widgetreg_t VAR_4;
 xwidget_part_num_t VAR_5;

 VAR_4 = *(volatile widgetreg_t *)
  (FUNC_0(VAR_1, VAR_2) + VAR_0);
 VAR_5 = FUNC_1(VAR_4);

 switch (VAR_5) {
 case 129:
 case 128:
  FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 default:
  break;
 }

 return 0;
}
