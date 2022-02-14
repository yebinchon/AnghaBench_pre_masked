
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_usb {int id_irq; scalar_t__ enable_id_detection; int vbus_irq; scalar_t__ enable_vbus_detection; int palmas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct palmas_usb*) ;
 int FUNC_2 (int ,struct palmas_usb*) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct palmas_usb *VAR_8)
{
 FUNC_3(VAR_8->palmas, VAR_5,
  VAR_6,
  VAR_7);

 if (VAR_8->enable_id_detection) {
  FUNC_3(VAR_8->palmas, VAR_5,
        VAR_0,
        VAR_1);

  FUNC_3(VAR_8->palmas, VAR_5,
        VAR_2,
        VAR_4 |
        VAR_3);
 }

 if (VAR_8->enable_vbus_detection)
  FUNC_2(VAR_8->vbus_irq, VAR_8);


 if (VAR_8->enable_id_detection) {
  FUNC_0(30);
  FUNC_1(VAR_8->id_irq, VAR_8);
 }
}
