
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {scalar_t__ piobcnt4k; scalar_t__ piobcnt2k; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qib_devdata*,unsigned long*,scalar_t__) ;
 unsigned long FUNC_1 (struct qib_devdata*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct qib_pportdata *VAR_1)
{
 unsigned long VAR_2[2];
 struct qib_devdata *VAR_3 = VAR_1->dd;





 VAR_2[0] = FUNC_1(VAR_3, VAR_0);
 VAR_2[1] = FUNC_1(VAR_3, VAR_0 + 1);

 if (VAR_2[0] || VAR_2[1])
  FUNC_0(VAR_3, VAR_2,
           VAR_3->piobcnt2k + VAR_3->piobcnt4k);
}
