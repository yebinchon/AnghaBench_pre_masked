
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {int hw_pidx; struct qib_devdata* dd; } ;
struct qib_devdata {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qib_devdata*,int ,int,int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct qib_pportdata *VAR_1, int VAR_2, unsigned VAR_3,
        unsigned VAR_4)
{
 struct qib_devdata *VAR_5 = VAR_1->dd;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  FUNC_1(VAR_5, FUNC_0(VAR_1->hw_pidx), (VAR_6 + (VAR_6 >> 1)), VAR_2,
   VAR_3, VAR_4);
  FUNC_1(VAR_5, FUNC_0(VAR_1->hw_pidx), (VAR_6 + (VAR_6 >> 1)), VAR_2,
   0, 0);
 }
}
