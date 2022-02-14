
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int ofs; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8366_smi*,int ) ;
 int FUNC_1 (struct rtl8366_smi*,int ) ;
 struct rtl8366_smi* FUNC_2 (struct switch_dev*) ;

int FUNC_3(struct switch_dev *VAR_1,
          const struct switch_attr *VAR_2,
          struct switch_val *VAR_3)
{
 struct rtl8366_smi *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 if (VAR_2->ofs > 2)
  return -VAR_0;

 if (VAR_2->ofs == 1)
  VAR_5 = FUNC_0(VAR_4, VAR_3->value.i);
 else
  VAR_5 = FUNC_1(VAR_4, VAR_3->value.i);

 return VAR_5;
}
