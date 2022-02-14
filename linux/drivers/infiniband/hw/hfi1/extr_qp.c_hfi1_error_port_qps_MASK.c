
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hfi1_pportdata {TYPE_1__* dd; } ;
struct hfi1_ibport {int dummy; } ;
struct hfi1_ibdev {int rdi; } ;
struct TYPE_2__ {struct hfi1_ibdev verbs_dev; } ;


 int VAR_0 ;
 struct hfi1_pportdata* FUNC_0 (struct hfi1_ibport*) ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(struct hfi1_ibport *VAR_1, u8 VAR_2)
{
 struct hfi1_pportdata *VAR_3 = FUNC_0(VAR_1);
 struct hfi1_ibdev *VAR_4 = &VAR_3->dd->verbs_dev;

 FUNC_1(&VAR_4->rdi, VAR_2, VAR_0);
}
