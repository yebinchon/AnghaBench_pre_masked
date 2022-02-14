
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int status; int goto_error; int aeth_syndrome; } ;
struct rxe_qp {TYPE_1__ resp; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;



__attribute__((used)) static void FUNC_0(struct rxe_qp *VAR_0, u8 VAR_1,
         enum ib_wc_status VAR_2)
{
 VAR_0->resp.aeth_syndrome = VAR_1;
 VAR_0->resp.status = VAR_2;


 VAR_0->resp.goto_error = 1;
}
