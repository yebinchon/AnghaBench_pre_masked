
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imc_pmu_ref {scalar_t__ refc; } ;
struct TYPE_3__ {int event_init; } ;
struct TYPE_4__ {TYPE_1__ pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 struct imc_pmu_ref* VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (unsigned int,int *) ;
 int FUNC_5 (unsigned int) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*,unsigned int,int) ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;
 struct imc_pmu_ref *VAR_10;





 if (!FUNC_4(VAR_7, &VAR_2))
  return 0;
 if (!VAR_3->pmu.event_init)
  return 0;


 VAR_9 = FUNC_2(FUNC_0(VAR_7));

 if (FUNC_8(VAR_9 == VAR_7))
  VAR_9 = FUNC_1(FUNC_0(VAR_7), VAR_7);

 if (VAR_9 >= 0 && VAR_9 < VAR_5) {
  FUNC_3(VAR_9, &VAR_2);
  FUNC_7(&VAR_3->pmu, VAR_7, VAR_9);
 } else {





  FUNC_6(VAR_1,
           FUNC_5(VAR_7));
  VAR_8 = VAR_7 / VAR_6;
  VAR_10 = &VAR_4[VAR_8];
  if (!VAR_10)
   return -VAR_0;

  VAR_10->refc = 0;
 }
 return 0;
}
