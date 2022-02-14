
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int piobcnt2k; int piobcnt4k; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qib_devdata*,unsigned long*,int) ;
 unsigned long FUNC_1 (struct qib_devdata*,scalar_t__) ;
 int FUNC_2 (struct qib_devdata*,scalar_t__,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct qib_pportdata *VAR_3)
{
 struct qib_devdata *VAR_4 = VAR_3->dd;
 u32 VAR_5;
 int VAR_6;
 u32 VAR_7 = VAR_4->piobcnt2k + VAR_4->piobcnt4k + VAR_1;
 u32 VAR_8 = (VAR_7 + VAR_0 - 1) / VAR_0;
 unsigned long VAR_9[4];





 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_8; ++VAR_5) {
  VAR_9[VAR_5] = FUNC_1(VAR_4, VAR_2 + VAR_5);
  if (VAR_9[VAR_5]) {
   VAR_6 = 1;
   FUNC_2(VAR_4, VAR_2 + VAR_5, VAR_9[VAR_5]);
  }
 }

 if (VAR_6)
  FUNC_0(VAR_4, VAR_9, VAR_7);
}
