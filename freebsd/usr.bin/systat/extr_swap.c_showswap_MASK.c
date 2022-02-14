
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double ksw_total; double ksw_used; } ;


 int FUNC_0 (double) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int ,int,int *,int *) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int ,int,scalar_t__,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ,char) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,scalar_t__) ;
 int VAR_10 ;
 int FUNC_7 (int ,char*,scalar_t__,int ) ;

void
FUNC_8(void)
{
 int VAR_11;
 int VAR_12;

 if (VAR_4 != VAR_7 || VAR_1 != VAR_6 || VAR_9 != VAR_8)
  FUNC_2();

 for (VAR_12 = 0; VAR_12 <= VAR_4; ++VAR_12) {
  if (VAR_12 == VAR_4) {
   if (VAR_4 == 1)
    break;
  }

  if (VAR_3[VAR_12].ksw_total == 0) {
   FUNC_3(
       VAR_10,
       VAR_12 + 1,
       VAR_1 + VAR_2 + VAR_9 + 1,
       "(swap not configured)"
   );
   continue;
  }

  FUNC_6(VAR_10, VAR_12 + 1, VAR_1);

  FUNC_7(VAR_10, "%*d", VAR_2, FUNC_0(VAR_3[VAR_12].ksw_total));
  FUNC_7(VAR_10, "%*d", VAR_9, FUNC_0(VAR_3[VAR_12].ksw_used));

  VAR_11 = 50.0 * VAR_3[VAR_12].ksw_used / VAR_3[VAR_12].ksw_total + 1;

  FUNC_4(VAR_10, ' ');
  while (VAR_11--)
   FUNC_4(VAR_10, 'X');
  FUNC_5(VAR_10);
 }
 FUNC_1(12, 0, 18, &VAR_0, &VAR_5);
}
