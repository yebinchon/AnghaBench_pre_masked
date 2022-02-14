
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tcq_rd; int tcq_ed; int tcq_st; } ;
struct TYPE_6__ {scalar_t__ host_tcq_wr; TYPE_1__ ffL; } ;
typedef TYPE_2__ IADEV ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(IADEV *VAR_0) {
   int VAR_1 = 0;
   FUNC_0(VAR_0);
   if (VAR_0->host_tcq_wr >= VAR_0->ffL.tcq_rd)
      VAR_1 = (VAR_0->host_tcq_wr - VAR_0->ffL.tcq_rd) / 2;
   else
      VAR_1 = (VAR_0->ffL.tcq_ed - VAR_0->ffL.tcq_rd + 2 + VAR_0->host_tcq_wr -
                   VAR_0->ffL.tcq_st) / 2;
   return VAR_1;
}
