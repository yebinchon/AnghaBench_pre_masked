
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xwidget_part_num_t ;
typedef int widgetreg_t ;
typedef int u64 ;
typedef int nasid_t ;
typedef int cnodeid_t ;



 int FUNC_0 (int ) ;
 int VAR_0 ;
 int volatile VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;

 int FUNC_3 (int ) ;

 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(cnodeid_t VAR_3)
{
 volatile u64 VAR_4;
 nasid_t VAR_5;
 xwidget_part_num_t VAR_6;
 widgetreg_t VAR_7;

 VAR_5 = FUNC_0(VAR_3);
 VAR_4 = FUNC_2(VAR_5, VAR_0);


 if (!(VAR_4 & VAR_1))
  return;

 VAR_7 = *(volatile widgetreg_t *)
         (FUNC_1(VAR_5, 0x0) + VAR_2);
 VAR_6 = FUNC_3(VAR_7);

 switch (VAR_6) {
 case 130:
  FUNC_4(VAR_5, 0x8, 0xa);
  break;
 case 129:
 case 128:
  FUNC_5("xtalk:n%d/0 xbow widget\n", VAR_5);
  FUNC_6(VAR_5);
  break;
 default:
  FUNC_5("xtalk:n%d/0 unknown widget (0x%x)\n", VAR_5, VAR_6);
  break;
 }
}
