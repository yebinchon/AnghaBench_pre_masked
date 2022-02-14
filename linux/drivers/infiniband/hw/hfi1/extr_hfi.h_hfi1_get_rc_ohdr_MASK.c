
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ib_other_headers {int dummy; } ;
struct TYPE_5__ {struct ib_other_headers oth; } ;
struct TYPE_6__ {TYPE_1__ l; struct ib_other_headers oth; } ;
struct ib_header {TYPE_2__ u; } ;
struct TYPE_7__ {struct ib_other_headers oth; } ;
struct TYPE_8__ {TYPE_3__ l; struct ib_other_headers oth; } ;
struct hfi1_16b_header {TYPE_4__ u; } ;
struct hfi1_opa_header {scalar_t__ hdr_type; struct hfi1_16b_header opah; struct ib_header ibh; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct hfi1_16b_header*) ;
 scalar_t__ FUNC_1 (struct ib_header*) ;

__attribute__((used)) static inline struct ib_other_headers *
FUNC_2(struct hfi1_opa_header *VAR_3)
{
 struct ib_other_headers *VAR_4;
 struct ib_header *VAR_5 = ((void*)0);
 struct hfi1_16b_header *VAR_6 = ((void*)0);


 if (VAR_3->hdr_type == VAR_1) {
  VAR_5 = &VAR_3->ibh;
  if (FUNC_1(VAR_5) == VAR_0)
   VAR_4 = &VAR_5->u.oth;
  else
   VAR_4 = &VAR_5->u.l.oth;
 } else {
  u8 VAR_7;

  VAR_6 = &VAR_3->opah;
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 == VAR_2)
   VAR_4 = &VAR_6->u.oth;
  else
   VAR_4 = &VAR_6->u.l.oth;
 }
 return VAR_4;
}
