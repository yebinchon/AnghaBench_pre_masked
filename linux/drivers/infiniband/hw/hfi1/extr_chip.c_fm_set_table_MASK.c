
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hfi1_pportdata*,void*) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (struct hfi1_pportdata*,int ,int ,void*) ;
 struct vl_arb_cache* FUNC_3 (struct hfi1_pportdata*,int ) ;
 int FUNC_4 (struct vl_arb_cache*,void*) ;
 int FUNC_5 (struct vl_arb_cache*,void*) ;
 int FUNC_6 (struct hfi1_pportdata*,int ) ;

int FUNC_7(struct hfi1_pportdata *VAR_7, int VAR_8, void *VAR_9)
{
 int VAR_10 = 0;
 struct vl_arb_cache *VAR_11;

 switch (VAR_8) {
 case 129:
  VAR_11 = FUNC_3(VAR_7, VAR_1);
  if (FUNC_4(VAR_11, VAR_9)) {
   FUNC_6(VAR_7, VAR_1);
   break;
  }
  FUNC_5(VAR_11, VAR_9);
  FUNC_6(VAR_7, VAR_1);
  VAR_10 = FUNC_2(VAR_7, VAR_3,
         VAR_5, VAR_9);
  break;
 case 128:
  VAR_11 = FUNC_3(VAR_7, VAR_2);
  if (FUNC_4(VAR_11, VAR_9)) {
   FUNC_6(VAR_7, VAR_2);
   break;
  }
  FUNC_5(VAR_11, VAR_9);
  FUNC_6(VAR_7, VAR_2);
  VAR_10 = FUNC_2(VAR_7, VAR_4,
         VAR_6, VAR_9);
  break;
 case 131:
  VAR_10 = FUNC_0(VAR_7, VAR_9);
  break;
 case 130:
  FUNC_1(VAR_7->dd, VAR_9);
  break;
 default:
  VAR_10 = -VAR_0;
 }
 return VAR_10;
}
