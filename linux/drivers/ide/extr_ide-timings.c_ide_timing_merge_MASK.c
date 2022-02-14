
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_timing {void* udma; void* cycle; void* recover; void* active; void* cyc8b; void* rec8b; void* act8b; void* setup; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 void* FUNC_0 (void*,void*) ;

void FUNC_1(struct ide_timing *VAR_8, struct ide_timing *VAR_9,
        struct ide_timing *VAR_10, unsigned int VAR_11)
{
 if (VAR_11 & VAR_6)
  VAR_10->setup = FUNC_0(VAR_8->setup, VAR_9->setup);
 if (VAR_11 & VAR_0)
  VAR_10->act8b = FUNC_0(VAR_8->act8b, VAR_9->act8b);
 if (VAR_11 & VAR_4)
  VAR_10->rec8b = FUNC_0(VAR_8->rec8b, VAR_9->rec8b);
 if (VAR_11 & VAR_2)
  VAR_10->cyc8b = FUNC_0(VAR_8->cyc8b, VAR_9->cyc8b);
 if (VAR_11 & VAR_1)
  VAR_10->active = FUNC_0(VAR_8->active, VAR_9->active);
 if (VAR_11 & VAR_5)
  VAR_10->recover = FUNC_0(VAR_8->recover, VAR_9->recover);
 if (VAR_11 & VAR_3)
  VAR_10->cycle = FUNC_0(VAR_8->cycle, VAR_9->cycle);
 if (VAR_11 & VAR_7)
  VAR_10->udma = FUNC_0(VAR_8->udma, VAR_9->udma);
}
