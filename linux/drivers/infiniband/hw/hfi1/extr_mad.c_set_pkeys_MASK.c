
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct hfi1_pportdata {scalar_t__* pkeys; } ;
struct hfi1_devdata {struct hfi1_pportdata* pport; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct hfi1_devdata*,int) ;
 int FUNC_2 (struct hfi1_pportdata*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hfi1_devdata *VAR_2, u8 VAR_3, u16 *VAR_4)
{
 struct hfi1_pportdata *VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;







 VAR_5 = VAR_2->pport + (VAR_3 - 1);



 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->pkeys); VAR_6++) {
  if (VAR_4[VAR_6] == VAR_1) {
   VAR_8 = 1;
   break;
  }
 }

 if (!VAR_8)
  return 1;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->pkeys); VAR_6++) {
  u16 VAR_9 = VAR_4[VAR_6];
  u16 VAR_10 = VAR_5->pkeys[VAR_6];

  if (VAR_9 == VAR_10)
   continue;





  VAR_5->pkeys[VAR_6] = VAR_9;
  VAR_7 = 1;
 }

 if (VAR_7) {
  (void)FUNC_2(VAR_5, VAR_0, 0);
  FUNC_1(VAR_2, VAR_3);
 }

 return 0;
}
