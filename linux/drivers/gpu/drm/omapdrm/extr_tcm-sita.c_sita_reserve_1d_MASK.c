
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_4__ {unsigned long x; unsigned long y; } ;
struct TYPE_3__ {unsigned long x; unsigned long y; } ;
struct tcm_area {TYPE_2__ p1; TYPE_1__ p0; } ;
struct tcm {unsigned long width; int lock; int map_size; int bitmap; } ;
typedef int s32 ;


 int FUNC_0 (unsigned long,unsigned long*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static s32 FUNC_3(struct tcm *VAR_0, u32 VAR_1,
      struct tcm_area *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&(VAR_0->lock));
 VAR_4 = FUNC_0(VAR_1, &VAR_3, VAR_0->bitmap, VAR_0->map_size);
 if (!VAR_4) {
  VAR_2->p0.x = VAR_3 % VAR_0->width;
  VAR_2->p0.y = VAR_3 / VAR_0->width;
  VAR_2->p1.x = (VAR_3 + VAR_1 - 1) % VAR_0->width;
  VAR_2->p1.y = (VAR_3 + VAR_1 - 1) / VAR_0->width;
 }
 FUNC_2(&(VAR_0->lock));

 return VAR_4;
}
