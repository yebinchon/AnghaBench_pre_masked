
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct TYPE_4__ {TYPE_1__* rq_base; } ;
struct i40iw_sc_qp {TYPE_2__ qp_uk; } ;
struct TYPE_3__ {scalar_t__* elem; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__*,int,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct i40iw_sc_qp *VAR_1, u32 VAR_2)
{
 u64 *VAR_3;
 u64 VAR_4;

 VAR_3 = VAR_1->qp_uk.rq_base[VAR_2].elem;
 FUNC_1(VAR_3, 24, &VAR_4);
 VAR_4 = (VAR_4) ? 0 : FUNC_0(1, VAR_0);
 FUNC_2(VAR_3, 24, VAR_4);
}
