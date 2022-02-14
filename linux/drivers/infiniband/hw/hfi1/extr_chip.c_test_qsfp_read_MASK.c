
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hfi1_pportdata {scalar_t__ port_type; TYPE_1__* dd; } ;
struct TYPE_2__ {int hfi1_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hfi1_pportdata*,int ,int,int *,int) ;
 int FUNC_1 (struct hfi1_pportdata*) ;

__attribute__((used)) static int FUNC_2(struct hfi1_pportdata *VAR_2)
{
 int VAR_3;
 u8 VAR_4;





 if (VAR_2->port_type != VAR_1 || !FUNC_1(VAR_2))
  return 0;


 VAR_3 = FUNC_0(VAR_2, VAR_2->dd->hfi1_id, 2, &VAR_4, 1);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3 != 1)
  return -VAR_0;

 return 0;
}
