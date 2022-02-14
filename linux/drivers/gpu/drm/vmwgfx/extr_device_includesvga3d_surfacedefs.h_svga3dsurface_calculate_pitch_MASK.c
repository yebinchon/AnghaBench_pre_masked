
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int width; } ;
typedef TYPE_1__ surf_size_struct ;
struct svga3d_surface_desc {int pitch_bytes_per_block; } ;


 int FUNC_0 (struct svga3d_surface_desc const*,TYPE_1__ const*,TYPE_1__*) ;

__attribute__((used)) static inline u32
FUNC_1(const struct svga3d_surface_desc *VAR_0,
         const surf_size_struct *VAR_1)
{
 u32 VAR_2;
 surf_size_struct VAR_3;

 FUNC_0(VAR_0, VAR_1, &VAR_3);

 VAR_2 = VAR_3.width * VAR_0->pitch_bytes_per_block;

 return VAR_2;
}
