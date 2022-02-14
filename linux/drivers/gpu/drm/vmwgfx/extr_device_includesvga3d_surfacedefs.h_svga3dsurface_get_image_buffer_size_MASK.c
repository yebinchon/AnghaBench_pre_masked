
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int depth; int height; int width; } ;
typedef TYPE_1__ surf_size_struct ;
struct svga3d_surface_desc {int bytes_per_block; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct svga3d_surface_desc const*,TYPE_1__ const*) ;
 int FUNC_2 (struct svga3d_surface_desc const*,TYPE_1__ const*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct svga3d_surface_desc const*) ;

__attribute__((used)) static inline u32
FUNC_4(const struct svga3d_surface_desc *VAR_0,
        const surf_size_struct *VAR_1,
        u32 VAR_2)
{
 surf_size_struct VAR_3;
 u32 VAR_4, VAR_5;

 FUNC_2(VAR_0, VAR_1, &VAR_3);

 if (FUNC_3(VAR_0)) {
  VAR_5 = FUNC_0(VAR_3.width,
         VAR_3.height);
  VAR_5 = FUNC_0(VAR_5, VAR_3.depth);
  VAR_5 = FUNC_0(VAR_5, VAR_0->bytes_per_block);
  return VAR_5;
 }

 if (VAR_2 == 0)
  VAR_2 = FUNC_1(VAR_0, VAR_1);

 VAR_4 = FUNC_0(VAR_3.height, VAR_2);
 VAR_5 = FUNC_0(VAR_4, VAR_3.depth);

 return VAR_5;
}
