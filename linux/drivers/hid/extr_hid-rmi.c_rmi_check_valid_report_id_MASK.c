
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hid_report {int maxfield; TYPE_2__** field; } ;
struct hid_device {TYPE_1__* report_enum; } ;
struct TYPE_4__ {unsigned int application; } ;
struct TYPE_3__ {struct hid_report** report_id_hash; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct hid_device *VAR_2, unsigned VAR_3,
  unsigned VAR_4, struct hid_report **VAR_5)
{
 int VAR_6;

 *VAR_5 = VAR_2->report_enum[VAR_3].report_id_hash[VAR_4];
 if (*VAR_5) {
  for (VAR_6 = 0; VAR_6 < (*VAR_5)->maxfield; VAR_6++) {
   unsigned VAR_7 = (*VAR_5)->field[VAR_6]->application;
   if ((VAR_7 & VAR_1) >= VAR_0)
    return 1;
  }
 }

 return 0;
}
