
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




 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct extcon_dev *VAR_5,
    unsigned int VAR_6, int VAR_7,unsigned int VAR_8)
{
 struct extcon_cable *VAR_9;
 int VAR_10, VAR_11;


 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = &VAR_5->cables[VAR_7];

 switch (VAR_10) {
 case 128:
  VAR_11 = FUNC_1(VAR_8 - VAR_4, VAR_9->usb_bits);
  break;
 case 131:
  VAR_11 = FUNC_1(VAR_8 - VAR_1, VAR_9->chg_bits);
  break;
 case 129:
  VAR_11 = FUNC_1(VAR_8 - VAR_3, VAR_9->jack_bits);
  break;
 case 130:
  VAR_11 = FUNC_1(VAR_8 - VAR_2, VAR_9->disp_bits);
  break;
 default:
  VAR_11 = -VAR_0;
 }

 return VAR_11;
}
