
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_report {int dummy; } ;
struct hid_device {TYPE_1__* report_enum; } ;
typedef int __u8 ;
struct TYPE_2__ {struct hid_report** report_id_hash; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,struct hid_report*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct hid_device *VAR_2, const int VAR_3)
{
 struct hid_report *VAR_4;
 __u8 VAR_5[4] = { 0xe, 0xf, 0x1b, 0x10 };

 if (VAR_3 < 0 || VAR_3 > 3)
  return;

 VAR_4 = VAR_2->report_enum[VAR_0].
   report_id_hash[VAR_5[VAR_3]];

 if (!VAR_4)
  return;

 FUNC_0(VAR_2, VAR_4, VAR_1);
}
