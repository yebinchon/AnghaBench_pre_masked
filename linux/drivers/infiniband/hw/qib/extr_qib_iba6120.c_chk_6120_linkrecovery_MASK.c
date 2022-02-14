
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct qib_devdata {TYPE_1__* cspec; int pport; } ;
struct TYPE_2__ {scalar_t__ lastlinkrecov; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct qib_devdata*,int ) ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_3, u64 VAR_4)
{
 int VAR_5 = 1;
 u32 VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7 = FUNC_2(VAR_3, VAR_2);

 if (VAR_7 != VAR_3->cspec->lastlinkrecov) {

  VAR_3->cspec->lastlinkrecov = 0;
  FUNC_1(VAR_3->pport, VAR_1);
  VAR_5 = 0;
 }
 if (VAR_6 == VAR_0)
  VAR_3->cspec->lastlinkrecov =
   FUNC_2(VAR_3, VAR_2);
 return VAR_5;
}
