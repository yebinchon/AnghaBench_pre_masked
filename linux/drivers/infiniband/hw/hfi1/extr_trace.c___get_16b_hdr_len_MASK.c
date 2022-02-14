
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ib_other_headers {int dummy; } ;
struct TYPE_3__ {struct ib_other_headers oth; } ;
struct TYPE_4__ {TYPE_1__ l; struct ib_other_headers oth; } ;
struct hfi1_16b_header {TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 scalar_t__ FUNC_0 (struct hfi1_16b_header*) ;
 scalar_t__ FUNC_1 (struct ib_other_headers*) ;

__attribute__((used)) static u8 FUNC_2(struct hfi1_16b_header *VAR_4)
{
 struct ib_other_headers *VAR_5 = ((void*)0);
 u8 VAR_6;
 u8 VAR_7 = FUNC_0(VAR_4);

 if (VAR_7 == VAR_1) {
  VAR_6 = VAR_0;
  return (8 + 8);
 }

 if (VAR_7 == VAR_2)
  VAR_5 = &VAR_4->u.oth;
 else
  VAR_5 = &VAR_4->u.l.oth;

 VAR_6 = FUNC_1(VAR_5);
 return VAR_3[VAR_6] == 0 ?
        0 : VAR_3[VAR_6] - (12 + 8 + 8);
}
