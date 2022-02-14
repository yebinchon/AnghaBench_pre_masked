
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl8366_smi*,int ,int ,int ) ;
 struct rtl8366_smi* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_7,
         const struct switch_attr *VAR_8,
         struct switch_val *VAR_9)
{
 struct rtl8366_smi *VAR_10 = FUNC_1(VAR_7);
 u32 VAR_11;

 switch (VAR_9->value.i) {
 case 0:
  VAR_11 = VAR_1;
  break;
 case 1:
  VAR_11 = VAR_2;
  break;
 case 2:
  VAR_11 = VAR_3;
  break;
 case 3:
  VAR_11 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_10, VAR_6,
           VAR_5, VAR_11);
}
