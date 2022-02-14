
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {unsigned long long control; TYPE_1__* cspec; int pport; } ;
struct TYPE_2__ {unsigned long long errormask; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qib_devdata*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_devdata*,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_5(struct qib_devdata *VAR_6)
{

 FUNC_4(VAR_6, VAR_3, 0ULL);


 FUNC_0(VAR_6, 0);

 FUNC_1(VAR_6->pport);


 FUNC_4(VAR_6, VAR_1, VAR_6->control);
 FUNC_3(VAR_6, VAR_5);


 FUNC_2(VAR_6);







 FUNC_4(VAR_6, VAR_4, 0ULL);
 FUNC_4(VAR_6, VAR_2, VAR_0);
 FUNC_4(VAR_6, VAR_3, VAR_6->cspec->errormask);
 FUNC_0(VAR_6, 1);
}
