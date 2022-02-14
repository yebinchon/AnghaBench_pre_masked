
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int x1; int y1; } ;
struct TYPE_4__ {int x1; int y1; } ;
struct vkms_composer {int offset; int pitch; int cpp; TYPE_2__ dst; TYPE_1__ src; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void*,void*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, void *VAR_1,
    struct vkms_composer *VAR_2,
    struct vkms_composer *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;

 int VAR_10 = VAR_3->src.x1 >> 16;
 int VAR_11 = VAR_3->src.y1 >> 16;

 int VAR_12 = VAR_3->dst.x1;
 int VAR_13 = VAR_3->dst.y1;
 int VAR_14 = FUNC_0(&VAR_3->dst);
 int VAR_15 = FUNC_1(&VAR_3->dst);

 int VAR_16 = VAR_11 + VAR_14;
 int VAR_17 = VAR_10 + VAR_15;

 for (VAR_4 = VAR_11, VAR_7 = VAR_13; VAR_4 < VAR_16; ++VAR_4) {
  for (VAR_5 = VAR_10, VAR_6 = VAR_12; VAR_5 < VAR_17; ++VAR_5) {
   VAR_9 = VAR_2->offset
         + (VAR_7 * VAR_2->pitch)
         + (VAR_6++ * VAR_2->cpp);
   VAR_8 = VAR_3->offset
         + (VAR_4 * VAR_3->pitch)
         + (VAR_5 * VAR_3->cpp);

   FUNC_2(VAR_0 + VAR_9,
          VAR_1 + VAR_8, sizeof(u32));
  }
  VAR_7++;
 }
}
