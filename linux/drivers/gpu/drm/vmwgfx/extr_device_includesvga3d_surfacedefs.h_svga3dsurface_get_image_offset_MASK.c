
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int surf_size_struct ;
struct svga3d_surface_desc {int dummy; } ;
typedef int SVGA3dSurfaceFormat ;


 struct svga3d_surface_desc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct svga3d_surface_desc const*,int *,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline u32
FUNC_3(SVGA3dSurfaceFormat VAR_0,
          surf_size_struct VAR_1,
          u32 VAR_2,
          u32 VAR_3,
          u32 VAR_4)

{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 const struct svga3d_surface_desc *VAR_9;
 surf_size_struct VAR_10;
 u32 VAR_11;

 VAR_9 = FUNC_0(VAR_0);

 VAR_6 = 0;
 VAR_7 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_10 = FUNC_2(VAR_1, VAR_8);
  VAR_11 = FUNC_1(VAR_9, &VAR_10, 0);
  VAR_6 += VAR_11;
  if (VAR_8 < VAR_4)
   VAR_7 += VAR_11;
 }

 VAR_5 = VAR_6 * VAR_3 + VAR_7;

 return VAR_5;
}
