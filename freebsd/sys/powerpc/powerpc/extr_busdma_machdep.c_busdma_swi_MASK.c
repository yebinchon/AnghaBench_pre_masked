
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bus_dmamap {int callback_arg; int callback; int mem; TYPE_1__* dmat; } ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_3__ {int lockfuncarg; int (* lockfunc ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bus_dmamap* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,struct bus_dmamap*,int *,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

void
FUNC_7(void)
{
 bus_dma_tag_t VAR_6;
 struct bus_dmamap *VAR_7;

 FUNC_3(&VAR_3);
 while ((VAR_7 = FUNC_0(&VAR_4)) != ((void*)0)) {
  FUNC_1(&VAR_4, VAR_5);
  FUNC_4(&VAR_3);
  VAR_6 = VAR_7->dmat;
  (VAR_6->lockfunc)(VAR_6->lockfuncarg, VAR_0);
  FUNC_2(VAR_7->dmat, VAR_7, &VAR_7->mem,
        VAR_7->callback, VAR_7->callback_arg,
        VAR_2);
  (VAR_6->lockfunc)(VAR_6->lockfuncarg, VAR_1);
  FUNC_3(&VAR_3);
 }
 FUNC_4(&VAR_3);
}
