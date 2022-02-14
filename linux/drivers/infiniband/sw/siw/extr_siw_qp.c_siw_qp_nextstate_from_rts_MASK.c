
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



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct siw_qp*,int ,int ,int ,int) ;
 int FUNC_1 (struct siw_qp*) ;
 int FUNC_2 (struct siw_qp*) ;
 TYPE_2__* FUNC_3 (struct siw_qp*) ;

__attribute__((used)) static int FUNC_4(struct siw_qp *VAR_4,
         struct siw_qp_attrs *VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_5->state) {
 case 130:
  if (FUNC_3(VAR_4)->wr_status == VAR_2) {
   VAR_4->attrs.state = 130;
  } else {
   VAR_4->attrs.state = 129;
   FUNC_2(VAR_4);
  }
  FUNC_1(VAR_4);

  VAR_6 = 1;
  break;

 case 128:
  VAR_4->attrs.state = 128;

  FUNC_0(VAR_4, VAR_3,
       VAR_1,
       VAR_0, 1);
  VAR_6 = 1;
  break;

 case 129:
  FUNC_2(VAR_4);
  FUNC_1(VAR_4);
  VAR_4->attrs.state = 129;
  VAR_6 = 1;
  break;

 default:
  break;
 }
 return VAR_6;
}
