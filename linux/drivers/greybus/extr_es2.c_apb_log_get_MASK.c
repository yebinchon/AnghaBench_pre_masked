
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es2_ap_dev {int apb_log_fifo; int usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int ,int,int,int,char*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct es2_ap_dev *VAR_6, char *VAR_7)
{
 int VAR_8;

 do {
  VAR_8 = FUNC_1(VAR_6->usb_dev,
      FUNC_2(VAR_6->usb_dev, 0),
      VAR_2,
      VAR_3 | VAR_5 |
      VAR_4,
      0x00, 0x00,
      VAR_7,
      VAR_0,
      VAR_1);
  if (VAR_8 > 0)
   FUNC_0(&VAR_6->apb_log_fifo, VAR_7, VAR_8);
 } while (VAR_8 > 0);
}
