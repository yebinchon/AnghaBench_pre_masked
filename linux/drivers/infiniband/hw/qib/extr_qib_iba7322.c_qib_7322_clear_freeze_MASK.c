
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_devdata {int num_pports; unsigned long long control; TYPE_2__* pport; TYPE_1__* cspec; } ;
struct TYPE_4__ {scalar_t__ link_speed_supported; } ;
struct TYPE_3__ {unsigned long long errormask; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qib_devdata*,int) ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int ,unsigned long long) ;
 int FUNC_3 (TYPE_2__*,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_4(struct qib_devdata *VAR_8)
{
 int VAR_9;


 FUNC_2(VAR_8, VAR_3, 0ULL);

 for (VAR_9 = 0; VAR_9 < VAR_8->num_pports; ++VAR_9)
  if (VAR_8->pport[VAR_9].link_speed_supported)
   FUNC_3(VAR_8->pport + VAR_9, VAR_7,
         0ULL);


 FUNC_0(VAR_8, 0);


 FUNC_2(VAR_8, VAR_1, VAR_8->control);
 FUNC_1(VAR_8, VAR_5);







 FUNC_2(VAR_8, VAR_4, 0ULL);
 FUNC_2(VAR_8, VAR_2, VAR_0);
 FUNC_2(VAR_8, VAR_3, VAR_8->cspec->errormask);

 for (VAR_9 = 0; VAR_9 < VAR_8->num_pports; ++VAR_9) {
  if (!VAR_8->pport[VAR_9].link_speed_supported)
   continue;
  FUNC_3(VAR_8->pport + VAR_9, VAR_6, ~0Ull);
  FUNC_3(VAR_8->pport + VAR_9, VAR_7, ~0Ull);
 }
 FUNC_0(VAR_8, 1);
}
