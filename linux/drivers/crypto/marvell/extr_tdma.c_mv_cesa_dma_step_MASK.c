
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* first; } ;
struct mv_cesa_req {TYPE_2__ chain; struct mv_cesa_engine* engine; } ;
struct mv_cesa_engine {scalar_t__ regs; } ;
struct TYPE_3__ {int cur_dma; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct mv_cesa_engine*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

void FUNC_5(struct mv_cesa_req *VAR_14)
{
 struct mv_cesa_engine *VAR_15 = VAR_14->engine;

 FUNC_4(0, VAR_15->regs + VAR_0);

 FUNC_1(VAR_15, VAR_7);
 FUNC_4(VAR_9 | VAR_13 |
         VAR_12 | VAR_10,
         VAR_15->regs + VAR_8);

 FUNC_4(VAR_1 | VAR_3 |
         VAR_2 | VAR_4,
         VAR_15->regs + VAR_0);
 FUNC_4(VAR_14->chain.first->cur_dma,
         VAR_15->regs + VAR_11);
 FUNC_0(FUNC_2(VAR_15->regs + VAR_5) &
        VAR_6);
 FUNC_3(VAR_6, VAR_15->regs + VAR_5);
}
