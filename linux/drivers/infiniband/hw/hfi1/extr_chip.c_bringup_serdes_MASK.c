
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hfi1_pportdata {scalar_t__ port_type; int linkinit_reason; scalar_t__* guids; scalar_t__ port; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {scalar_t__ base_guid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hfi1_devdata*,int ) ;
 int FUNC_2 (struct hfi1_pportdata*) ;
 int FUNC_3 (struct hfi1_devdata*) ;
 int FUNC_4 (struct hfi1_devdata*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct hfi1_pportdata*,int) ;
 int FUNC_6 (struct hfi1_pportdata*) ;
 int FUNC_7 (struct hfi1_pportdata*) ;

int FUNC_8(struct hfi1_pportdata *VAR_6)
{
 struct hfi1_devdata *VAR_7 = VAR_6->dd;
 u64 VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_0))
  FUNC_1(VAR_7, VAR_4);

 VAR_8 = VAR_6->guids[VAR_1];
 if (!VAR_8) {
  if (VAR_7->base_guid)
   VAR_8 = VAR_7->base_guid + VAR_6->port - 1;
  VAR_6->guids[VAR_1] = VAR_8;
 }


 VAR_6->linkinit_reason = VAR_2;


 FUNC_3(VAR_7);

 if (VAR_5) {
  VAR_9 = FUNC_4(VAR_7);
  if (VAR_9 < 0)
   return VAR_9;
 }

 FUNC_2(VAR_6);
 if (VAR_6->port_type == VAR_3) {
  FUNC_5(VAR_6, 0);
  FUNC_7(VAR_6);
  FUNC_5(VAR_6, 1);
 }

 FUNC_6(VAR_6);
 return 0;
}
