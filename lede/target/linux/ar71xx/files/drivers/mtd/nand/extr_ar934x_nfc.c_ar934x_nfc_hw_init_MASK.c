
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar934x_nfc_platform_data {int (* hw_reset ) (int) ;} ;
struct ar934x_nfc {int ctrl_reg; scalar_t__ small_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct ar934x_nfc_platform_data* FUNC_0 (struct ar934x_nfc*) ;
 int FUNC_1 (struct ar934x_nfc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct ar934x_nfc *VAR_12)
{
 struct ar934x_nfc_platform_data *VAR_13;

 VAR_13 = FUNC_0(VAR_12);
 if (VAR_13->hw_reset) {
  VAR_13->hw_reset(1);
  VAR_13->hw_reset(0);
 }





 FUNC_1(VAR_12, VAR_6,
        VAR_9);
 FUNC_1(VAR_12, VAR_7,
        VAR_10);
 FUNC_1(VAR_12, VAR_8,
        VAR_11);


 FUNC_1(VAR_12, VAR_5, 0xff00);

 FUNC_1(VAR_12, VAR_3, 0);


 VAR_12->ctrl_reg = VAR_0;
 FUNC_1(VAR_12, VAR_2, VAR_12->ctrl_reg);

 if (VAR_12->small_page) {

  FUNC_1(VAR_12, VAR_4,
         VAR_1);
 }
}
