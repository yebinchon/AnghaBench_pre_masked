
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vl_arb_cache {int dummy; } ;
struct hfi1_pportdata {int dd; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,int *) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,int ,void*) ;
 int FUNC_3 (struct vl_arb_cache*,void*) ;
 struct vl_arb_cache* FUNC_4 (struct hfi1_pportdata*,int ) ;
 int FUNC_5 (struct hfi1_pportdata*,int ) ;

int FUNC_6(struct hfi1_pportdata *VAR_4, int VAR_5, void *VAR_6)

{
 int VAR_7;
 struct vl_arb_cache *VAR_8;

 switch (VAR_5) {
 case 131:
  VAR_7 = 256;




  VAR_8 = FUNC_4(VAR_4, VAR_1);
  FUNC_3(VAR_8, VAR_6);
  FUNC_5(VAR_4, VAR_1);
  break;
 case 130:
  VAR_7 = 256;




  VAR_8 = FUNC_4(VAR_4, VAR_2);
  FUNC_3(VAR_8, VAR_6);
  FUNC_5(VAR_4, VAR_2);
  break;
 case 133:
  VAR_7 = FUNC_0(VAR_4->dd, VAR_6, ((void*)0));
  break;
 case 132:
  VAR_7 = FUNC_1(VAR_4->dd, VAR_6);
  break;
 case 129:
  VAR_7 = 256;

  FUNC_2(VAR_4->dd, VAR_3, VAR_6);
  break;
 case 128:
  VAR_7 = 256;




  break;
 default:
  return -VAR_0;
 }
 return VAR_7;
}
