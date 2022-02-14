
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {TYPE_1__* cspec; } ;
struct TYPE_2__ {int errormask; } ;


 int FUNC_0 (struct qib_devdata*) ;
 int VAR_0 ;
 int FUNC_1 (struct qib_devdata*,int ,int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct qib_devdata *VAR_2 = (struct qib_devdata *)VAR_1;

 FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_0, VAR_2->cspec->errormask);
}
