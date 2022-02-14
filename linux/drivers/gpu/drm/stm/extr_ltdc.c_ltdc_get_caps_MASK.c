
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bus_width; int hw_version; int non_alpha_only_l1; int pad_max_freq_hz; int pix_fmt_hw; int reg_ofs; int nb_layers; } ;
struct ltdc_device {TYPE_1__ caps; int regs; } ;
struct drm_device {struct ltdc_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_10)
{
 struct ltdc_device *VAR_11 = VAR_10->dev_private;
 u32 VAR_12, VAR_13, VAR_14;





 VAR_13 = FUNC_1(VAR_11->regs, VAR_4);

 VAR_11->caps.nb_layers = FUNC_0((int)VAR_13, 1, VAR_5);


 VAR_14 = FUNC_1(VAR_11->regs, VAR_2);
 VAR_12 = (VAR_14 & VAR_1) >> 4;
 VAR_11->caps.bus_width = 8 << VAR_12;
 VAR_11->caps.hw_version = FUNC_1(VAR_11->regs, VAR_3);

 switch (VAR_11->caps.hw_version) {
 case 130:
 case 129:
  VAR_11->caps.reg_ofs = VAR_7;
  VAR_11->caps.pix_fmt_hw = VAR_8;







  VAR_11->caps.non_alpha_only_l1 = 1;
  VAR_11->caps.pad_max_freq_hz = 90000000;
  if (VAR_11->caps.hw_version == 130)
   VAR_11->caps.pad_max_freq_hz = 65000000;
  break;
 case 128:
  VAR_11->caps.reg_ofs = VAR_6;
  VAR_11->caps.pix_fmt_hw = VAR_9;
  VAR_11->caps.non_alpha_only_l1 = 0;
  VAR_11->caps.pad_max_freq_hz = 150000000;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
