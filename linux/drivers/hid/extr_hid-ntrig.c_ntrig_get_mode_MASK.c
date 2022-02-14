
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hid_report {int maxfield; TYPE_2__** field; } ;
struct hid_device {TYPE_1__* report_enum; } ;
struct TYPE_4__ {int report_count; scalar_t__* value; } ;
struct TYPE_3__ {struct hid_report** report_id_hash; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hid_device*,struct hid_report*,int ) ;
 int FUNC_1 (struct hid_device*) ;

__attribute__((used)) static inline int FUNC_2(struct hid_device *VAR_3)
{
 struct hid_report *VAR_4 = VAR_3->report_enum[VAR_1].
        report_id_hash[0x0d];

 if (!VAR_4 || VAR_4->maxfield < 1 ||
     VAR_4->field[0]->report_count < 1)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_4, VAR_2);
 FUNC_1(VAR_3);
 return (int)VAR_4->field[0]->value[0];
}
