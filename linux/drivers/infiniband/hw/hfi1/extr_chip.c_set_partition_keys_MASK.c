
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_pportdata {int* pkeys; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (struct hfi1_devdata*,char*) ;
 int FUNC_2 (struct hfi1_devdata*) ;
 int FUNC_3 (struct hfi1_devdata*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct hfi1_pportdata *VAR_4)
{
 struct hfi1_devdata *VAR_5 = VAR_4->dd;
 u64 VAR_6 = 0;
 int VAR_7;

 FUNC_1(VAR_5, "Setting partition keys\n");
 for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_5); VAR_7++) {
  VAR_6 |= (VAR_4->pkeys[VAR_7] &
   VAR_2) <<
   ((VAR_7 % 4) *
    VAR_3);

  if ((VAR_7 % 4) == 3) {
   FUNC_3(VAR_5, VAR_1 +
      ((VAR_7 - 3) * 2), VAR_6);
   VAR_6 = 0;
  }
 }


 FUNC_0(VAR_5, VAR_0);
}
