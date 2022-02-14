
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct siw_qp_attrs {int state; } ;
struct TYPE_3__ {int state; } ;
struct siw_qp {TYPE_1__ attrs; } ;
struct TYPE_4__ {int wr_status; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct siw_qp*,char*,int ,int ) ;
 int * VAR_2 ;
 int FUNC_2 (struct siw_qp*) ;
 int FUNC_3 (struct siw_qp*) ;
 TYPE_2__* FUNC_4 (struct siw_qp*) ;

__attribute__((used)) static int FUNC_5(struct siw_qp *VAR_3,
           struct siw_qp_attrs *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_4->state) {
 case 128:
  FUNC_0(FUNC_4(VAR_3)->wr_status != VAR_1);
  VAR_3->attrs.state = 128;
  break;

 case 130:




  break;

 case 129:




  VAR_3->attrs.state = 129;

  if (FUNC_4(VAR_3)->wr_status != VAR_1)
   FUNC_3(VAR_3);

  FUNC_2(VAR_3);
  break;

 default:
  FUNC_1(VAR_3, "state transition undefined: %s => %s\n",
      VAR_2[VAR_3->attrs.state],
      VAR_2[VAR_4->state]);

  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
