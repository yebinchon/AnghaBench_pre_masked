
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ chunkshift; } ;
struct bitmap {TYPE_2__* mddev; TYPE_1__ counts; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {scalar_t__ recovery_cp; } ;


 int FUNC_0 (struct bitmap*,scalar_t__) ;
 int FUNC_1 (struct bitmap*,scalar_t__,int) ;

void FUNC_2(struct bitmap *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 for (VAR_3 = VAR_1; VAR_3 <= VAR_2; VAR_3++) {
  sector_t VAR_4 = (sector_t)VAR_3 << VAR_0->counts.chunkshift;
  FUNC_1(VAR_0, VAR_4, 1);
  FUNC_0(VAR_0, VAR_4);
  if (VAR_4 < VAR_0->mddev->recovery_cp)




   VAR_0->mddev->recovery_cp = VAR_4;
 }
}
