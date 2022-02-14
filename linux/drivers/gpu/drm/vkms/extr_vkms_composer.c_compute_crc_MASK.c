
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_3__ {int x1; int y1; } ;
struct vkms_composer {int offset; int pitch; int cpp; TYPE_1__ src; } ;


 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void*,int ,int) ;

__attribute__((used)) static uint32_t FUNC_4(void *VAR_0, struct vkms_composer *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 int VAR_5 = VAR_1->src.x1 >> 16;
 int VAR_6 = VAR_1->src.y1 >> 16;
 int VAR_7 = FUNC_1(&VAR_1->src) >> 16;
 int VAR_8 = FUNC_2(&VAR_1->src) >> 16;
 u32 VAR_9 = 0;

 for (VAR_2 = VAR_6; VAR_2 < VAR_6 + VAR_7; ++VAR_2) {
  for (VAR_3 = VAR_5; VAR_3 < VAR_5 + VAR_8; ++VAR_3) {
   VAR_4 = VAR_1->offset
         + (VAR_2 * VAR_1->pitch)
         + (VAR_3 * VAR_1->cpp);

   FUNC_3(VAR_0 + VAR_4 + 24, 0, 8);
   VAR_9 = FUNC_0(VAR_9, VAR_0 + VAR_4,
           sizeof(u32));
  }
 }

 return VAR_9;
}
