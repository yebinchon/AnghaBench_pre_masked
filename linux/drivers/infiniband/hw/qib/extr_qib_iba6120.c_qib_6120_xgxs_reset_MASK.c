
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qib_devdata*,int ) ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct qib_pportdata *VAR_5)
{
 u64 VAR_6, VAR_7;
 struct qib_devdata *VAR_8 = VAR_5->dd;

 VAR_7 = FUNC_1(VAR_8, VAR_4);
 VAR_6 = VAR_7 | VAR_1;
 VAR_7 &= ~VAR_1;
 FUNC_2(VAR_8, VAR_2,
         VAR_8->control & ~VAR_0);
 FUNC_2(VAR_8, VAR_4, VAR_6);
 FUNC_0(VAR_8, VAR_3);
 FUNC_2(VAR_8, VAR_4, VAR_7);
 FUNC_2(VAR_8, VAR_2, VAR_8->control);
}
