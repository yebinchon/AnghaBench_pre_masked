
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_kona_i2c_dev {int * hs_cfg; int * std_cfg; TYPE_1__* device; } ;
struct TYPE_2__ {int of_node; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int * VAR_6 ;
 int FUNC_1 (int ,char*,unsigned int*) ;
 int FUNC_2 (char*,...) ;
 int * VAR_7 ;

__attribute__((used)) static int FUNC_3(struct bcm_kona_i2c_dev *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10 = FUNC_1(VAR_8->device->of_node, "clock-frequency",
           &VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(VAR_8->device, "missing clock-frequency property\n");
  return -VAR_5;
 }

 switch (VAR_9) {
 case 100000:
  VAR_8->std_cfg = &VAR_7[VAR_0];
  break;
 case 400000:
  VAR_8->std_cfg = &VAR_7[VAR_3];
  break;
 case 1000000:
  VAR_8->std_cfg = &VAR_7[VAR_1];
  break;
 case 3400000:

  VAR_8->std_cfg = &VAR_7[VAR_0];
  VAR_8->hs_cfg = &VAR_6[VAR_2];
  break;
 default:
  FUNC_2("%d hz bus speed not supported\n", VAR_9);
  FUNC_2("Valid speeds are 100khz, 400khz, 1mhz, and 3.4mhz\n");
  return -VAR_4;
 }

 return 0;
}
