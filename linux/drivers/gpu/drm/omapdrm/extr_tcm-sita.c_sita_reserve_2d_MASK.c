
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_4__ {unsigned long x; unsigned long y; } ;
struct TYPE_3__ {void* y; void* x; } ;
struct tcm_area {TYPE_2__ p0; TYPE_1__ p1; } ;
struct tcm {unsigned long width; int lock; int map_size; int bitmap; } ;
typedef int s32 ;
typedef int s16 ;


 int FUNC_0 (void*,void*,void*,int ,unsigned long*,void*,int ,int ,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static s32 FUNC_3(struct tcm *VAR_0, u16 VAR_1, u16 VAR_2, u16 VAR_3,
    s16 VAR_4, u16 VAR_5,
    struct tcm_area *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 FUNC_1(&(VAR_0->lock));
 VAR_8 = FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4, &VAR_7, VAR_5, VAR_0->bitmap,
   VAR_0->map_size, VAR_0->width);

 if (!VAR_8) {
  VAR_6->p0.x = VAR_7 % VAR_0->width;
  VAR_6->p0.y = VAR_7 / VAR_0->width;
  VAR_6->p1.x = VAR_6->p0.x + VAR_2 - 1;
  VAR_6->p1.y = VAR_6->p0.y + VAR_1 - 1;
 }
 FUNC_2(&(VAR_0->lock));

 return VAR_8;
}
