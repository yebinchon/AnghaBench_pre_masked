
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hfi1_devdata {int dummy; } ;
struct TYPE_2__ {scalar_t__ alloced; } ;
struct hfi1_ctxtdata {scalar_t__ eager_base; scalar_t__ expected_base; scalar_t__ expected_count; TYPE_1__ egrbufs; struct hfi1_devdata* dd; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,scalar_t__,int ,int ,int ) ;

void FUNC_1(struct hfi1_ctxtdata *VAR_1)
{
 struct hfi1_devdata *VAR_2 = VAR_1->dd;
 u32 VAR_3;


 for (VAR_3 = VAR_1->eager_base; VAR_3 < VAR_1->eager_base +
       VAR_1->egrbufs.alloced; VAR_3++)
  FUNC_0(VAR_2, VAR_3, VAR_0, 0, 0);

 for (VAR_3 = VAR_1->expected_base;
   VAR_3 < VAR_1->expected_base + VAR_1->expected_count; VAR_3++)
  FUNC_0(VAR_2, VAR_3, VAR_0, 0, 0);
}
