
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extcon_dev {struct extcon_cable* cables; } ;
struct extcon_cable {int disp_bits; int jack_bits; int chg_bits; int usb_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct extcon_dev*,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int) ;

int FUNC_4(struct extcon_dev *VAR_5, unsigned int VAR_6,
     unsigned int VAR_7)
{
 struct extcon_cable *VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;

 if (!VAR_5)
  return -VAR_0;


 if (!FUNC_3(VAR_6, VAR_7))
  return -VAR_0;


 VAR_9 = FUNC_1(VAR_5, VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_8 = &VAR_5->cables[VAR_9];

 switch (VAR_10) {
 case 128:
  FUNC_0(VAR_7 - VAR_4, VAR_8->usb_bits);
  break;
 case 131:
  FUNC_0(VAR_7 - VAR_1, VAR_8->chg_bits);
  break;
 case 129:
  FUNC_0(VAR_7 - VAR_3, VAR_8->jack_bits);
  break;
 case 130:
  FUNC_0(VAR_7 - VAR_2, VAR_8->disp_bits);
  break;
 default:
  VAR_11 = -VAR_0;
 }

 return VAR_11;
}
