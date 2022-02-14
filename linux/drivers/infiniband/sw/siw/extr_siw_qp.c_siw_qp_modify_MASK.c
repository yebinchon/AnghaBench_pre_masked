
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_qp_attrs {size_t state; } ;
struct TYPE_2__ {size_t state; } ;
struct siw_qp {TYPE_1__ attrs; } ;
typedef enum siw_qp_attr_mask { ____Placeholder_siw_qp_attr_mask } siw_qp_attr_mask ;


 int VAR_0 ;





 int FUNC_0 (struct siw_qp*,char*,int ,int ) ;
 int FUNC_1 (struct siw_qp*,int ) ;
 int FUNC_2 (struct siw_qp*,struct siw_qp_attrs*,int) ;
 int FUNC_3 (struct siw_qp*,struct siw_qp_attrs*) ;
 int FUNC_4 (struct siw_qp*,struct siw_qp_attrs*,int) ;
 int FUNC_5 (struct siw_qp*,struct siw_qp_attrs*) ;
 int FUNC_6 (struct siw_qp*,struct siw_qp_attrs*) ;
 int * VAR_1 ;

int FUNC_7(struct siw_qp *VAR_2, struct siw_qp_attrs *VAR_3,
    enum siw_qp_attr_mask VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;

 if (!VAR_4)
  return 0;

 FUNC_0(VAR_2, "state: %s => %s\n",
     VAR_1[VAR_2->attrs.state],
     VAR_1[VAR_3->state]);

 if (VAR_4 != VAR_0)
  FUNC_2(VAR_2, VAR_3, VAR_4);

 if (!(VAR_4 & VAR_0))
  return 0;

 switch (VAR_2->attrs.state) {
 case 131:
 case 130:
  VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4);
  break;

 case 129:
  VAR_5 = FUNC_5(VAR_2, VAR_3);
  break;

 case 128:
  FUNC_6(VAR_2, VAR_3);
  break;

 case 132:
  FUNC_3(VAR_2, VAR_3);
  break;
 default:
  break;
 }
 if (VAR_5)
  FUNC_1(VAR_2, 0);

 return VAR_6;
}
