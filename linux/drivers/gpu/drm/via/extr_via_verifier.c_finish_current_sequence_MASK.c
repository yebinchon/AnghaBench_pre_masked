
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {int unfinished; unsigned int* tex_level_lo; size_t texture; unsigned int* tex_level_hi; size_t** t_addr; size_t** pitch; size_t** height; int* tex_npot; int dev; int agp_texture; int d_addr; int z_addr; } ;
typedef TYPE_1__ drm_via_state_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;

 int VAR_0 ;

 int FUNC_2 (TYPE_1__*,unsigned long,unsigned long,int ) ;


__attribute__((used)) static __inline__ int FUNC_3(drm_via_state_t * VAR_1)
{
 switch (VAR_1->unfinished) {
 case 128:
  FUNC_0("Z Buffer start address is 0x%x\n", VAR_1->z_addr);
  break;
 case 130:
  FUNC_0("Destination start address is 0x%x\n",
     VAR_1->d_addr);
  break;
 case 129:
  if (VAR_1->agp_texture) {
   unsigned VAR_2 =
       VAR_1->tex_level_lo[VAR_1->texture];
   unsigned VAR_3 = VAR_1->tex_level_hi[VAR_1->texture];
   unsigned long VAR_4 = ~0, VAR_5 = 0, VAR_6;
   uint32_t *VAR_7, *VAR_8, *VAR_9, VAR_10;
   unsigned VAR_11;
   int VAR_12;

   if (VAR_3 > 9)
    VAR_3 = 9;
   if (VAR_2 > 9)
    VAR_2 = 9;

   VAR_7 =
       &(VAR_1->t_addr[VAR_10 = VAR_1->texture][VAR_2]);
   VAR_8 = &(VAR_1->pitch[VAR_10][VAR_2]);
   VAR_9 = &(VAR_1->height[VAR_10][VAR_2]);
   VAR_12 = VAR_1->tex_npot[VAR_10];
   for (VAR_11 = VAR_2; VAR_11 <= VAR_3; ++VAR_11) {
    VAR_6 = *VAR_7++;
    if (VAR_6 < VAR_4)
     VAR_4 = VAR_6;
    if (VAR_11 == 0 && VAR_12)
     VAR_6 += (*VAR_9++ * *VAR_8++);
    else
     VAR_6 += (*VAR_9++ << *VAR_8++);
    if (VAR_6 > VAR_5)
     VAR_5 = VAR_6;
   }

   if (!FUNC_2
       (VAR_1, VAR_4, VAR_5 - VAR_4, VAR_1->dev)) {
    FUNC_1
        ("AGP texture is not in allowed map\n");
    return 2;
   }
  }
  break;
 default:
  break;
 }
 VAR_1->unfinished = VAR_0;
 return 0;
}
