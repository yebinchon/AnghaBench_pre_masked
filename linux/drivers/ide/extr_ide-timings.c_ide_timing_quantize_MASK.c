
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_timing {void* udma; void* cycle; void* recover; void* active; void* cyc8b; void* rec8b; void* act8b; void* setup; } ;


 void* FUNC_0 (void*,int) ;

__attribute__((used)) static void FUNC_1(struct ide_timing *VAR_0, struct ide_timing *VAR_1,
    int VAR_2, int VAR_3)
{
 VAR_1->setup = FUNC_0(VAR_0->setup, VAR_2);
 VAR_1->act8b = FUNC_0(VAR_0->act8b, VAR_2);
 VAR_1->rec8b = FUNC_0(VAR_0->rec8b, VAR_2);
 VAR_1->cyc8b = FUNC_0(VAR_0->cyc8b, VAR_2);
 VAR_1->active = FUNC_0(VAR_0->active, VAR_2);
 VAR_1->recover = FUNC_0(VAR_0->recover, VAR_2);
 VAR_1->cycle = FUNC_0(VAR_0->cycle, VAR_2);
 VAR_1->udma = FUNC_0(VAR_0->udma, VAR_3);
}
