
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ib_other_headers {int dummy; } ;
struct TYPE_3__ {struct ib_other_headers oth; } ;
struct TYPE_4__ {TYPE_1__ l; struct ib_other_headers oth; } ;
struct ib_header {TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 size_t FUNC_0 (struct ib_other_headers*) ;
 scalar_t__ FUNC_1 (struct ib_header*) ;

__attribute__((used)) static u8 FUNC_2(struct ib_header *VAR_2)
{
 struct ib_other_headers *VAR_3;
 u8 VAR_4;

 if (FUNC_1(VAR_2) == VAR_0)
  VAR_3 = &VAR_2->u.oth;
 else
  VAR_3 = &VAR_2->u.l.oth;
 VAR_4 = FUNC_0(VAR_3);
 return VAR_1[VAR_4] == 0 ?
        0 : VAR_1[VAR_4] - (12 + 8);
}
