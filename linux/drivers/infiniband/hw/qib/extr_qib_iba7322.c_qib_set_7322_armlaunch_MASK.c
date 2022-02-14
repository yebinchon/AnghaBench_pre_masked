
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qib_devdata {TYPE_1__* cspec; } ;
struct TYPE_2__ {int errormask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qib_devdata*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct qib_devdata *VAR_3, u32 VAR_4)
{
 if (VAR_4) {
  FUNC_0(VAR_3, VAR_1, VAR_0);
  VAR_3->cspec->errormask |= VAR_0;
 } else
  VAR_3->cspec->errormask &= ~VAR_0;
 FUNC_0(VAR_3, VAR_2, VAR_3->cspec->errormask);
}
