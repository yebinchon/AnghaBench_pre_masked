
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int) ;
 int FUNC_3 (struct hfi1_devdata*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hfi1_devdata*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct hfi1_pportdata *VAR_12)
{
 struct hfi1_devdata *VAR_13 = VAR_12->dd;
 u64 VAR_14;
 u16 VAR_15 = 0;
 u8 VAR_16;

 VAR_14 = FUNC_3(VAR_13, VAR_2);
 if ((VAR_14 & VAR_5) == 0)
  return;


 FUNC_5(VAR_13, VAR_1, 0);


 VAR_16 = (VAR_14 >> VAR_7)
   & VAR_6;
 VAR_15 = (VAR_14 >> VAR_4)
   & VAR_3;

 switch (VAR_16) {
 case 132:
 case 130:
 case 131:
 case 129:
 case 128:
 case 135:
  FUNC_1(VAR_13, "8051 request: request 0x%x not supported\n",
       VAR_16);
  FUNC_2(VAR_13, VAR_8, 0);
  break;
 case 133:

  FUNC_5(VAR_13, VAR_0, VAR_10);

  (void)FUNC_3(VAR_13, VAR_0);

  FUNC_4(1);

  FUNC_5(VAR_13, VAR_0, VAR_11);
  FUNC_2(VAR_13, VAR_9, 0);

  break;
 case 136:
  FUNC_2(VAR_13, VAR_9, 0);
  break;

 case 134:
  FUNC_2(VAR_13, VAR_9, VAR_15);
  break;
 default:
  FUNC_0(VAR_13, "8051 request: unknown request 0x%x\n", VAR_16);
  FUNC_2(VAR_13, VAR_8, 0);
  break;
 }
}
