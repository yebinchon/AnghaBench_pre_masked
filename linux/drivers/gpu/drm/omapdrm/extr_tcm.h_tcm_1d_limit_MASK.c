
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int x; scalar_t__ y; } ;
struct TYPE_4__ {int x; scalar_t__ y; } ;
struct tcm_area {TYPE_3__* tcm; TYPE_2__ p0; TYPE_1__ p1; } ;
typedef int s32 ;
struct TYPE_6__ {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcm_area*) ;

__attribute__((used)) static inline s32 FUNC_1(struct tcm_area *VAR_2, u32 VAR_3)
{
 if (FUNC_0(VAR_2) < VAR_3)
  return -VAR_1;
 if (!VAR_3)
  return -VAR_0;

 VAR_2->p1.x = (VAR_2->p0.x + VAR_3 - 1) % VAR_2->tcm->width;
 VAR_2->p1.y = VAR_2->p0.y + ((VAR_2->p0.x + VAR_3 - 1) / VAR_2->tcm->width);
 return 0;
}
