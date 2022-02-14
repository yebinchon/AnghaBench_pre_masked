
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct clocksource {int dummy; } ;
struct TYPE_3__ {int cmr; int rc; int imr; scalar_t__ clken; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct clocksource *VAR_14)
{
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_13); VAR_15++) {

  FUNC_2(VAR_13[VAR_15].cmr, VAR_12 + FUNC_1(VAR_15, VAR_5));
  FUNC_2(VAR_13[VAR_15].rc, VAR_12 + FUNC_1(VAR_15, VAR_10));
  FUNC_2(0, VAR_12 + FUNC_1(VAR_15, VAR_8));
  FUNC_2(0, VAR_12 + FUNC_1(VAR_15, VAR_9));

  FUNC_2(0xff, VAR_12 + FUNC_1(VAR_15, VAR_6));

  FUNC_2(VAR_13[VAR_15].imr, VAR_12 + FUNC_1(VAR_15, VAR_7));

  if (VAR_13[VAR_15].clken)
   FUNC_2(VAR_2, VAR_12 + FUNC_1(VAR_15, VAR_4));
 }


 FUNC_2(VAR_11, VAR_12 + VAR_1);

 FUNC_2(VAR_3, VAR_12 + VAR_0);
}
