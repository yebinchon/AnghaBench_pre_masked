
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_report {int maxfield; TYPE_1__** field; } ;
struct hid_input {int dummy; } ;
struct TYPE_2__ {int maxusage; scalar_t__ usage; } ;


 int FUNC_0 (struct hid_input*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct hid_input *VAR_0,
          struct hid_report *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->maxfield; VAR_2++)
  for (VAR_3 = 0; VAR_3 < VAR_1->field[VAR_2]->maxusage; VAR_3++)
   FUNC_0(VAR_0, VAR_1->field[VAR_2],
       VAR_1->field[VAR_2]->usage + VAR_3);
}
