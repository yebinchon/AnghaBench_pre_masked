
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mv_cesa_engine {int load; } ;
struct TYPE_4__ {struct mv_cesa_engine* engines; TYPE_1__* caps; } ;
struct TYPE_3__ {int nengines; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static inline struct mv_cesa_engine *FUNC_2(int VAR_2)
{
 int VAR_3;
 u32 VAR_4 = VAR_0;
 struct mv_cesa_engine *VAR_5 = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1->caps->nengines; VAR_3++) {
  struct mv_cesa_engine *VAR_6 = VAR_1->engines + VAR_3;
  u32 VAR_7 = FUNC_1(&VAR_6->load);
  if (VAR_7 < VAR_4) {
   VAR_4 = VAR_7;
   VAR_5 = VAR_6;
  }
 }

 FUNC_0(VAR_2, &VAR_5->load);

 return VAR_5;
}
