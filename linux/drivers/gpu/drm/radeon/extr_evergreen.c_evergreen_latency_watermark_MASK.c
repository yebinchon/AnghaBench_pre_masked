
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ full; } ;
struct evergreen_wm_params {int disp_clk; int num_heads; int vtaps; int bytes_per_pixel; int src_width; int active_time; scalar_t__ interlaced; TYPE_1__ vsc; } ;
struct TYPE_7__ {scalar_t__ full; } ;
typedef TYPE_2__ fixed20_12 ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (TYPE_2__,TYPE_2__) ;
 int FUNC_2 (TYPE_2__) ;
 int FUNC_3 (struct evergreen_wm_params*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static u32 FUNC_5(struct evergreen_wm_params *VAR_0)
{

 u32 VAR_1 = 2000;
 u32 VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3 = (512 * 8 * 1000) / VAR_2;
 u32 VAR_4 = (128 * 4 * 1000) / VAR_2;
 u32 VAR_5 = 40000000 / VAR_0->disp_clk;
 u32 VAR_6 = ((VAR_0->num_heads + 1) * VAR_3) +
  (VAR_0->num_heads * VAR_4);
 u32 VAR_7 = VAR_1 + VAR_6 + VAR_5;
 u32 VAR_8, VAR_9, VAR_10;
 fixed20_12 VAR_11, VAR_12, VAR_13;

 if (VAR_0->num_heads == 0)
  return 0;

 VAR_11.full = FUNC_0(2);
 VAR_12.full = FUNC_0(1);
 if ((VAR_0->vsc.full > VAR_11.full) ||
     ((VAR_0->vsc.full > VAR_12.full) && (VAR_0->vtaps >= 3)) ||
     (VAR_0->vtaps >= 5) ||
     ((VAR_0->vsc.full >= VAR_11.full) && VAR_0->interlaced))
  VAR_8 = 4;
 else
  VAR_8 = 2;

 VAR_11.full = FUNC_0(VAR_2);
 VAR_12.full = FUNC_0(VAR_0->num_heads);
 VAR_11.full = FUNC_1(VAR_11, VAR_12);

 VAR_9 = FUNC_4(FUNC_2(VAR_11), VAR_0->disp_clk * VAR_0->bytes_per_pixel / 1000);

 VAR_11.full = FUNC_0(VAR_8 * VAR_0->src_width * VAR_0->bytes_per_pixel);
 VAR_12.full = FUNC_0(1000);
 VAR_13.full = FUNC_0(VAR_9);
 VAR_12.full = FUNC_1(VAR_13, VAR_12);
 VAR_11.full = FUNC_1(VAR_11, VAR_12);
 VAR_10 = FUNC_2(VAR_11);

 if (VAR_10 < VAR_0->active_time)
  return VAR_7;
 else
  return VAR_7 + (VAR_10 - VAR_0->active_time);

}
